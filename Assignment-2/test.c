#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include"mystring.h"

main()
{
	int n;
		char *s,*s1,*s2,*c1,*c2,*a1,*a2;
			
		
	printf("1: Length of the String\n");
	printf("2: To concate two string\n");
	printf("3: To copy one string to another\n");
	printf("4: To compare two String\n");
	printf("5: Search for first occurence of letter c\n");
	printf("6: To Check for Sub-string\n");
	printf("7: To reverse the String\n");
	printf("\n\nEnter your Choice:\n ");

	scanf("%d",&n);

	
	switch(n)
	{
	
		case 1:
			
	        s=(char*)malloc(30*sizeof(char));
	
	       printf("\nEnter your name:");
           scanf("%s",s);
           printf("The length of the name is: %d",len(s));
           
           free(s);
           break;
			
	
	
           
        case 2:
        	s1=(char*)malloc(30*sizeof(char));
        	s2=(char*)malloc(30*sizeof(char));
        	printf("Enter 1st String:");
        	scanf("%s",s1);
        	printf("Enter 2nd String:");
        	scanf("%s",s2);
        	printf("%s",concat(s1,s2));
        	free(s1);
        	free(s2);
        	break;
        	
    	case 3:
    		c1=(char*)malloc(30*sizeof(char));
    		c2=(char*)malloc(30*sizeof(char));
    		
         
        	printf("Enter String:");
        	scanf("%s",c1);
        	printf("%s",strcpy(c2,c1));
        	free(c1);
        	free(c2);
        	break;
    		
    	case 4:
    			c1=(char*)malloc(30*sizeof(char));
    		c2=(char*)malloc(30*sizeof(char));
    	
    		printf("Enter 1st String:");
        	scanf("%s",c1);
        	printf("Enter 2nd String:");
        	scanf("%s",c2);
        	printf(strcmp(c1,c2));
        	free(c1);
        	free(c2);
        	break;
        	
    		
    		
    	case 5:
    		c1=(char*)malloc(30*sizeof(char));
    		printf("Enter the String:");
        	scanf("%s",c1);
        	printf(searchfc(c1));
        	free(c1);
        	break;
        
		case 6:
			c1=(char*)malloc(30*sizeof(char));
			printf("Enter the String:");
        	scanf("%s",c1);
        
        	printf(strsub(c1));
        	free(c1);
        	break;
		     	
        
        case 7:
        	c1=(char*)malloc(30*sizeof(char));
    		printf("Enter the String:");
        	scanf("%s",c1);
        	printf(strrev(c1));
        	free(c1);
        	break;
       
        default:
			printf("Invalid choice");	
        	
        	
        	
	   
			
	}



}
