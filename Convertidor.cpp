// Convertidor.cpp

#include <graphics.h>
#include "Visual.h"
#include "Unidades.h"
#include "Convertidor.h"
#define ESC  27


void Convertidor::Portada() {
     
     setbkcolor(WHITE);//Fondo 
     cleardevice();//Limpieza de Pantalla 
     readimagefile("IPN.jpg",50,5,165,130);
     readimagefile("ESIME.jpg",790,5,940,130);
     
    // Dibujar el t�tulo
    setcolor(RED);//Color de Texto
    settextstyle(6,0,4);//Formato de Texto
    outtextxy(220,50,"Instituto Politecnico Nacional");

    
    //Materia
    setcolor(RED);//Color de Texto
    settextstyle(4,0,2);//Formato de Texto
    outtextxy(150, 150, "Materia:");
    setcolor(BLACK);//Color de Texto
    outtextxy(275, 150, "Programacion Orientada a Objetos");

    //Integrantes
    setcolor(RED);//Color de Texto
    settextstyle(4,0,2);//Formato de Texto
    outtextxy(150, 200, "Integrantes:");
    setcolor(BLACK);//Color de Texto
    outtextxy(170, 250, "1. Gonz�lez Contreras Juan Francisco");
    outtextxy(170, 280, "2. Chino Lopez Ulises");
    outtextxy(170, 310, "3. Gilberto");
    
    setcolor(RED);//Color de Texto
    outtextxy(150, 400, "Tema:");
    setcolor(BLACK);//Color de Texto
    outtextxy(250, 400, "Proyecto Final");
    getch();
}

void Convertidor::Menu() {
     char r;
    cleardevice(); // Limpiar la pantalla
    setbkcolor(WHITE);
    // Dibujar el t�tulo
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(175, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(200, 135, "Bienvenido al convertidor. Seleccione la categor�a de conversi�n:");

    // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tama�o del texto de los botones
    int Tam = 3;
   
    //boton salir
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, RED); // Relleno del Rect�ngulo
    bar(850, 620, 950, 655); // Contorno del Rect�ngulo
    rectangle(850 ,620, 950, 655); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(RED); // Fondo de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(875, 625, "Salir");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(250, 200, 750, 250); // Contorno del Rect�ngulo
    rectangle(250 ,200, 750, 250); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(425, 215, "Tipos de Unidad");
    
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(250, 275, 450, 425); // Contorno del Rect�ngulo
    rectangle(250 ,275, 450, 425); // Rect�ngulo
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(550, 275, 750, 425); // Contorno del Rect�ngulo
    rectangle(550 ,275, 750, 425); // Rect�ngulo
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(250, 450, 450, 480); // Contorno del Rect�ngulo
    rectangle(250 ,450, 450, 480); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(310, 455, "Unidad 1");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(550, 450, 750, 480); // Contorno del Rect�ngulo
    rectangle(550 ,450, 750, 480); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(610, 455, "Unidad 2");
    
    do{
               
     
     
     delay(500);
     if(ismouseclick(WM_LBUTTONDOWN))
     {
     getmouseclick(WM_LBUTTONDOWN, xm, ym);
     
     if((xm>850&&xm<950)&&(ym>620&&ym<655))
      r='s';
    
     if((xm>250&&xm<750)&&(ym>200&&ym<250))
       menutipo();
       
     
      }
      }while (r!='s');
} 

 void Convertidor::menutipo(void){
      int xm, ym,f;
     setbkcolor(WHITE);
     cleardevice(); // Limpiar la pantalla
     
     // Dibujar el t�tulo
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(175, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(200, 135, "Bienvenido al convertidor. Seleccione la categor�a de conversi�n:");
    
      // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tama�o del texto de los botones
    int Tam = 1;
    
    
    
    // Bot�n Longitud (L)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rect�ngulo
    bar(250, 200, 750, 250); // Contorno del Rect�ngulo
    rectangle(250 ,200, 750, 250); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, 3); // Formato de Texto
    outtextxy(425, 215, "Tipos de Unidad");
    
    // Bot�n Temperatura (T)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 250, 750, 290); // Contorno del Rect�ngulo
    rectangle(250 ,250, 750, 290); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450, 260, "Longitud (L)");
    
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 290, 750, 330); // Contorno del Rect�ngulo
    rectangle(250 ,290, 750, 330); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450, 300, "Tiempo (T)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 330, 750, 370); // Contorno del Rect�ngulo
    rectangle(250 ,330, 750, 370); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450, 340, "Masa (M)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 370, 750, 410); // Contorno del Rect�ngulo
    rectangle(250 ,370, 750, 410); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,380, "Volumen (V)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 410, 750, 450); // Contorno del Rect�ngulo
    rectangle(250 ,410, 750, 450); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,420, "Velocidad (F)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 450, 750, 490); // Contorno del Rect�ngulo
    rectangle(250 ,450, 750, 490); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,460, "Area (A)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 490, 750, 530); // Contorno del Rect�ngulo
    rectangle(250 ,490, 750, 530); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,500, "Temperatura (C)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rect�ngulo
    bar(250, 530, 750, 570); // Contorno del Rect�ngulo
    rectangle(250 ,530, 750, 570); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,540, "Energia (E)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, RED); // Relleno del Rect�ngulo
    bar(850, 620, 950, 655); // Contorno del Rect�ngulo
    rectangle(850 ,620, 950, 655); // Rect�ngulo
    setcolor(CT); // Color de Texto
    setbkcolor(RED); // Fondo de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(855, 625, "Regresar");
    
    //do{
    
    while(!ismouseclick(WM_LBUTTONDOWN))
      { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
     if((xm>250&&xm<750)&&(ym>250&&ym<290))
        Longitud();
     if((xm>850&&xm<950)&&(ym>620&&ym<655)){
      setbkcolor(WHITE);
      cleardevice;
      Menu();   
       }
     }
     //}while(f!=ESC);     
    getch();
      }
 
 
  
    
/*void Convertidor::menuLON(void){
     
    
      
    
          getch();
     }
 } */
        
  
    
    

  /*  // Bot�n Temperatura (T)
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
*/
    



