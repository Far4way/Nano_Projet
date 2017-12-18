//
//  trouve_chemin.c
//  Nanoprojet
//
//  Created by Chen Christian on 12/12/2017.
//  Copyright © 2017 Chen Christian. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "projet.h"

void trouve_chemin(unsigned int* chemin, unsigned int** pere, unsigned int* cout_final, int nl, int nc){

  int ind_moinscouteuse = 0; /*on initialise l'indice la moins couteuse au premeir élément*/
  int i = 1; /* indice de parcours*/
  unsigned int min = cout_final[0];
  for(;i<nc;i++){/*on va parcourir élément par élément dans la dernière ligne */
    if(min>cout_final[i]){
      min = cout_final[i];
      ind_moinscouteuse = i;
    }
  }
  chemin[nl-1] = ind_moinscouteuse;
  int k;
  for(k=nl-2;k>-1;k--){
    chemin[k] = pere[k+1][chemin[k+1]];
  }


}
