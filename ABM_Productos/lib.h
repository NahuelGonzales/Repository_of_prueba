typedef struct
{
    int codigo;
    char descripcion[50];
    float importe;
    int cantidad;
}eProducto;


int alta(eProducto productos[],int indice);
int modificar(eProducto productos[], int indice);
int vectorVacio(int cant);
void mostrarProducto(eProducto producto);
int BuscarIndice(eProducto productos[], int tam, int codigo);

