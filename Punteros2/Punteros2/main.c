#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"
#define CANTIDAD 100

int main()
{
    cliente* aux ;
    cliente* pArrayClientes[CANTIDAD];
    int IndiceArray;

    cliente_init(pArrayClientes,CANTIDAD);
    aux= cliente_newCliente();
    IndiceArray=cliente_isEmpty (pArrayClientes,CANTIDAD);
    printf("Indice seleccionado %d \n",IndiceArray);

    if (aux != NULL)
    {
        pArrayClientes[IndiceArray]=aux;
        cliente_setNombre (pArrayClientes[IndiceArray], "Camila Perez");
        cliente_setId (pArrayClientes[IndiceArray],1);
    }

    printf("Nombre : %s , Id : %d", pArrayClientes[0]->nombre,pArrayClientes[0]->id);

    return 0;
}
