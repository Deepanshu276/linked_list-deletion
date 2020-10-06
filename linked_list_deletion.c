#include<stdio.h>
#include<malloc.h>

int main()
{	
	struct node
	{
		int data;
		struct node *link;
	};
	typedef struct node node;
	
	node *new, *start, *loc = 0, *ptr, *pre;
	int  choice = 1;
	start = 0;
	
	while(choice == 1)
	{
		new = (node*)malloc(sizeof(node));
		printf("Enter the data to be enterd:");
		scanf("%d", &new->data);
		if(start != 0)
		{
			loc->link = new;
			loc = new;
		}
		else
		{
			start = loc = new;
		}
		fflush(stdin);
		printf("\n\nDo you want to enter more nodes:\n");
		printf("Enter 1 for Yes and 0 for No.\n");
		scanf("%d", &choice);
	}
	
	loc->link = 0;
	loc = start;
	printf("The linked list is:\n");
	while(loc != NULL)
	{
		printf("%d ", loc->data);
		loc = loc-> link;
	}
	printf("\n\n");
	
	printf("Now deleting one node from the last");
	choice = 1;

	while(choice == 1)
	{
		if(start == NULL)
		{
			printf("Underflow");
		}
		else if(start->link == NULL)
		{
			start = NULL;
			free(start);
		}
		else
		{
			pre = start;
			ptr = start->link;
			while(ptr->link != NULL)
			{
				pre = ptr;
				ptr = ptr->link;
			}
			pre->link = NULL;
			free(ptr);
			printf("\nDeleted one node from the last\n");
		}
		printf("\n\nDo you want to delete more nodes:\n");
		printf("Enter 1 for Yes and 0 for No.\n");
		scanf("%d", &choice);	
	}
	
	ptr->link = 0;
	ptr = start;
	printf("\n\nThe linked list is:\n");
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr-> link;
	}
	printf("\n\n");
	return 0;
}
