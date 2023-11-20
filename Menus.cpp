// Menus.cpp

#include <graphics.h>
#include "Menus.h"

void Portada() {

    // Dibujar el título
    setcolor(WHITE);
    settextstyle(4,0,4);
    outtextxy(300,50,"Convertidor de Unidades");

    // Configurar colores y fuentes para la información
    setcolor(YELLOW);
    settextstyle(4,0,2);

    //Escuela
    setcolor(YELLOW);
    outtextxy(100,150,"Escuela:");
    setcolor(WHITE);
    outtextxy(225,150,"Instituto Politecnico Nacional");
    
    //Materia
    setcolor(YELLOW);
    outtextxy(100, 200, "Materia:");
    setcolor(WHITE);
    outtextxy(225, 200, "Programacion Orientada a Objetos");

    //Integrantes
    setcolor(YELLOW);
    outtextxy(100, 250, "Integrantes:");
    setcolor(WHITE);
    outtextxy(120, 280, "1. González Contreras Juan Frnacisco");
    outtextxy(120, 310, "2. Chino Lopez Ulises");
    outtextxy(120, 340, "3. Gilberto");
    
    setcolor(YELLOW);
    outtextxy(100, 400, "Tema:");
    setcolor(WHITE);
    outtextxy(200, 400, "Proyecto Final");
}
