#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
    struct node *prv; /* prv = previous */
};
struct node *head;
void create_dll()
{
    char ch;
    struct node *newnode1,*newnode2;
    newnode1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode1->data);
    head=newnode1;
    newnode1->prv=NULL;
    do
    {
        newnode2=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode2->data);
        newnode1->next=newnode2;
        newnode2->prv=newnode1;
        newnode1=newnode2;
        printf("Do you want to add more nodes(Y/N)");
        scanf(" %c",&ch);
    }while(ch=='y'||ch=='Y');
    newnode1->next=NULL;
}

void traversal()
{
    struct node *newnode;
    newnode=head;
    while(newnode!=NULL)
    {
        printf("%d\t",newnode->data);
        newnode=newnode->next;
    }
}

int main()
{
    create_dll();
    traversal();
}
