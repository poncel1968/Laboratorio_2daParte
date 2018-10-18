#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

typedef struct
{
    char nombre[64];
    int id;
}cliente;

cliente* cliente_newCliente(void);
int cliente_setNombre (cliente* aux,char* nombre);
int cliente_setId (cliente* aux,int id);
int cliente_isEmpty (cliente* aux[],int limite);

#endif // CLIENTE_H_INCLUDED
