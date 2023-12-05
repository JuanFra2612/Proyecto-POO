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
Kilómetros a Millas
Millas a Kilómetros
Centímetros a Pulgadas
Pulgadas a Centímetros
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
Centímetros cúbicos a Pulgadas cúbicas
Pulgadas cúbicas a Centímetros cúbicos
Tiempo:

Segundos a Minutos
Minutos a Horas
Horas a Días
Días a Horas
Área:

Metros cuadrados a Pies cuadrados
Pies cuadrados a Metros cuadrados
Kilómetros cuadrados a Millas cuadradas
Millas cuadradas a Kilómetros cuadrados
Velocidad:

Metros por segundo a Kilómetros por hora
Kilómetros por hora a Metros por segundo
Millas por hora a Metros por segundo
Metros por segundo a Millas por hora
Energía:

Julios a Calorías
Calorías a Julios
Kilovatios-hora a Julios
Julios a Kilovatios-hora
*/
