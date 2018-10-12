#include <stdio.h>
#include <stdlib.h>



int initShow(int* arrayInt,int limite);
int* newArray(int size);
int initArray(int* arrayInt,int limite, int valor);
int deleteArray (int* arrayInt);

int main()
{

    int* arrayEnteros;
    arrayEnteros= newArray(10);
    initArray(arrayEnteros,10,5);
    initShow(arrayEnteros,10);

    return 0;
}

int* newArray(int size)
{
    int* retorno = NULL;
    int* aux = malloc(sizeof(int)*size);
    if(aux != NULL && size >0)
    {
        retorno=aux;
        printf("NewArray OK \n");
    }
    return retorno;
}

int initArray(int* arrayInt,int limite, int valor)
{
    int retorno = -1;
    int i;
    if(arrayInt != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            *(arrayInt +i)=valor;
        }
        retorno=0;
    }
return retorno;
}


int initShow(int* arrayInt,int limite)
{
    int retorno = -1;
    int i;
    printf("Mostrar Valores \n");
    if(arrayInt != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            printf("%p - [%d] - %d \n",(arrayInt+i),i,*(arrayInt+i));
        }
        retorno=0;
    }
return retorno;
}

int deleteArray (int* arrayInt)
{
int retorno = -1;

return retorno;

}
