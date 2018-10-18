#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

cliente* cliente_newCliente(void)
{
    return (cliente*)malloc(sizeof(cliente));
}

int cliente_setNombre (cliente* aux, char* nombre )
{
    strncpy (aux->nombre,nombre,sizeof(aux->nombre));
    return 0;
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

