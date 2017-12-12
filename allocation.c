//
//  allocation.c
//  Nanoprojet
//
//  Created by Chen Christian on 12/12/2017.
//  Copyright © 2017 Chen Christian. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
/* Fonctions d'allocation et de libération */
unsigned char** alloue_image_char(int nl,int nc){
    unsigned char** tab;
    tab =(unsigned char **)calloc(nl,sizeof(*tab)); //création du nombre de ligne
    if(tab == NULL) return NULL;
    else{
        *tab = (unsigned char *)calloc(nc*nl,sizeof(**tab)); // créations des colonnes
    }
    return tab;
}


unsigned int** alloue_image_int(int nl, int nc){
    unsigned int** tab;
    tab =(unsigned int **)calloc(nl,sizeof(*tab)); //création du nombre de ligne
    if(tab == NULL) return NULL;
    else{
        *tab = (unsigned int *)calloc(nc*nl,sizeof(**tab)); // créations des colonnes
    }
    return tab;
}

void libere_image(unsigned char** im, int nl){
    int i = 0;
    for(;i<nl;i++) free(im[i]);
    free(im);
}






