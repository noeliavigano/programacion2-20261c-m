///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;/*

variables-> primero, segundo: objetos de la clase Circulo

funciones->Aparecer(), Ocultar(), Avanzar(), posicionEnX()

métodos de la clase Circulo->métodos determinan que puede
hacer un objeto
*/
class Circulo{
private:///propiedades-> variables de la clase
    int diametro, color,posicionX, posicionY;
public:///comportamiento-> métodos o funciones de las clases
    Circulo(int _posicion, int _color);
    void Aparecer();
    int posicionEnX();
    int posicionEnY();
    void Ocultar();
    void Avanzar(int desplazamiento,int direccion);
};

int main(){
    ///funcion()->funciones globales
    int a=5,b;
    Circulo primero(10, AZUL), segundo(10, AMARILLO);
    Circulo *punt, vecRedondo[10], matCir[3][3];
    primero.Aparecer(10, 10);
    segundo.Aparecer(80, 10);
    while(primero.posicionEnX()+10!=segundo.posicionX()){
        primero.Avanzar(1,DERECHA);
        segundo.Avanzar(1,IZQUIERDA)
    }
	primero.Ocultar();
	segundo.Ocultar();
	system("pause");
	return 0;

}
