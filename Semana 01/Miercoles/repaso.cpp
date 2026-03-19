///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

//int var1, var2;///VARIABLES GLOBALES

void cargarVector(float v[], int tam){
    int i;///  LOCALES A LA FUNCION funcion()
    for(i=0;i<tam;i++){
        cin>>v[i];
    }
}

void mostrarVector(float v[], int tam){
    int i;///  LOCALES A LA FUNCION funcion()
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
}

void cargarVectorChar(char v[], int tam){
    int i;///  LOCALES A LA FUNCION funcion()
    for(i=0;i<tam;i++){
        cin>>v[i];
    }
}

void mostrarVectorChar(char v[], int tam){
    int i;///  LOCALES A LA FUNCION funcion()
    for(i=0;i<tam;i++){
        cout<<v[i];
    }
}

void mostrarPalabra(char vletras[]){
    int i=0;
    while(vletras[i]!='\0'){
        cout<<vletras[i];
        i++;
    }

}
int main(){

    const int TAMANIO1=5;
    //int var1, var2, mat[3][5];///LOCALES A main()

    float vreal[TAMANIO1];///vector de float de 10 elementos. Al momento de la declaración se establece el tamaño
    char palabra[10];///vector de char de 15 elementos
    //cargarVector(vreal,TAMANIO1);
    //mostrarVector(vreal,TAMANIO1);

    ///cargarVectorChar(palabra,10);
    ///mostrarVectorChar(palabra,10);

    ///int entera=123456;
    ///char letra='o';

    ///cin>>vreal;///NO COMPILA
    cin>>palabra;///El nombre de un vector es un PUNTERO CONSTANTE QUE CONTIENE LA DIRECCIÓN DEL PRIMER ELEMENTO DE ESE VECTOR

    mostrarPalabra(palabra);
    cout<<endl<<endl;
    palabra[3]='\0';
    mostrarPalabra(palabra);
    cout<<endl;
	palabra="se podrá";

	if(palabra=="se podrá")
	system("pause");
	return 0;

}
