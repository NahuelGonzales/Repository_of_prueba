#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int alta(eProducto productos[],int indice)
{
    int rslt=0;
    if(indice>=0)
    {
        printf("Ingrese Codigo\n");
        fflush(stdin);
        scanf("%d",&productos[indice].codigo);
        printf("Ingrese Descripcion\n");
        fflush(stdin);
        scanf("%s",productos[indice].descripcion);
        printf("Ingrese Importe\n");
        fflush(stdin);
        scanf("%f",&productos[indice].importe);
        printf("Ingrese Cantidad\n");
        fflush(stdin);
        scanf("%d",&productos[indice].cantidad);
        rslt=1;
    }
    return rslt;
}

int modificar(eProducto productos[], int indice)
{
    int rslt=0;
    int opcion;
    char seguir='s';
    printf("\n\n");
    mostrarProducto(productos[indice]);
    printf("\n\n");
    while(seguir=='s')
    {
        printf("SELECCIONE LO QUE DESEA MODIFICAR:\n");
        printf("1- Descripcion\n");
        printf("2- Importe\n");
        printf("3- Cantidad\n");
        printf("4- Salir\n\n\n");
        fflush(stdin);
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                printf("Ingrese Descripcion\n");
                fflush(stdin);
                scanf("%s",productos[indice].descripcion);
                rslt=1;
                break;
            case 2:
                printf("Ingrese Importe\n");
                fflush(stdin);
                scanf("%f",&productos[indice].importe);
                rslt=1;
                break;
            case 3:
                printf("Ingrese Cantidad\n");
                fflush(stdin);
                scanf("%d",&productos[indice].cantidad);
                rslt=1;
                break;
            case 4:
                seguir = 'n';
                break;
        }
    }
    return rslt;
}

int vectorVacio(int cant)
{
    int rta=1;
    if(cant<=0)
    {
        printf("ERROR, NO SE A INGRESADO NINGUN PRODUCTO, POR FAVOR AGREGUE UNO.\n");
    }
        else
        {
            rta=1;
        }
    return rta;
}

void mostrarProducto(eProducto producto)
{
    printf("Codigo:%d\n",producto.codigo);
    printf("Descripcion:%s\n",producto.descripcion);
    printf("Importe:%f\n",producto.importe);
    printf("Cantidad:%d\n",producto.cantidad);
}

int BuscarIndice(eProducto productos[], int tam, int codigo)
{
    int indice=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(productos[i].codigo==codigo)
        {
            indice=i;
            break;
        }
    }
    return indice;
}
