
char p[30];
int i,l=0;

printf("Enter your name:");
gets(p);

for(i=0;p[i]!='\0';i++)
{
	l++;
}

printf("The length of the name is: %d",l);




