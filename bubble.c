/* Bubble sort code */
 
#include <stdio.h>
 
int main()
{
  int array[4]={1,2,3,4};
int c, d, swap;
 
  for (c = 0 ; c < 3; c++)
  {
    for (d = 0 ; d < 3; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < 4 ; c++ )
     printf("%d\n", array[c]);
 
  return 0;
}
