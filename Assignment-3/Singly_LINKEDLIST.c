#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node *link;
};

struct node *head=NULL;

struct node *createnode()
{
 struct node *n;
 n=(struct node*)malloc(sizeof(struct node));
 return n;

}

int Insert_elements()
{
    struct node *temp,*t;
    temp=createnode();
    printf("Enter the data:");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {

        head=temp;
    }
    else
    {
        t=head;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
        


       
    }



 return 0;
}


int insert_element_at_nth_position()
{
      int n,i;
        struct node *middle_node,*previous_node,*t,*temp;
        temp=createnode();
        printf("Enter the data:");
        scanf("%d",&temp->data);

        printf("Enter the node position you want to delete:");
        scanf("%d",&n);

       

        if(n==1)
        {
             t=head;
            head=temp;
            temp->link=t;
            // free(t);
            printf("\n\n node added successfully \n\n");
        }

        else
        {
                    previous_node=head; 

                for(i=0;i<n-2;i++)
                    {
                    previous_node=previous_node->link;
                    
                    }

                middle_node=head;

                for(i=0;i<n-1;i++)
                {
                    middle_node=middle_node->link;
                }

               

              

                previous_node->link=temp;
                temp->link=middle_node;
               
               printf("\n\n node addded successfully \n\n");
        }



    return 0;
}



int Delete_element_at_nth_position()
{
    if(head==NULL)
    {
        printf("The list is empty.");

    }

    else
    {
        int n,i;
        struct node *middle_node,*previous_node,*next_node,*t;
        printf("Enter the node position you want to delete:");
        scanf("%d",&n);

        t=head;

        if(n==1)
        {
            head=head->link;
            free(t);
            printf("\n\n node delted successfully \n\n");
        }

        else
        {
                    previous_node=head; 

                for(i=0;i<n-2;i++)
                    {
                    previous_node=previous_node->link;
                    
                    }

                middle_node=head;

                for(i=0;i<n-1;i++)
                {
                    middle_node=middle_node->link;
                }

                next_node=head;

                for(i=0;i<n;i++)
                {
                    next_node=next_node->link;
                }

                previous_node->link=next_node;
                free(middle_node);
               printf("\n\n node delted successfully \n\n");
        }
    }   

           
        
  



return 0;
}


int Display_element()
{

    struct node *temp;
    
	if(head==NULL)
	{
		printf("List  is empty\n\n");
	}
    else
    {
         temp=head;
    
        while(temp!=NULL)
    {
        
        printf("%d\t",temp->data);
        temp=temp->link;      
      
        
    }

    }
   

return 0;
}



int main()
{
    int n;
  while (1)
  {
      printf("\n\n1.Insert elements\n");
      printf("2.Insert element at nth position\n");
      printf("3.Delete elements\n");
      printf("4.Display elements\n");
      printf("5.Exit\n\n");
      
      printf("Enter your choice:");
      scanf("%d",&n);
      switch (n)
      {
      case 1:Insert_elements();
          break;
      case 2:insert_element_at_nth_position();
          break;
      case 3:Delete_element_at_nth_position(); 
          break;
      case 4:Display_element();
          break;        
      case 5:exit(0);    
      
      default:
          break;
      }
  }
  
    



    return 0;
}
