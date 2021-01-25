#include<conio.h>
#include<stdio.h>

main()

{
	int a[5],i;
	printf("Enter %d numbers:",sizeof(a)/sizeof(int));
	for(i=0;i<sizeof(a)/sizeof(int);i++)
	{
		scanf("%d",&a[i]);
      
	}
	
	int b[sizeof(a)/sizeof(int)];
	
		printf("Array in Reverse order is : ");
		for(i=(sizeof(a)/sizeof(int))-1;i>=0;i--)
	{
		b[i]=a[i];
			printf("%d ",b[i]);
      
	}
	


	
	
	
	
	
}
