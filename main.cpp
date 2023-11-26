#include <graphics.h>
#include <string.h>
#include "Convertidor.h"
#include "Visual.h"
#include "Unidades.h"

int main( )
{   int xm, ym;
    char r;
    Convertidor A,B;
	initwindow( 1100 , 800 , "Convertidor de Unidades" );
	
	
	
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
     
     if((xm>950&&xm<1050)&&(ym>700&&ym<735)){
      r='s';
      }
      
     if((xm>300&&xm<800)&&(ym>200&&ym<250)){
      A.menutipo();
      }
     
      }
      }while (r!='s');
    


    
   closegraph();
    
	return 0;
}

