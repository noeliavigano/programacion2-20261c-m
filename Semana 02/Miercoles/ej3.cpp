# include<iostream>
# include<cstring>

using namespace std;

/*
3) Dado un vector (estático) de enteros ya cargado, generar un nuevo vector (dinámico) con los
valores positivos contenidos en el vector original. Si el vector original no contiene valores
positivos informarlo mediante un cartel.
*/

int contarPositivos(int *arr);
void copiarPositivos(int *arr, int *v);
void mostrarVectorDinamico(int *v, int contador);


int main(){

    int arr[5]={-8,4,6,-22,5};
    //int arr[5]={-8,-4,6,-22,-5};
    //int arr[5]={-8,-4,-6,-22,-5};
    int contador=0;
    int *v;

    contador=contarPositivos(arr);

    if(contador==0){
        cout<<"No hay valores positivos"<<endl;
    }
    else{
        v=new int[contador];
        copiarPositivos(arr,v);
        mostrarVectorDinamico(v,contador);
    }

    delete [] v;
	system("pause");
	return 0;
}

int contarPositivos(int *arr){
    int cont=0;
    for(int i=0; i<5; i++){
        if(arr[i]>0){
            cont++;
        }
    }
    return cont;
}

void copiarPositivos(int *arr, int *v){
    int indice=0;
    //arr:{-8,4,6,-22,5};       v=cant elem = 3 (0,1,2)
    for(int i=0; i<5; i++){
        if(arr[i]>0){
            v[indice]=arr[i];
            indice++;
        }
    }
}

void mostrarVectorDinamico(int *v, int contador){

    cout<<"Mostrar: "<<endl;

    for(int i=0; i<contador; i++){
        cout<< v[i]<<endl;
    }
}
