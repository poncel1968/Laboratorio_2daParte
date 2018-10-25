#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char bufferInt[10];
    char bufferNombre[10];
    char bufferHorasTrabajadas[10];
    char bufferSueldo[10];
    int retorno=-1;
    int flagOnce=1;

    if(pFile!=NULL)
    {
        while(!feof(pFile))
        {
            if( flagOnce)
            {
                flagOnce=0;
                fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);
            }
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);
            printf("%s,%s,%s,%s\n",bufferInt,bufferNombre,bufferHorasTrabajadas,bufferSueldo);
        }

    }


    return retorno;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
