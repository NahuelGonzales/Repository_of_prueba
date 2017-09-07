#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int indice,auxCodigo;
    int contProductos=0;
    eProducto Productos[1000];
    while(seguir=='s')
    {
        printf("1- Agregar Producto\n");
        printf("2- Modificar Producto\n");
        printf("3- Borrar Producto\n");
        printf("4- Informar\n");
        printf("5- Listar\n");
        printf("6- Salir\n\n\n");
        fflush(stdin);
        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                if(alta(Productos,contProductos))
                {
                    contProductos++;
                }
                break;
            case 2:
                if(vectorVacio(contProductos)==1)
                {
                    printf("Ingrese el codigo del producto a modificar:\n");
                    fflush(stdin);
                    scanf("%d",&auxCodigo);
                    indice=BuscarIndice(Productos,contProductos,auxCodigo);
                    if(indice!=-1)
                    {
                        if(modificar(Productos,indice))
                        {
                            printf("SE MODIFICO CORRECTAMENTE\n\n");
                        }
                    }
                    else
                    {
                        printf("Ingreso un codigo erroneo. \n");
                    }

                }
                break;
            case 3:
                if(vectorVacio(contProductos)==1)
                {

                }
                break;
            case 4:
                if(vectorVacio(contProductos)==1)
                {

                }
                break;
            case 5:
                if(vectorVacio(contProductos)==1)
                {

                }
                break;
            case 6:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
