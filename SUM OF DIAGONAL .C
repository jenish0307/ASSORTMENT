#include<stdio.h>
void main()
{
               int a[5][5]={{23,56,78},{34,67,45},{32,75,12}};
               int i,j,s=0;
               for(i=0;i<3;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             if(i==j)
                                             {
                                                            s=s+a[i][j];
                                             }
                                             printf("%d\t",a[i][j]);
                              }
                              printf("\n");
               }
               printf("sum is = %d",s);
               getch();
}
