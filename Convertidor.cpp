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
     
    // Dibujar el título
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
    outtextxy(170, 250, "1. González Contreras Juan Francisco");
    outtextxy(170, 280, "2. Chino Lopez Ulises");
    outtextxy(170, 310, "3. Gilberto");
    
    setcolor(RED);//Color de Texto
    outtextxy(150, 400, "Tema:");
    setcolor(BLACK);//Color de Texto
    outtextxy(250, 400, "Proyecto Final");
    getch();
}

void Convertidor::Menu() {
     char r; Unidades C;
    cleardevice(); // Limpiar la pantalla
    setbkcolor(WHITE);
    // Dibujar el título
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(175, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(200, 135, "Bienvenido al convertidor. Seleccione la categoría de conversión:");

    // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 3;
   
    //boton salir
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, RED); // Relleno del Rectángulo
    bar(850, 620, 950, 655); // Contorno del Rectángulo
    rectangle(850 ,620, 950, 655); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(RED); // Fondo de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(875, 625, "Salir");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 200, 750, 250); // Contorno del Rectángulo
    rectangle(250 ,200, 750, 250); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(425, 215, "Tipos de Unidad");
    
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 275, 450, 425); // Contorno del Rectángulo
    rectangle(250 ,275, 450, 425); // Rectángulo
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(550, 275, 750, 425); // Contorno del Rectángulo
    rectangle(550 ,275, 750, 425); // Rectángulo
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 450, 450, 480); // Contorno del Rectángulo
    rectangle(250 ,450, 450, 480); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(310, 455, "Unidad 1");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(550, 450, 750, 480); // Contorno del Rectángulo
    rectangle(550 ,450, 750, 480); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(610, 455, "Unidad 2");
    C.PideDato();
    C.MuestraDato();
    do{
               
     
     
     delay(500);
     if(ismouseclick(WM_LBUTTONDOWN))
     {
     getmouseclick(WM_LBUTTONDOWN, xm, ym);
     
     if((xm>850&&xm<950)&&(ym>620&&ym<655))
      r='s';
    
     if((xm>250&&xm<750)&&(ym>200&&ym<250))
       menutipo();
     
     if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);  
     
      }
      }while (r!='s');
} 

 void Convertidor::menutipo(){
      int f;
     setbkcolor(WHITE);
     cleardevice(); // Limpiar la pantalla
     
     // Dibujar el título
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(175, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(200, 135, "Bienvenido al convertidor. Seleccione la categoría de conversión:");
    
      // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 1;
    
    
    
    // Botón Longitud (L)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 200, 750, 250); // Contorno del Rectángulo
    rectangle(250 ,200, 750, 250); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, 3); // Formato de Texto
    outtextxy(425, 215, "Tipos de Unidad");
    
    // Botón Temperatura (T)
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 250, 750, 290); // Contorno del Rectángulo
    rectangle(250 ,250, 750, 290); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450, 260, "Longitud (L)");
    
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 290, 750, 330); // Contorno del Rectángulo
    rectangle(250 ,290, 750, 330); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450, 300, "Tiempo (T)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 330, 750, 370); // Contorno del Rectángulo
    rectangle(250 ,330, 750, 370); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450, 340, "Masa (M)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 370, 750, 410); // Contorno del Rectángulo
    rectangle(250 ,370, 750, 410); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,380, "Volumen (V)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 410, 750, 450); // Contorno del Rectángulo
    rectangle(250 ,410, 750, 450); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,420, "Velocidad (F)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 450, 750, 490); // Contorno del Rectángulo
    rectangle(250 ,450, 750, 490); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,460, "Area (A)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 490, 750, 530); // Contorno del Rectángulo
    rectangle(250 ,490, 750, 530); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,500, "Temperatura (C)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, LIGHTCYAN); // Relleno del Rectángulo
    bar(250, 530, 750, 570); // Contorno del Rectángulo
    rectangle(250 ,530, 750, 570); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(LIGHTCYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(450,540, "Energia (E)");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, RED); // Relleno del Rectángulo
    bar(850, 620, 950, 655); // Contorno del Rectángulo
    rectangle(850 ,620, 950, 655); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(RED); // Fondo de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(855, 625, "Salir");
    
  
    
    while(!ismouseclick(WM_LBUTTONDOWN))
      { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
     if((xm>250&&xm<750)&&(ym>250&&ym<290))
        Longitud();
      
     if((xm>250&&xm<750)&&(ym>290&&ym<330))
        Tiempo();
     
     if((xm>250&&xm<750)&&(ym>330&&ym<370))
        Peso(); 
     
     if((xm>250&&xm<750)&&(ym>370&&ym<410))
        Volumen();
        
     if((xm>250&&xm<750)&&(ym>410&&ym<450))
        Velocidad();
        
     if((xm>250&&xm<750)&&(ym>450&&ym<490))
        Area();
        
     if((xm>250&&xm<750)&&(ym>490&&ym<530))
        Temperatura();
     
     if((xm>250&&xm<750)&&(ym>530&&ym<560))
        energia();
           
     if((xm>850&&xm<950)&&(ym>620&&ym<655))
      exit(1);
     if((xm>250&&xm<750)&&(ym>200&&ym<250))
     {setbkcolor(WHITE);
      cleardevice();
      Menu(); }  
       
     }
     
    getch();
      }
 
void Convertidor::plantillamenu(){
     cleardevice(); // Limpiar la pantalla
    setbkcolor(WHITE);
    // Dibujar el título
    setcolor(RED); // Color de Texto
    settextstyle(6, 0, 5); // Formato de Texto
    outtextxy(175, 50, "Convertidor de Unidades");

    // Mostrar las instrucciones
    setcolor(BLACK); // Color de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(200, 135, "Bienvenido al convertidor. Seleccione la categoría de conversión:");

    // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 3;
   
    //boton salir
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, RED); // Relleno del Rectángulo
    bar(850, 620, 950, 655); // Contorno del Rectángulo
    rectangle(850 ,620, 950, 655); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(RED); // Fondo de Texto
    settextstyle(3, 0, 2); // Formato de Texto
    outtextxy(865, 625, "Salir");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 200, 750, 250); // Contorno del Rectángulo
    rectangle(250 ,200, 750, 250); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(425, 215, "");
    
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 275, 450, 425); // Contorno del Rectángulo
    rectangle(250 ,275, 450, 425); // Rectángulo
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(550, 275, 750, 425); // Contorno del Rectángulo
    rectangle(550 ,275, 750, 425); // Rectángulo
    
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(250, 450, 450, 480); // Contorno del Rectángulo
    rectangle(250 ,450, 450, 480); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(310, 455, "");
    
    setcolor(BLACK); // Color del Contorno
    setfillstyle(1, CYAN); // Relleno del Rectángulo
    bar(550, 450, 750, 480); // Contorno del Rectángulo
    rectangle(550 ,450, 750, 480); // Rectángulo
    setcolor(CT); // Color de Texto
    setbkcolor(CYAN); // Fondo de Texto
    settextstyle(3, 0, Tam); // Formato de Texto
    outtextxy(610, 455, "");
    
}  

void Convertidor::Longitud(void){

setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
     // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 1;
    
    outtextxy(460, 215, "Longitud");
     
    
    outtextxy(310, 455, "Centimetros");
    

    outtextxy(610, 455, "Pulgadas");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(310, 455, "Centimetros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 485, "Metros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 515, "Kilometros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 540, 450, 570); // Contorno del Rectángulo
           rectangle(250 ,540, 450, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 545, "Centimetros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 570, 450, 600); // Contorno del Rectángulo
           rectangle(250 ,570, 450, 600); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 575, "Pies");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 600, 450, 630); // Contorno del Rectángulo
           rectangle(250 ,600, 450, 630); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 605, "Pulgadas");
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(610, 455, "Pulgadas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 485, "Pies");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 515, "Pulgadas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 540, 750, 570); // Contorno del Rectángulo
           rectangle(550 ,540, 750, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 545, "Centimetros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 570, 750, 600); // Contorno del Rectángulo
           rectangle(550 ,570, 750, 600); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 575, "Metros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 600, 750, 630); // Contorno del Rectángulo
           rectangle(550 ,600, 750, 630); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 605, "Kilometros");
           
           
           
           }  
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
                                               
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
           
         }
}

void Convertidor::Temperatura(){
     setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Temperatura");
    outtextxy(310, 455, "Celsius");
    outtextxy(610, 455, "Fahrenheit");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(310, 455, "Celsius");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 485, "Fahrenheit");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 515, "Kelvin");
           
        
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(610, 455, "Fahrenheit");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 485, "Celsius");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 515, "Kelvin");
           
           }
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
           
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
           
           
}

void Convertidor::Peso(){
    setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Masa");
    outtextxy(310, 455, "Kilogramos");
    outtextxy(610, 455, "Libras");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(310, 455, "Kilogramos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 485, "Gramos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 515, "Toneladas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 540, 450, 570); // Contorno del Rectángulo
           rectangle(250 ,540, 450, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 545, "Libras");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 570, 450, 600); // Contorno del Rectángulo
           rectangle(250 ,570, 450, 600); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 575, "Onzas");
           
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(610, 455, "Libras");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 485, "Onzas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 515, "Kilogramos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 540, 750, 570); // Contorno del Rectángulo
           rectangle(550 ,540, 750, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 545, "Gramos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 570, 750, 600); // Contorno del Rectángulo
           rectangle(550 ,570, 750, 600); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 575, "Toneladas");
           }
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
           
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
     

}

void Convertidor::Volumen(){
    setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Volumen");
    outtextxy(310, 455, "Litros");
    outtextxy(610, 455, "Galones");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(310, 455, "Litros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 485, "Mililitros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(280, 515, "Centrimetros cubicos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 540, 450, 570); // Contorno del Rectángulo
           rectangle(250 ,540, 450, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 545, "Galones");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 570, 450, 600); // Contorno del Rectángulo
           rectangle(250 ,570, 450, 600); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 575, "Onzas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 600, 450, 630); // Contorno del Rectángulo
           rectangle(250 ,600, 450, 630); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 605, "Pulgadas cubicas");
           
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(610, 455, "Galones");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 485, "Onzas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 515, "Pulgadas cubicas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 540, 750, 570); // Contorno del Rectángulo
           rectangle(550 ,540, 750, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 545, "Litros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 570, 750, 600); // Contorno del Rectángulo
           rectangle(550 ,570, 750, 600); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 575, "Mililitros");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 600, 750, 630); // Contorno del Rectángulo
           rectangle(550 ,600, 750, 630); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(580, 605, "Centrimetros cubicos");
           }
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
           
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
}

void Convertidor::Tiempo(){
   setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Tiempo");
    outtextxy(310, 455, "Minutos");
    outtextxy(610, 455, "Segundos");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(310, 455, "Minutos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 485, "Segundos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 515, "Horas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 540, 450, 570); // Contorno del Rectángulo
           rectangle(250 ,540, 450, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 545, "Dias");
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(610, 455, "Segundos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 485, "Minutos");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 515, "Horas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 540, 750, 570); // Contorno del Rectángulo
           rectangle(550 ,540, 750, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 545, "Dias");  
           }
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
           
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
}

void Convertidor::Area(){
 setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Area");
    outtextxy(270, 455, "Metros Cuadrados");
    outtextxy(580, 455, "Pies Cuadrados");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(270, 455, "Metros Cuadrados");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(280, 485, "Pies Cuadrados");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(270, 515, "Kilometros cuadrados");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 540, 450, 570); // Contorno del Rectángulo
           rectangle(250 ,540, 450, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(270, 545, "Millas cuadradas");
           
           
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(570, 455, "Pies Cuadrados");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(570, 485, "Metros cuadrados");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(570, 515, "Millas cuadradas");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 540, 750, 570); // Contorno del Rectángulo
           rectangle(550 ,540, 750, 570); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(570, 545, "Kilómetros cuadrados");
           }
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
           
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
}

void Convertidor::Velocidad(){
     setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Velocidad");
    outtextxy(270, 455, "Metros por segundo");
    outtextxy(580, 455, "Kilómetros por hora");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(270, 455, "Metros por segundo");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(280, 485, "Kilómetros por hora");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(270, 515, "Millas por hora");
           
           
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(570, 455, "Kilómetros por hora");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(570, 485, "Metros por segundo");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(570, 515, "Millas por hora");
           }
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
           
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
}

void Convertidor::energia(){
     setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
    int CT = BLACK;
    int Tam = 1;
    
    outtextxy(465, 215, "Energia");
    outtextxy(310, 455, "Julios");
    outtextxy(610, 455, "Calorias");
     
    
     while(!ismouseclick(WM_LBUTTONDOWN))
     { clearmouseclick(WM_LBUTTONDOWN);
        delay(20);
            getmouseclick(WM_LBUTTONDOWN, xm, ym);
       
        if((xm>250&&xm<450)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 450, 450, 480); // Contorno del Rectángulo
           rectangle(250 ,450, 450, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(310, 455, "Julios");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 480, 450, 510); // Contorno del Rectángulo
           rectangle(250 ,480, 450, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 485, "Calorías");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(250, 510, 450, 540); // Contorno del Rectángulo
           rectangle(250 ,510, 450, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(310, 515, "Kilovatios-hora");
           
           
            } 
            
           if((xm>550&&xm<750)&&(ym>450&&ym<480)){
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 450, 750, 480); // Contorno del Rectángulo
           rectangle(550 ,450, 750, 480); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, 2); // Formato de Texto
           outtextxy(610, 455, "Calorías");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 480, 750, 510); // Contorno del Rectángulo
           rectangle(550 ,480, 750, 510); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 485, "Julios");
           
           setcolor(BLACK); // Color del Contorno
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(550, 510, 750, 540); // Contorno del Rectángulo
           rectangle(550 ,510, 750, 540); // Rectángulo
           setcolor(CT); // Color de Texto
           setbkcolor(CYAN); // Fondo de Texto
           settextstyle(3, 0, Tam); // Formato de Texto
           outtextxy(610, 515, "Kilovatios-hora");
           
           }
           
           if((xm>250&&xm<750)&&(ym>200&&ym<250))
            menutipo();
            
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            exit(1);
        }
} 
