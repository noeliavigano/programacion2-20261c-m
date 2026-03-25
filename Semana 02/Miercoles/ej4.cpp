# include<iostream>
# include<cstring>

using namespace std;

/*4) Hacer una función para concatenar dos vectores de caracteres en un nuevo vector dinámico
que contenga ambas cadenas separadas por un espacio. La función debe recibir los dos
vectores de caracteres cargados, y el vector nuevo donde copiar las dos cadenas.
*/

void unificarCadenas(char *cadenaA, char *cadenaB, char * cadenaNueva);
void mostarCadenaDinamica(char *cadenaNueva, int tam);

int main(){

    char cadena1[5]="Loro"; //4 caracteres + /0
    char cadena2[9]="Parlante"; //8 caracteres + /0
    char *cadenaDinamica;
    int tam=0;

    tam=strlen(cadena1)+strlen(cadena2);    //tamaño de ambas cadenas
    tam=tam+2;                              //le sumo el caracter de corte + el espacio que me pide el enunciado

    cout<<tam<<endl;

    cadenaDinamica = new char[tam];

    unificarCadenas(cadena1, cadena2, cadenaDinamica);

    mostarCadenaDinamica(cadenaDinamica, tam);

    delete [] cadenaDinamica;

	system("pause");
	return 0;
}

void unificarCadenas(char *cadenaA, char *cadenaB, char * cadenaNueva){
    strcpy(cadenaNueva, cadenaA);
    strcat(cadenaNueva, " ");
    strcat(cadenaNueva, cadenaB);
}

void mostarCadenaDinamica(char *cadenaNueva, int tam){
    for(int i=0; i<tam; i++){
        cout<<cadenaNueva[i];
    }

    cout<<endl;
}
