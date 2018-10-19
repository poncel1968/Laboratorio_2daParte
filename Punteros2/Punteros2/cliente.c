#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int static isValidNombre(char * nombre);

int isValidNombre(char * nombre)
{

    return 1;
}

cliente* cliente_newCliente(void)
{
    return (cliente*)malloc(sizeof(cliente));
}

int cliente_setNombre (cliente* aux, char* nombre )
{
   int retorno=-1;
   if (aux != NULL && isValidNombre(nombre))
   {
        strncpy (aux->nombre,nombre,sizeof(aux->nombre));
        retorno=0;
   }
    return retorno;
}

int cliente_setId (cliente* aux,int id)
{
    aux->id=id;
    return 0;
}

int cliente_isEmpty (cliente* aux[],int limite)
{
    int retorno = -1;
    int i;
    for (i=0;i<limite;i++)
    {
       if (aux[i]==NULL)
       {
            retorno = i;
            break;
       }
    }
    return retorno;
}

int cliente_getNombre(cliente* aux, char* nombre)
{
    int retorno=-1;

    if (aux != NULL && nombre != NULL)
    {
        strncpy(nombre,aux->nombre,sizeof(aux->nombre));
        retorno=0;
    }
    return retorno;
}
