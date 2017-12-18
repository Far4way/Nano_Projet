//
//  supprime_colonne.c
//  Nanoprojet
//
//  Created by Chen Christian on 12/12/2017.
//  Copyright © 2017 Chen Christian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "projet.h"

void supprime_colonne(unsigned char** im, unsigned int* chemin, int nl, int nc){
    int i,j;

    for(i=0;i<nl;i++){

        for(j=chemin[i];j<nc-1;j++) im[i][j]=im[i][j+1];

       im[i][nc-1] = 0;
    }

}
