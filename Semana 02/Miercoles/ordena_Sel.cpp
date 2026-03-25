///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

void cargarVector(int *v,int tam);

void mostrarVector(int *v,int tam);

void ordenarSeleccion(int *v, int tam);

int main(){
    int vec[5];
    cargarVector(vec,5);
    mostrarVector(vec,5);
    ordenarSeleccion(vec,5);
    mostrarVector(vec,5);

	system("pause");
	return 0;

}


void cargarVector(int *v,int tam){
    int i;
    for(i=0;i<tam;i++){
        cin>>v[i];
    }
}

void mostrarVector(int *v,int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}

void ordenarSeleccion(int *v, int tam){
    int i, j;
    int posMax, aux;
    for(i=0;i<tam-1;i++){
        posMax=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posMax]){
                posMax=j;
            }
        }
        aux=v[i];
        v[i]=v[posMax];
        v[posMax]=aux;

    }

}

