#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node
{
int data;
struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *delete_after(struct node *);
struct node *delete_before(struct node *);
int main()
{
int option;
do
{
printf("\n *****MAIN MENU *****\n");
printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Delete a node after a given node");
printf("\n 4: Delete a node before a given node");
printf("\n 5: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &option);
switch(option)
{
case 1: start = create_ll(start);
printf("\n LINKED LIST CREATED");
break;
case 2: start = display(start);
break;
case 3: start = delete_after(start);
break;
case 4: start = delete_before(start);
break;
}
}while(option !=5);

getch();
return 0;
}
struct node *create_ll(struct node *start)
{
struct node *new_node, *ptr;
int num;
printf("\n Enter -1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num!=-1)
{
new_node = (struct node*)malloc(sizeof(struct node));
new_node -> data=num;
if(start==NULL)
{
new_node -> next = NULL;
start = new_node;
}
else
{
ptr=start;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next = new_node;
new_node->next=NULL;
}
printf("\n Enter the data : ");
scanf("%d", &num);
}
return start;
}
struct node *display(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr != NULL)
{
printf("\t %d", ptr -> data);
ptr = ptr -> next;
}
return start;
}

struct node *delete_after(struct node *start)
{
struct node *ptr, *preptr;
int val;
printf("\n Enter the value after which the node has to deleted : ");
scanf("%d", &val);
ptr = start;
preptr = ptr;
while(preptr -> data != val)
{
preptr = ptr;
ptr = ptr -> next;
}
preptr -> next=ptr -> next;
free(ptr);
return start;
}
struct node *delete_before(struct node *start)
{
struct node *ptr, *preptr;
int val;
printf("\n Enter the value before which node has to deleted : ");
scanf("%d", &val);
ptr = start;
preptr = ptr;
while(ptr->next -> data != val)
{
preptr = ptr;
ptr = ptr -> next;
}
preptr -> next = ptr->next;
free(ptr);
return start;
}
