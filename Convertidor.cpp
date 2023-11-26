// Convertidor.cpp

#include <graphics.h>

#include "Convertidor.h"

void Convertidor::Portada() {
     
     setbkcolor(WHITE);//Fondo 
     cleardevice();//Limpieza de Pantalla 
     readimagefile("IPN.jpg",5,5,130,130);
     readimagefile("ESIME.jpg",960,5,1095,130);
     
    // Dibujar el título
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
    outtextxy(120, 250, "1. González Contreras Juan Francisco");
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

    // Dibujar el título
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(250, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(275, 135, "Bienvenido al convertidor. Seleccione la categoría de conversión:");

    // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 3;
   
    //boton salir
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, RED); // Relleno del Rectángulo
    bar(950, 700, 1050, 735); // Contorno del Rectángulo
    rectangle(950 ,700, 1050, 735); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(RED); // Fondo de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(975, 705, "Salir");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(300, 200, 800, 250); // Contorno del Rectángulo
    rectangle(300 ,200, 800, 250); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(475, 215, "Tipos de Unidad");
    
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(300, 275, 500, 425); // Contorno del Rectángulo
    rectangle(300 ,275, 500, 425); // Rectángulo
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(600, 275, 800, 425); // Contorno del Rectángulo
    rectangle(600 ,275, 800, 425); // Rectángulo
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(300, 450, 500, 480); // Contorno del Rectángulo
    rectangle(300 ,450, 500, 480); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(360, 455, "Unidad 1");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(600, 450, 800, 480); // Contorno del Rectángulo
    rectangle(600 ,450, 800, 480); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(660, 455, "Unidad 2");
    
    
} 

 void Convertidor::menutipo(){
 
     setbkcolor(WHITE);
     cleardevice(); // Limpiar la pantalla
     
     // Dibujar el título
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(250, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(275, 135, "Bienvenido al convertidor. Seleccione la categoría de conversión:");
    
      // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 3;
    
    
    
    // Botón Longitud (L)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(300, 200, 800, 250); // Contorno del Rectángulo
    rectangle(300 ,200, 800, 250); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(475, 215, "Tipos de Unidad");
    
    // Botón Temperatura (T)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 250, 800, 300); // Contorno del Rectángulo
    rectangle(300 ,250, 800, 300); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500, 265, "Longitud (L)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 300, 800, 350); // Contorno del Rectángulo
    rectangle(300 ,300, 800, 350); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500, 315, "Tiempo (T)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 350, 800, 400); // Contorno del Rectángulo
    rectangle(300 ,350, 800, 400); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500, 365, "Masa (M)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 400, 800, 450); // Contorno del Rectángulo
    rectangle(300 ,400, 800, 450); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500,415, "Volumen (V)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 450, 800, 500); // Contorno del Rectángulo
    rectangle(300 ,450, 800, 500); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500,465, "Velocidad (F)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 500, 800, 550); // Contorno del Rectángulo
    rectangle(300 ,500, 800, 550); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500,515, "Area (A)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 550, 800, 600); // Contorno del Rectángulo
    rectangle(300 ,550, 800, 600); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500,565, "Temperatura (C)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(300, 600, 800, 650); // Contorno del Rectángulo
    rectangle(300 ,600, 800, 650); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(500,615, "Energia (E)");
    getch();
}
    
    
    
    
    

  /*  // Botón Temperatura (T)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTRED); // Relleno del Rectángulo
    bar(250, 300, 450, 350); // Contorno del Rectángulo
    rectangle(250, 300, 450, 350); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTRED); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 315, "Temperatura (T)");

    // Botón Peso/Masa (M)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 400, 450, 450); // Contorno del Rectángulo
    rectangle(250, 400, 450, 450); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 415, "Peso/Masa (M)");

    // Botón Volumen (V)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTGREEN); // Relleno del Rectángulo
    bar(250, 500, 450, 550); // Contorno del Rectángulo
    rectangle(250, 500, 450, 550); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTGREEN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(275, 515, "Volumen (V)");

    // Botón Velocidad (F)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTMAGENTA); // Relleno del Rectángulo
    bar(600, 200, 800, 250); // Contorno del Rectángulo
    rectangle(600, 200, 800, 250); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTMAGENTA); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 215, "Velocidad (F)");

    // Botón Área (A)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, YELLOW); // Relleno del Rectángulo
    bar(600, 300, 800, 350); // Contorno del Rectángulo
    rectangle(600, 300, 800, 350); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(YELLOW); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 315, "Área (A)");

    // Botón Energía (E)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTBLUE); // Relleno del Rectángulo
    bar(600, 400, 800, 450); // Contorno del Rectángulo
    rectangle(600, 400, 800, 450); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTBLUE); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 415, "Energía (E)");

    // Botón Tiempo (I)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTGRAY); // Relleno del Rectángulo
    bar(600, 500, 800, 550); // Contorno del Rectángulo
    rectangle(600, 500, 800, 550); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTGRAY); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(655, 515, "Tiempo (I)");
*/
    



