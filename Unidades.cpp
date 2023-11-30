#include <graphics.h>
#include "Unidades.h"

void Unidades::plantillamenu(void){
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
    outtextxy(855, 625, "Regresar");
    
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

void Unidades::Longitud(void){
     
setbkcolor(WHITE);
    cleardevice(); // Limpiar la pantalla 
     
    plantillamenu(); 
     
     // Definir el color del texto de los botones
    int CT = BLACK;

    // Definir el tamaño del texto de los botones
    int Tam = 1;
    
    outtextxy(425, 215, "Longitud");
     
    
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
           
           }                                      
           if((xm>850&&xm<950)&&(ym>620&&ym<655))
            menutipo2();
         }
}

void Unidades::Temperatura(void){
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
        }
           
           
}

void Unidades::Peso(void){
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
        }
     

}

void Unidades::Volumen(void){
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
        }
}

void Unidades::Tiempo(void){
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
        }
}

void Unidades::Area(void){
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
        }
}

void Unidades::Velocidad(void){
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
        }
}

void Unidades::energia(void){
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
        }
     


}

void Unidades::menutipo2(void){
     
}
