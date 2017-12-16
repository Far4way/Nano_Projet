#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*#include<SDL_phelma.h>*/

unsigned int** alloue_image_int(int nl, int nc) ;
unsigned char ** alloue_image_char(int nl, int nc);
void libere_image(unsigned char** im, int nl) ;
unsigned char ** zoomx_image(unsigned char **ims, unsigned char **im, int nbcol, int jc, int nl, int nc);
unsigned char** gradienty(unsigned char** img,unsigned char** im, int nl, int nc);
void calcul_cout(unsigned int* coutfinal,unsigned char** energie, unsigned int** pere, int nl, int nc);
void  trouve_chemin(unsigned int* ch_max, unsigned int** pere, unsigned int* coutfinal, int nl, int nc);
void supprime_colonne(unsigned char** im, unsigned int* ch_max,int nl, int nc);
unsigned char** seam_carving(unsigned char** im, int nbcol, int nl, int nc);

