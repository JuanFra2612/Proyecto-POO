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

}

void Unidades::Peso(void){

}

void Unidades::Volumen(void){

}

void Unidades::Tiempo(void){
}

void Unidades::Area(void){

}

void Unidades::Velocidad(void){
     
}

void Unidades::energia(void){

}

void Unidades::menutipo2(void){
     
}
