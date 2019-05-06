#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int mas[10] = {20, 2, 5, 2, 7, 5, 3, 2, 1, 4};
int x;
double v,y=0.0;
printf("Enter number: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input\n");
        return -1;
    }

 for (int n = 0; n<= (sizeof(mas)/4)-1; ++n){
   if( mas[n]==x){y=y+1;}
   printf("%.0f",y);
   printf("  %d\n",mas[n]);

 }
v=(y/10.0)*100;

printf("Probability of occurrence: ");
printf("%.0f %%",v);
}
