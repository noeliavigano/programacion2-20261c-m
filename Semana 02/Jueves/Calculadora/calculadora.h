#pragma once

/**
   Las clases se escriben en PascalCase

   camelCase => variables y funciones
   PascalCase => Clases 
   snake_case => variables y funciones

   UPPERCASE => constantes
   lowecase 

   kebab-case <== No se usa en C++
*/

/**
   Clasificacion - Abstraccion
   Encapsulamiento
   Herencia
      Composicion
   Polimorfismo
*/

class Calculadora {
   public:
      void iniciar();
      void sumar( float numero);
      void restar( float numero);
      void dividir(float numero);
      float getResultado();

   private:
      float _resultado;
};



