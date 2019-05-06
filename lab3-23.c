#include <stdio.h>
#include <stdlib.h>

int main()
{
int N,M,i,j;
printf("rows\n");
scanf("%d",&N);
printf("cols\n");
scanf("%d",&M);
int A[N][M];int t=0,h=0;
 printf("Random matrix\n");
for (i = 0; i < N; i++ ) {
for (j = 0; j < M; j++ ) {
    A[i][j] = 10 + rand()% (20 - 10 + 1);
    printf("%d ",A[i][j]);
    }
puts("\n");
}
    return 0;
for ( i = 0; i < N; i++ )
  for ( j = 0; j <=  i ; j++ )
    {t=t + A[i][j];

    }



for ( i = 0; i > N; i++ )
  for ( j = 0; j >=  i ; j++ )
    {h=h+ A[i][j];

    }
    if (t != 0 && h != 0) {printf("simple\n");} else
             if (t != 0) {printf("lower triangular\n");}
             else
             if (h != 0) {printf("upper triangular\n");}
}
