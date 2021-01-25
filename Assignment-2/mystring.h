#include<stdlib.h>
#include<stdio.h>

len(char *s)

{
	int l=0,i;

    for(i=0;s[i]!='\0';i++)
{
	l++;
}

return l;

}



char* concat(char *s1,char *s2)
{
	char *s3;
	 s3=(char*)malloc(50*sizeof(char));
	int i,l=0;
	
    for(i=0;s1[i]!='\0';i++)
{
		
	s3[l]=s1[i];
	l++;

}
	
    for(i=0;s2[i]!='\0';i++)
{
		
	s3[l]=s2[i];
	l++;
	
}
s3[l]='\0';
return s3;
free(s3);
	
	
}

// FOR copying one string to another

 char*strcpy(char*c2,char*c1)
{

	int i;
	
    for(i=0;c1[i]!='\0';i++)
{
		
	c2[i]=c1[i];
	

}
return c2;
	
}

//To compare two strings

strcmp(char*c1,char*c2)
{
		int l=0,i,m=0;
		l=len(c1);
		m=len(c2);



if(l>m)
{

printf("\n1st String is longer than 2nd.\n");
}
else if(m>l)
{
printf("\n1st String is smaller than 2nd.\n");
}
else
{
printf("\nStrings are of equal length");
}


	
	
}

searchfc(char*c1)
{
		int l=0,i;

    for(i=0;c1[i]!='\0';i++)
{
	if(c1[i]=='c')
	{ l++;
		printf("\nindex of letter c in the string is:%d",i);
		break;
	}
}
if(l==0)
printf("\nLetter c not found in the string");
	
}


//TO reverse the string

char *strrev(char *c1)
{
	int i,l=0;
	char *c;
	c=(char*)malloc(30*sizeof(char));
  l=len(c1);
 for(i=0;c1[i]!='\0';i++)
{
	c[l-1]=c1[i];
	l--;
	
}

return c;
free(c);

	
}

//For  searching of sub-string

strsub(char *c1)
{
	char *sub;
	int l=0,m=0,i,t=0,j;
		sub=(char*)malloc(10*sizeof(char));
		printf("\nEnter the sub-string:");
        	scanf("%s",sub);
        	
  l=len(sub);
			
	    	
     for(i=0;c1[i]!='\0';i++)
	 {
	 	if(c1[i]==sub[0])
	 	{
	 		t++;
	 		for(j=1;sub[j]!='\0';j++)
	 		{
	 			if(c1[i+1]==sub[j])
	 			{
	 				t++;
	 				i++;
				 }
	 			
			 }
			 break;
		 }
		 
	}
	if(l==t)
	{
		printf("\nYes, the Sub-string is present");
	}
	else
	{
		printf("\nNo, the Sub-is not present");
	}
			
	
			
			   	
}




	
	




