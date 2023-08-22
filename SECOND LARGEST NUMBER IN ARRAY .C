#include<stdio.h>

main()
{
	int i,j,n,first,second;
	int a[100];
	printf("Enter the value= ");
	scanf("%d",&n);
	
		for(i=0; i<n; i++)
		{
			printf("enter elements = ");
			scanf("%d",&a[i]);
		}
		first = a[1];
		second = a[0];
		for(i=2; i<n; i++)
		{
			if(first<a[i])
			{
					second=first;
					first=a[i];	
			}
			else if(second<a[i])
			{
				second=a[i];
			}
		}
		printf("%d",second);
}
