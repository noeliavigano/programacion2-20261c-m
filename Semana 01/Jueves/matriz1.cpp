///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;
///Se tiene los datos de las ventas de un negocio en el primer trimestre
///del año.
///Por cada venta se registro el mes, la sucursal y la cantidad de Pcs
///vendidas. Para indicar el fin de los registros se ingresa un 0 como mes.

///Hay cinco sucursales (identificadas del 1 al 5).
///Se quiere saber la cantidad de productos vendidos en cada sucursal
///cada mes del trimestre

/*Mes 1, sucursal 1: 50 pcs
Mes 1, sucursal 2: 15
Mes 1, sucursal 3: 10
Mes 1, sucursal 4: 0
Mes 1, sucursao 5: 8

Mes 2, sucursal 1: 50 pcs
Mes 2, sucursal 2: 15
Mes 2, sucursal 3: 10
Mes 2, sucursal 4: 0
Mes 2, sucursao 5: 8

Mes 3, sucursal 1: 50 pcs
Mes 3, sucursal 2: 15
Mes 3, sucursal 3: 10
Mes 3, sucursal 4: 0
Mes 3, sucursao 5: 8
*/

///void cargarVentas(int (*mat)[5]);
void cargarVentas(int mat[3][5]);///prototipo o declaración de la función
void mostrarVentas(int mat[][5],int filas,int columnas);
void mostrarVector(int *, int );

int main(){
    const int FILAS=3;
    const int COLUMNAS=5;
    int mat[FILAS][COLUMNAS]={};


    cargarVentas(mat);
    mostrarVentas(mat,FILAS,COLUMNAS);
    mostrarVector(*mat,FILAS*COLUMNAS);

	system("pause");
	return 0;

}


void cargarVentas(int mat[3][5]){
    int mes, sucursal, cantidad;
    cout<<"INGRESAR MES ";
    cin>>mes;
    while(mes!=0){
        cout<<"INGRESAR SUCURSAL ";
        cin>>sucursal;
        cout<<"INGRESAR CANTIDAD VENDIDA ";
        cin>>cantidad;
        mat[mes-1][sucursal-1]+=cantidad;
        cout<<"INGRESAR MES ";
        cin>>mes;
    }
}

/*
void mostrarVentas(int mat[3][5],int filas,int columnas){
    int i, j;
    for(i=0;i<filas;i++){
        cout<<"MES "<<i+1<<endl;
        for(j=0;j<columnas;j++){
            cout<<"VENTAS EN SUCURSAL "<<j+1<<" "<<mat[i][j]<<endl;
        }
        cout<<endl;
    }
}
*/
void mostrarVentas(int mat[3][5],int filas,int columnas){
    int i, j;
    for(i=0;i<filas;i++){
        cout<<"MES "<<i+1<<endl;
        for(j=0;j<columnas;j++){
            cout<<"VENTAS EN SUCURSAL "<<j+1<<" "<<*(*(mat+i)+j)<<endl;
        }
        cout<<endl;
    }
}

void mostrarVector(int *v, int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<endl;
    }


}
