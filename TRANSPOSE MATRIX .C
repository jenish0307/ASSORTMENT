#include<stdio.h>
main()
{
               int a[10][10]={{1,2,3},{4,5,6}};
               int b[10][10];
               int i,j;
 
               printf("Matrix is\n");
               for(i=0;i<2;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             printf("%d ",a[i][j]);
                              }
                     printf("\n");
               }
 
               for(i=0;i<2;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             b[j][i]=a[i][j];
                              }
                              printf("\n");
               }
 
               printf("Transpose Matrix\n");
               for(i=0;i<3;i++)
               {
                              for(j=0;j<2;j++)
                              {
                                             printf("%d\t",b[i][j]);
                              }
                   printf("\n");
               }
               getch();
}
 
