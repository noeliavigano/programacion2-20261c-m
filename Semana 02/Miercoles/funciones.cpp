///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;


///void cambiarValor(int var);///parámetro por valor
///void cambiarValor(int *var);///parámetro por dirección

void cambiarValor(int &var);///parámetro por referencia

int main(){
    int var2=10;
    cambiarValor(var2);
    cout<<"DIRECCION DE var2 "<<&var2<<endl;
    cout<<var2<<endl;
    ///QUE VOY A VER ACA AL EJECUTAR EL PROGRAMA?
            ///5???

	system("pause");
	return 0;

}

/*void cambiarValor(int var){
    var=5;
    cout<<"DIRECCION DE var "<<&var<<endl;
}
*/
/*
void cambiarValor(int *var){
    *var=5;
    cout<<"DIRECCION DE var "<<var<<endl;
}
*/

void cambiarValor(int &var){
    var=5;
    cout<<"DIRECCION DE var "<<&var<<endl;
}
