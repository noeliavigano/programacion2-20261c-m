# include<iostream>
# include<cstring>

using namespace std;

/*1) Generar un vector dinámico de enteros con un tamaño que definido por un valor que se
ingresa por teclado. Hacer un menú con funciones para cargarlo y mostrarlo por pantalla.

*/

void cargarVector(int *v, int cantElem);
void mostrarVector(int *v, int cantElem);


int main(){

    int opc;
    int *v;
    int cantElem=0;

    while(true){
        system("cls");
        cout<<"1. CARGAR VECTOR"<<endl;
        cout<<"2. MOSTRAR VECTOR"<<endl;
        cout<<"0. SALIR"<<endl;

        cin>>opc;
        system("cls");

        switch(opc){

        case 1: cout<<"Cargar"<<endl;
                cout<<"Ingrese la cantidad de elementos a cargar: ";
                cin>>cantElem;
                v = new int [cantElem];
                if (v==nullptr){
                    cout<<"No se pudo pedir memoria"<<endl;
                    return -1;
                }
                cargarVector(v, cantElem);
                break;

        case 2: mostrarVector(v, cantElem);
                break;

        case 0: cout<<"Saliendo..."<<endl;
                return 0;
                break;
        default: cout<<"Opcion invalida"<<endl;
        }

        system("pause");
        system("cls");

    }
    delete [] v;

	system("pause");
	return 0;
}

void cargarVector(int *v, int cantElem){
    cout<<"Cargar: "<<endl;

    for(int i=0; i<cantElem; i++){
        cout<<"Ingrese numero: ";
        cin>>v[i];
    }
}
void mostrarVector(int *v, int cantElem){

    if(cantElem==0){
        cout<<"Primero debe cargar al vector."<<endl;
        return;
    }
    cout<<"Mostrar: "<<endl;

    for(int i=0; i<cantElem; i++){
        cout<< v[i]<<endl;
    }
}
