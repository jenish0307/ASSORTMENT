#include<stdio.h>
main()
{
               int a[10][10]={{1,2,3},{4,5,6},{7,8,9}};
               int b[10][10]={{1,2,3},{4,5,6},{7,8,9}};
               int c[10][10];
               int i,j;
 
               printf("First matarics\n");
               for(i=0;i<3;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             printf("%d ",a[i][j]);
                              }
                              printf("\n");
               }
               printf("\n");
 
               printf("Second matarics\n");
               for(i=0;i<3;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             printf("%d ",b[i][j]);
                              }
                              printf("\n");
               }
 
               for(i=0;i<3;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             c[i][j]=a[i][j]+b[i][j];
                              }
                              printf("\n");
               }
 
               printf("Two matarics sum\n");
               for(i=0;i<3;i++)
               {
                              for(j=0;j<3;j++)
                              {
                                             printf("%d\t",c[i][j]);
                              }
                              printf("\n");
               }
               getch();
}
 
 
