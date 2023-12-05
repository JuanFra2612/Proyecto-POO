//Visual.cpp
#include <graphics.h>
#include "Visual.h"

void Visual::FondoPantalla(int color){
     
 setbkcolor(color);
 cleardevice();
 
}

void Visual::Etiqueta(int x,int y,int cf,int ct,int tipo, int tam,char *Eti){
  
  setbkcolor(cf);
  setcolor(ct);
  settextstyle(tipo,0,tam);
  outtextxy(x,y-10,Eti);
  
}

void Visual::CajaTexto(int x,int y, int tx,int cBarra, int cTexto){ 
int i=0;

  strcpy(captura," ");
  setcolor(cTexto);//color texto de la barra
  settextstyle(3,0,3);
  setfillstyle(1,cBarra);//color de la barra
  setbkcolor(cBarra);
  bar(x-10,y-20,x+tx,y+20);
  rectangle(x-10,y-20,x+tx,y+20);
  
  while((captura[i]=getch())!='\r'){//Recibe letras hasta presionar enter
     
     bar(x-10,y-20,x+tx,y+20);
     rectangle(x-10,y-20,x+tx,y+20);
     
     if(captura[i]=='\b'){//barra de borrado
     
      if(i>0){
              
         captura[--i]='\0';//regreso el nulo una posicion
         outtextxy(x,y-10,captura);
         //settextstyle();
       }
     }
     
     else{//puede recibir letras
     
      if(i<120){
                
         captura[i+1]='\0';//convierte a cadena de caracteres
         outtextxy(x,y-10,captura);
         i++;
       }
              
       else  outtextxy(x,y-10,captura);
     }
   }
   
   captura[i]='\0';
   setbkcolor(WHITE);
   setcolor(RED);
   
}
void Visual::CajaTextoOculto(int x,int y, int tx,int cBarra, int cTexto){
int i=0;

  strcpy(captura," ");
  strcpy(Aster," ");
  setcolor(cTexto);//color texto de la barra
  settextstyle(3,0,3);
  setfillstyle(1,cBarra);//color de la barra
  setbkcolor(cBarra);
  bar(x-10,y-20,x+tx,y+20);
  rectangle(x-10,y-20,x+tx,y+20);
  while((captura[i]=getch())!='\r'){
                                    //Recibe letras hasta presionar enter
     bar(x-10,y-20,x+tx,y+20);
     rectangle(x-10,y-20,x+tx,y+20);
     if(captura[i]=='\b'){//barra de borrado
                          
      if(i>0)
       { i--;//regreso el nulo una posicion
         captura[i]='\0';
         Aster[i]='\0';
         outtextxy(x,y-10,Aster);
       }
     }
     else//puede recibir letras
     { if(i<255)
       { captura[i+1]='\0';//convierte a cadena de caracteres
         Aster[i]='*';
         Aster[i+1]='\0';
         outtextxy(x,y-10,Aster);
         i++;
       }       
       else   outtextxy(x,y-10,Aster);
     }
   }
   captura[i]='\0';
}
