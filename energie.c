#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<SDL_phelma.h>
#include "projet.h"
/*
Création de la fonction calculant l'énergie / gradient de l'image d'entrée, à traiter.

*/

unsigned char** gradienty(unsigned char** energ, unsigned char** im, int nl, int nc){
    if (energ==NULL){
  /*  energ=alloue_image_char(nl,nc);*/
    }
    int  i,j;
    for ( i=0;i<nl;i++){
        for( j=0;j<nc;j++){
            energ[i][j]= abs(im[i][(j-1+nc)%nc]-im[i][(j+1)%nc]);
        }

    }

    return energ;
}
