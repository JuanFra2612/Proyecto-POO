#ifndef _CONVERTIDOR_H
#define _CONVERTIDOR_H

class Convertidor : public Unidades{

      private: 
      
      float r;
      
      public: int xm,ym;
              void Portada();   
              void Menu();
              void menutipo();
              void plantillamenu();
             void Longitud();
             void Temperatura();
             void Peso();
             void Volumen();
             void Tiempo();
             void Area();
             void Velocidad();
             void energia();
               
};


#endif 
/*Longitud:

Metros a Pies
Pies a Metros
Kil�metros a Millas
Millas a Kil�metros
Cent�metros a Pulgadas
Pulgadas a Cent�metros
Temperatura:

Celsius a Fahrenheit
Fahrenheit a Celsius
Celsius a Kelvin
Kelvin a Celsius
Peso/Masa:

Kilogramos a Libras
Libras a Kilogramos
Gramos a Onzas
Onzas a Gramos
Volumen:

Litros a Galones
Galones a Litros
Mililitros a Onzas
Onzas a Mililitros
Cent�metros c�bicos a Pulgadas c�bicas
Pulgadas c�bicas a Cent�metros c�bicos
Tiempo:

Segundos a Minutos
Minutos a Horas
Horas a D�as
D�as a Horas
�rea:

Metros cuadrados a Pies cuadrados
Pies cuadrados a Metros cuadrados
Kil�metros cuadrados a Millas cuadradas
Millas cuadradas a Kil�metros cuadrados
Velocidad:

Metros por segundo a Kil�metros por hora
Kil�metros por hora a Metros por segundo
Millas por hora a Metros por segundo
Metros por segundo a Millas por hora
Energ�a:

Julios a Calor�as
Calor�as a Julios
Kilovatios-hora a Julios
Julios a�Kilovatios-hora
*/
