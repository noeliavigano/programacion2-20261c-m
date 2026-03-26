///Fecha:
///Autor:
///Comentario:

#include <iostream>


///Agregar los sets() y los gets() faltantes.
///Agregar una función que reciba una fecha y que devuelva
///verdadero si la fecha recibida es igual a la fecha contenida
///en el objeto original, y falso si no.

///hoy.compararFecha(ayer)

using namespace std;
///Clase: es un molde donde se definen las propiedades y el
///comportamiento que van a tener los objetos de esa clase
///Es un tipo de dato definido por el usuario

///Objeto: es una variable o instancia de una clase.
///Cada objeto es único y tiene un estado. El estado está
///definido por los valores de las propieddes en un momento

///Encapsulamiento: sólo es posible acceder a las propiedades
///mediante mecanismos provistos por la misma clase (métodos)
class Fecha{
private:///variables de la clase
    int dia, mes, anio;
public:
    void setDia(int _dia){
        if(_dia>=1 && _dia<=31)dia=_dia;
    }
    int getDia(){return dia;}
    void Cargar(){
        cout<<"DIA ";
        cin>>dia;
        cout<<"MES ";
        cin>>mes;
        cout<<"ANIO ";
        cin>>anio;
    }
    void Mostrar();///prototipo del método
    void MostrarConBarra();
};

void Fecha::Mostrar(){
    cout<<"DIA "<<dia<<endl;
    cout<<"MES "<<mes<<endl;
    cout<<"ANIO "<<anio<<endl;
}
void Fecha::MostrarConBarra(){
    cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
    Fecha hoy;
    hoy.Cargar();
    hoy.MostrarConBarra();
    cout<<endl;
    hoy.setDia(10);
    hoy.MostrarConBarra();

	system("pause");
	return 0;

}
