
#include <stdio.h>
#include <stdlib.h>

int ******q1;
int *****z1;
int ****x1;
int ***y1;
int **t1;
int *a1;
int i = 23;
int nSize = 10;

int
main ()
{
  a1 = realloc(a1,nSize *sizeof(typeof(i)));
  *(a1+0) = i;
  //...
  t1 = realloc(t1,nSize *sizeof(typeof(a1)));
  *(t1+0) = (int*)a1;
  //...
  y1 = realloc(y1,nSize *sizeof(typeof(t1)));
  *(y1+0) = t1;
  //...    
  x1 = realloc(x1,nSize *sizeof(typeof(y1)));
  *(x1+0) = y1;
  //...
  z1 = realloc(z1,nSize *sizeof(typeof(x1)));
  *(z1+0) = x1;
  //...    
  q1 = realloc(q1,nSize *sizeof(typeof(z1)));
  *(q1+0) = z1;
  //...


  printf ("%d\n" , ******(q1+0));
  
  return 0;
}