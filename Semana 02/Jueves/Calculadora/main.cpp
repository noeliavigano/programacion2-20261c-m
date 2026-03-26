#include<iostream>
#include "calculadora.h"
using namespace std;

int main () {
   
   Calculadora calc, calc2, arrCalc[5];
   
   calc.iniciar();
   calc2.iniciar();
   
   calc.sumar(8);
   calc2.sumar(3);
   
   calc.restar(2);
   calc2.restar(2);
   
   calc.dividir(0);
   
   cout << "Calc: " << calc.getResultado() << endl;
   cout << "Calc2: " << calc2.getResultado() << endl;
   
   /*
   for(int i=0; i<5; i++){
      arrCalc[i].iniciar();
      arrCalc[i].sumar(i+1);
   }
   
   arrCalc[1].sumar(10);
   
   for(int i=0; i<5; i++){
      cout << "#" << i + 1 << ": " << arrCalc[i].getResultado() << endl;
   }
	*/
	return 0;
}

