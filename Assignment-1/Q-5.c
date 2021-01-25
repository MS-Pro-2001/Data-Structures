#include<stdio.h>
#include<conio.h>



main()
{
	
//	START OF CODE HERE.....

	
	int a[5],b[3],n;
	
	printf("Enter %d numbers for 1st array:",sizeof(a)/sizeof(int));
	
	for(n=0;n<sizeof(a)/sizeof(int);n++)
	{
		scanf("%d",&a[n]);
	}
		printf("Enter %d numbers for 2nd array:",sizeof(b)/sizeof(int));
	
	for(n=0;n<sizeof(b)/sizeof(int);n++)
	{
		scanf("%d",&b[n]);
	}
	
	
	
		
		
	int c[(sizeof(a)/sizeof(int))+(sizeof(b)/sizeof(int))],x=0; //x used as Global Variable.
	
	
	for(n=0;n<sizeof(a)/sizeof(int);n++)
	
	{
	
		
		c[x]=a[n];
		x++;
	   
	    
	    
	}
		for(n=0;n<sizeof(b)/sizeof(int);n++)
	{
	
		
		c[x]=b[n];
		x++;
	   
	    
	    
	}
		printf("The Concatenation of arrays are: \n",sizeof(a)/sizeof(int));
	
		for(n=0;n<(sizeof(a)/sizeof(int))+(sizeof(b)/sizeof(int));n++)
	{
	
		
		printf("%d",c[n]);
		printf("\n");
	
	    
	    
	}
	
//	END OF CODE HERE.....
	
	

	
	
}
