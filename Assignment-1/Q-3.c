#include<conio.h>
#include<stdio.h>

main()

{
	int m[5],i;
	printf("Enter %d numbers:",sizeof(m)/sizeof(int));
	for(i=0;i<sizeof(m)/sizeof(int);i++)
	{
		scanf("%d",&m[i]);
      
	}
	int max=m[0],smax=m[0];
	
   for(i=0;i<sizeof(m)/sizeof(int);i++)
	{
		if(max<m[i])
		{
			max=m[i];
			
		}
	}  
	

	 for(i=0;i<sizeof(m)/sizeof(int);i++)
	{
	   	if(smax<m[i] && m[i]!=max)
		{
			smax=m[i];
			
		}
	}  
		printf("Second-Maximum number is : %d",smax);
	
	
	
	
	
	
	
	
	
}
