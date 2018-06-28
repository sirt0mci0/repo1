#include <stdlib.h>
#include <stdio.h>
#include <time.h>
 
int main(int argc, char *argv[])
{
  int tab[100][10], i, j;
  FILE *fp;
  srand(time(NULL)) ;
 
  for (i=0; i<100; i++)
    for (j=0; j<10; j++)
      tab[i][j] = (rand() %10) +1;
 
  fp = fopen("plik.txt", "w");
  for (i=0; i<100; i++)
    for (j=0; j<10; j++)
      fprintf (fp,"%d", tab[i][j]);
 
  system("PAUSE");
  return 0;
}
