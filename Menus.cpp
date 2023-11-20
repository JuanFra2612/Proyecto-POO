// Menus.cpp

#include <graphics.h>
#include "Menus.h"

void Portada() {
     setbkcolor(LIGHTGREEN);
     cleardevice();
     readimagefile("IPN.jpg",5,5,130,130);
     readimagefile("ESIME.jpg",960,5,1095,130);
    // Dibujar el título
    setcolor(RED);
    settextstyle(4,0,4);
    outtextxy(250,50,"Instituto Politecnico Nacional");

    // Configurar colores y fuentes para la información
    setcolor(RED);
    settextstyle(4,0,2);
    
    //Materia
    setcolor(RED);
    outtextxy(100, 150, "Materia:");
    setcolor(BLACK);
    outtextxy(225, 150, "Programacion Orientada a Objetos");

    //Integrantes
    setcolor(RED);
    outtextxy(100, 200, "Integrantes:");
    setcolor(BLACK);
    outtextxy(120, 250, "1. González Contreras Juan Francisco");
    outtextxy(120, 280, "2. Chino Lopez Ulises");
    outtextxy(120, 310, "3. Gilberto");
    
    setcolor(RED);
    outtextxy(100, 400, "Tema:");
    setcolor(BLACK);
    outtextxy(200, 400, "Proyecto Final");
}
