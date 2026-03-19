///Fecha:
///Autor:
///Comentario:

#include <iostream>
#include <cstring>

using namespace std;


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
///int comparar( char *cad1, char *cad2){
///int comparar( char cad1[15], char cad2[15])
int comparar( char cad1[], char cad2[]){
    int i=0, cantPos;
    int tam1=strlen(cad1);///strlen devuelve la cantidad de caracteres que tiene una cadena
    int tam2=strlen(cad2);
    if(tam1<tam2)cantPos=tam1;
    else if(tam2<tam1)cantPos=tam2;
    else cantPos=tam1;

    for(i=0;i<cantPos;i++){
        if(cad1[i]>cad2[i])return 1;
        if(cad1[i]<cad2[i])return -1;
    }
    return 0;

}
///La función tiene un problema cuando las palabras empiezan con las mismas letras, pero uno es más corta
///que la otra (p.e. alba y albacete)

/*int otraComparar( char *cad1, char *cad2){
    int i=0;
    while(*cad1!='\0' && *(cad2+i)!='\0'){
        if(*cad1>*(cad2+i))return 1;
        if(*cad1<*(cad2+i))return -1;
        cad1++;
        i++;
    }
    return 0;


}*/
///Esta función devuelve 0 si son iguales, un valor positivo si la primera es más grande
/// y un valor negativo si la primera es más chica

int otraComparar( char *cad1, char *cad2){///
    while(*cad1 && *cad2){///por qué y cuando se corta el while?
        if(*cad1!=*cad2) return *cad1-*cad2;
        cad1++;
        cad2++;
    }
    return *cad1-*cad2;

///para que el while siga tanto *cad1 como *cad2 tienen que contener un valor
///true
}
///& antepuesto a un nombre de variable me permite llegar a la dirección de esa variable->operador de dirección
///& antepuesto a un nombre de variable, pero en el momento de la declaración indica que
/// estoy declarando una referencia


///* antepuesto a una dirección de memoria(puntero) me permite llegar al contenido->indirección
///* antepuesto a un nombre en el momento de la declaración indica que declare un puntero

int main(){
    cout<<'z'-'a'<<endl;
    char palabra1[15], palabra2[15];
    cin>>palabra1;
    strcpy(palabra1,"ave");
    cout<<palabra1<<endl;
    palabra1[3]='a';
    cout<<palabra1<<endl;
    /*cin>>palabra2;
    int valorComparacion=otraComparar(palabra1, palabra2);
    cout<<"LA FUNCION DEVOLVIO "<<valorComparacion<<endl;*/
	system("pause");
	return 0;

}
/*
int v[5]

    v=&v[0]
    *v=*&v[0]
    *v=v[0]

    v+0=&v[0]
    v+1=&v[1]
    v+2=&v[2]

    v+n=&v[n]

    *(v+n)=v[n]

    v+n=dirección de v a la que suma una cantidad de bytes equivalente
    a multiplicar n por el tamaño del tipo de datos
    */
