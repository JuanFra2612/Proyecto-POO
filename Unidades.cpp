#include <graphics.h>
#include "Visual.h"
#include "Unidades.h"


void Unidades::PideDato(){
     
    CajaTexto(260,350,190,CYAN,BLACK);
    r=atof(captura);

}

void Unidades::MuestraDato(){
     
      char cadAux[10]; int x,y;
      	   x=550; y=275;
           setfillstyle(1,CYAN);
           setcolor(YELLOW);
           setcolor(BLACK);
           setfillstyle(1, CYAN); // Relleno del Rectángulo
           bar(x,y,x+200,y+150); // Contorno del Rectángulo
           rectangle(x,y,x+200,y+150); // Rectángulo
           sprintf(cadAux,"%.2f",r);
           Etiqueta(x+20,y+75,CYAN,YELLOW,3,3,cadAux);
           getch();
     
}

void Unidades::menutipo2(void){
     
}
