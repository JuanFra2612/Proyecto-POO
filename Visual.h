//Visual.h
#ifndef VISUAL_H
#define VISUAL_H
class Visual
{ private:   char Aster[120];
  protected: char captura[120];
  public:    void FondoPantalla(int color);
             void LimpiaArea(void);
             void Etiqueta(int x,int y,int cf,int ct,int tipo,int tam,char *Eti);
             void CajaTexto(int x,int y,int tx,int cBarra,int cTexto);
             void CajaTextoOculto(int x,int y,int tx,int cBarra,int cTexto);
};
#endif
