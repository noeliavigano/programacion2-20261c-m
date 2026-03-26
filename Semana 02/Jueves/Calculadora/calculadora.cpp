#include <iostream>
#include "calculadora.h"

using namespace std;

void Calculadora::iniciar(){
   _resultado = 0;   
}

void Calculadora::sumar( float numero){
   _resultado += numero;
}

void Calculadora::restar( float numero){
   _resultado -= numero;
}

void Calculadora::dividir(float numero){
   
   if(numero != 0){
      _resultado /= numero;   
   }
   else{
      cout << "No se puede dividir por cero... " << endl;
   }
}
   
float Calculadora::getResultado(){
   return _resultado;
}
