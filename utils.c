#include "sapin.h"
  
void my_putchar(char c)
{
  write(1, &c, 1);
}

int pair(int etage) 
{
  int pair;

  if (etage%2 == 0) 
    pair = 0;

  else 
    pair = 1;

  return pair;
}

int nbl_tot(int etage)
{
  int e = etage; 
  int nbl_tot = 0; 
  
  while (e > 0)
    {
      nbl_tot = nbl_tot + (e + 3);
      e--;
    }
  return (nbl_tot);
}

int last_line(int etage) 
{

    int e = 0;  // compteur d'étages (a chaque etage on rajout une ligne)
    int nbl_premier_etage = 4;  
    int nb_etoile = 1;  // nombre d'étoiles à afficher par étage
    int count_nbl = 0; 
    int k = 0; // compteur detoile
    int soustraire_etoiles = 0;

    while (e < etage)   // nombre d'étages totaux
    {
      if (e > 1 && e%2 == 0)    // si on est à un étage pair
        soustraire_etoiles+=2; // s'incrémente de 1 à chaque étage impair (modulo inverse à cause de i qui commence à 0)

        while (count_nbl < nbl_premier_etage + e)
        {
            while (k < nb_etoile)    // nombre d'étoiles
              k++;
            
            nb_etoile+=2;   // 2 étoiles supplémentaires par niveau
            count_nbl++;
        }
        nb_etoile = nb_etoile - soustraire_etoiles - 4;
        count_nbl = 0;
        e++; //on rajoute une ligne sur l'etage du dessous
    }
    return (k);
}

void tronc(int etage)
{
  int base = last_line(etage);
  int nb_espace = ((base-etage)/2); //centrer tronc
  int e = 0; //compteur nb etage
  int l; //compteur nb espaces
  int k; //compteur nb |

  while (e < etage)
    {
      l = 0;
      k = 0;
    
      while(l < nb_espace)
        {
          my_putchar(' ');
          l++;
        }

      while(k < etage)
        {
          my_putchar('|');
          k++;
        }

      if (pair(etage) == 0)
      my_putchar('|');

      my_putchar('\n');
      e++;
      }
}