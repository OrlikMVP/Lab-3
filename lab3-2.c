#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
 int m=3, n=3;


 srand(time(NULL));

 int** a = calloc(m, sizeof(int*)), i;
 //Init rows
 for (i = 0; i < m; ++i)
 {
 //Init cols
 a[i] = calloc(n, sizeof(int));
 int j;
 for (j = 0; j < n; ++j)
 {
 a[i][j] = rand() % 100 - 50;
 }
 }

 printf("Random matrix\n");

 for (i = 0; i < m; ++i)
 {
 int j;
 for (j = 0; j < n; ++j)
 {

 printf("%4d%c", a[i][j], j < n - 1 ? '\t' : '\n');
 }
 }



return 0;




}
