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
    
    setbkcolor(WHITE);
     cleardevice();          
     A.Menu(); 
     
    


    
   closegraph();
    
	return 0;
}

