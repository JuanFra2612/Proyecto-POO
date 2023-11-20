// Menus.cpp

#include <graphics.h>
#include "Menus.h"

void Portada() {

    // Dibujar el título
    setcolor(WHITE);
    settextstyle(4,0,4);
    outtextxy(250,50,"Instituto Politecnico Nacional");

    // Configurar colores y fuentes para la información
    setcolor(YELLOW);
    settextstyle(4,0,2);
    
    //Materia
    setcolor(YELLOW);
    outtextxy(100, 150, "Materia:");
    setcolor(WHITE);
    outtextxy(225, 150, "Programacion Orientada a Objetos");

    //Integrantes
    setcolor(YELLOW);
    outtextxy(100, 200, "Integrantes:");
    setcolor(WHITE);
    outtextxy(120, 250, "1. González Contreras Juan Francisco");
    outtextxy(120, 280, "2. Chino Lopez Ulises");
    outtextxy(120, 310, "3. Gilberto");
    
    setcolor(YELLOW);
    outtextxy(100, 400, "Tema:");
    setcolor(WHITE);
    outtextxy(200, 400, "Proyecto Final");
}
