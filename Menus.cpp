// Menus.cpp

#include <graphics.h>
#include "Menus.h"

void Portada() {
     
    initwindow(1100, 600, "Convertidor de Unidades");

    // Configurar colores y fuentes para la portada
    setcolor(WHITE);
    settextstyle(4,0,4);

    // Dibujar el t�tulo
    outtextxy(300,50,"Convertidor de Unidades");

    // Configurar colores y fuentes para la informaci�n
    setcolor(YELLOW);
    settextstyle(4,0,2);

    // Mostrar la informaci�n de la escuela
    outtextxy(100,150,"Escuela: [Nombre de la Escuela]");
    
    // Mostrar la informaci�n de la materia
    outtextxy(100, 200, "Materia: Programacion Orientada a Objetos");

    //Integrantes
    outtextxy(100, 250, "Integrantes:");
    outtextxy(120, 280, "1. Gonz�lez Contreras Juan Frnacisco");
    outtextxy(120, 310, "2. Chino Lopez Ulises");
    outtextxy(120, 340, "3. Gilberto");
    

    outtextxy(100, 380, "Tema: Proyecto Final Graficos ");
}
