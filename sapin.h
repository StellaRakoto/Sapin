#ifndef SAPIN_H_
#define SAPIN_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define red   "\033[0;31m"        /* 0 -> normal ;  31 -> red */
#define cyan  "\033[1;36m"        /* 1 -> bold ;  36 -> cyan */
#define green "\033[4;32m"        /* 4 -> underline ;  32 -> green */
#define blue  "\033[9;34m"        /* 9 -> strike ;  34 -> blue */
     
#define black  "\033[0;30m"
#define brown  "\033[0;33m"
#define magenta  "\033[0;35m"
#define gray  "\033[0;37m"
     
#define none   "\033[0m"        /* to flush the previous property */



     
void my_putchar(char c);
void tronc(int etage);
int last_line(int etage);
int nbl_tot(int etage);
int pair(int etage);

#endif
