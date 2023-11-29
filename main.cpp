#include <graphics.h>
#include <string.h>
#include "Visual.h"
#include "Unidades.h"
#include "Convertidor.h"

int main(){ 
  int xm, ym, xm2, ym2;char r;Convertidor A;
    
	initwindow( 1000 , 700 , "Convertidor de Unidades" );
	
    A.Portada();

     do{
                
     setbkcolor(WHITE);
     cleardevice();          
     A.Menu();           
     
     delay(500);
     
     if(ismouseclick(WM_LBUTTONDOWN)){
     
         getmouseclick(WM_LBUTTONDOWN, xm, ym);
         
             if((xm>250&&xm<750)&&(ym>200&&ym<250)){
             
               A.menutipo();
                                            
               }
               
             if((xm>850&&xm<950)&&(ym>620&&ym<655)){
                                                    
             exit(1);
              
              }
        }//Fin del if principal
      
      }while (r!='s');

   closegraph();
    
	return 0;
}

