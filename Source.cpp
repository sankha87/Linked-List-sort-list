/* SORTING A Linked LIST IN ASCENDING ORDER */
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int i;
	int num;
	struct  node *head, *temp, *pre, *temp1, *count;
	
	printf("\n Enter the number of node you want to create: ");
	scanf_s("%d", &num);
	head = (struct node*) malloc(sizeof(struct node));;
	temp = head;
	for (i = 0; i < num; i++)
	{
		printf("\n Enter the node: %d: ", i + 1);
		scanf_s("%d", &temp->data);
		temp->next = (struct node*) malloc(sizeof(struct node));
		temp = temp->next;
	}
	temp->next = NULL;
	temp1 = head;
	for (; temp1->next != NULL; temp1 = temp1->next)
	{
		for (count = temp1->next; count != NULL; count = count->next)
		{
			if (temp1->data > count->data)
			{
				int temp = temp1->data;
				temp1->data = count->data;
				count->data = temp;
			}
		}
	}
	temp = head->next;
	printf("\n After sorting the Linked list is as follows:\n");
	while (temp)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	_getch();
}