#include <graphics.h>
#include <string.h>

#include "Visual.h"
#include "Unidades.h"
#include "Convertidor.h"

int main( )
{   int xm, ym;
    char r;
    Convertidor A;
	initwindow( 1000 , 700 , "Convertidor de Unidades" );
	
	
	
    A.Portada();
     //A.Menu();
    
    
     do{
     setbkcolor(WHITE);
     cleardevice();          
     A.Menu();           
     if(kbhit())
     { r = getch();
        switch (r)
        {
     
        case 'm':case 'M':A.menutipo();
            break;
        case 's': case 'S':
            break;
        }
     }
     
     delay(500);
     if(ismouseclick(WM_LBUTTONDOWN))
     {
     getmouseclick(WM_LBUTTONDOWN, xm, ym);
     
     if((xm>850&&xm<950)&&(ym>620&&ym<655))
      r='s';
    
     if((xm>250&&xm<750)&&(ym>200&&ym<250))
      { A.menutipo();
        
        if((xm>250&&xm<750)&&(ym>250&&ym<290)){
                                               
         }
        
       }
     
      
     
      }
      }while (r!='s');
    


    
   closegraph();
    
	return 0;
}

