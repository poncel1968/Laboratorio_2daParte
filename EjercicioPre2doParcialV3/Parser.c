#include "LinkedList.h"
#include <stdio.h>
#include <stdlib.h>


int parser_parseCompras(char* fileName, LinkedList* lista)
{
  char nombreCliente[128];
  char* idProductoStr;
  int idProducto;
  char* unidadesStr;
  int unidades;
  char* precioUnitarioStr;
  float precioUnitario;
  char* ivaPorcentajeStr;
  float ivaPorcentaje;
  float montoTotal;
  FILE* pFile = fopen(fileName,"r");
  ///nombreCliente,idProducto,precioUnitario,unidades,iva

    int retorno=-1;
    int flagOnce=1;
    Compra * pCompra;

    if(pFile!=NULL)
    {
        while(!feof(pFile))
        {
            if( flagOnce)
            {
                flagOnce=0;
                fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",nombreCliente,idProductoStr,precioUnitarioStr,unidadesStr,ivaPorcentajeStr);
            }
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);

            idProducto=atoi(idProductoStr);
            unidades=atoi(unidadesStr);
            precioUnitario=atof(precioUnitarioStr);
            ivaPorcentaje=atof(ivaPorcentajeStr);
            montoTotal=precioUnitario*unidades;

            pCompra = Compra_newConParametros(nombreCliente,idProducto,unidades,precioUnitario,iva,montoTotal);

            if(Compra!=NULL)
            {
                retorno=0;
                ll_add(lista,Compra);
            }

        }

    }

    return retorno;

  ///  return 1;  OK
}

