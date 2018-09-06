#include "sapin.h"

void feuilles(int etage)
{
   int e = 1; // compteur d'étages
   
   int nbl = nbl_tot(etage);
   int count_nbl = 0;

   int base = last_line(etage);
   int nb_espace = (base / 2);
   
   int nb_etoile = 1; 

   int decal = 0;

   while (count_nbl < nbl)
    {
      int l = 0; // count nb espaces
      int k = 0; // count nb etoiles

      while (l < nb_espace)
        {
          my_putchar(' ');
          l++;
        }

      while (k < nb_etoile)
        {
          my_putchar('*');
          k++;
        }
          
      my_putchar('\n');

      count_nbl++;
      nb_etoile = nb_etoile + 2;
      nb_espace--;


      if (count_nbl == nbl_tot(e))
        {
          if(pair(e) == 1)
            {
              decal++;
            }
          nb_etoile = nb_etoile-2 * (decal + 1);  
          nb_espace = nb_espace + (decal + 1);
          e++;
        }
      }
      tronc(etage);
}

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    printf("Need a size in argument.\n");
    return (0);
  }

  feuilles(atoi(argv[1]));
  return (0);
}
