#include <graphics.h>
#include "Menus.h"
#include "Visual.h"
int main( )
{
	initwindow( 1100 , 600 , "Convertidor de Unidades" );// Inicializar la ventana gr�fica
  
    Portada();

    // Esperar a que se presione una tecla
    getch();

    
	return( 0 );
}
