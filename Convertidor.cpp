// Convertidor.cpp

#include <graphics.h>
#include "Convertidor.h"

void Convertidor::Portada() {
     
     setbkcolor(WHITE);//Fondo 
     cleardevice();//Limpieza de Pantalla 
     readimagefile("IPN.jpg",5,5,130,130);
     readimagefile("ESIME.jpg",960,5,1095,130);
     
    // Dibujar el t�tulo
    setcolor(RED);//Color de Texto
    settextstyle(6,0,4);//Formato de Texto
    outtextxy(250,50,"Instituto Politecnico Nacional");

    
    //Materia
    setcolor(RED);//Color de Texto
    settextstyle(4,0,2);//Formato de Texto
    outtextxy(100, 150, "Materia:");
    setcolor(BLACK);//Color de Texto
    outtextxy(225, 150, "Programacion Orientada a Objetos");

    //Integrantes
    setcolor(RED);//Color de Texto
    settextstyle(4,0,2);//Formato de Texto
    outtextxy(100, 200, "Integrantes:");
    setcolor(BLACK);//Color de Texto
    outtextxy(120, 250, "1. Gonz�lez Contreras Juan Francisco");
    outtextxy(120, 280, "2. Chino Lopez Ulises");
    outtextxy(120, 310, "3. Gilberto");
    
    setcolor(RED);//Color de Texto
    outtextxy(100, 400, "Tema:");
    setcolor(BLACK);//Color de Texto
    outtextxy(200, 400, "Proyecto Final");
    getch();
}

void Convertidor::Menu() {
    cleardevice(); // Limpiar la pantalla

    // Dibujar el t�tulo
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(250, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(50, 150, "Bienvenido al convertidor. Seleccione la categor�a de conversi�n:");

    // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tama�o del texto de los botones
    int Tam = 3;

    // Bot�n Longitud (L)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(250, 200, 450, 250); // Contorno del Rect�ngulo
    rectangle(250, 200, 450, 250); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 215, "Longitud (L)");

    // Bot�n Temperatura (T)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTRED); // Relleno del Rect�ngulo
    bar(250, 300, 450, 350); // Contorno del Rect�ngulo
    rectangle(250, 300, 450, 350); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTRED); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 315, "Temperatura (T)");

    // Bot�n Peso/Masa (M)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 400, 450, 450); // Contorno del Rect�ngulo
    rectangle(250, 400, 450, 450); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 415, "Peso/Masa (M)");

    // Bot�n Volumen (V)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTGREEN); // Relleno del Rect�ngulo
    bar(250, 500, 450, 550); // Contorno del Rect�ngulo
    rectangle(250, 500, 450, 550); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTGREEN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 515, "Volumen (V)");

    // Bot�n Velocidad (F)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTMAGENTA); // Relleno del Rect�ngulo
    bar(600, 200, 800, 250); // Contorno del Rect�ngulo
    rectangle(600, 200, 800, 250); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTMAGENTA); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 215, "Velocidad (F)");

    // Bot�n �rea (A)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, YELLOW); // Relleno del Rect�ngulo
    bar(600, 300, 800, 350); // Contorno del Rect�ngulo
    rectangle(600, 300, 800, 350); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(YELLOW); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 315, "�rea (A)");

    // Bot�n Energ�a (E)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTBLUE); // Relleno del Rect�ngulo
    bar(600, 400, 800, 450); // Contorno del Rect�ngulo
    rectangle(600, 400, 800, 450); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTBLUE); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 415, "Energ�a (E)");

    // Bot�n Tiempo (I)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTGRAY); // Relleno del Rect�ngulo
    bar(600, 500, 800, 550); // Contorno del Rect�ngulo
    rectangle(600, 500, 800, 550); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTGRAY); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 515, "Tiempo (I)");

    getch();
}


