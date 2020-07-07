#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *ptr;
};
struct node *head;
void insert_after_value(int data)
{
    struct node *newnode,*pos;
    pos=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    while(pos->data!=data)
        pos=pos->ptr;
    newnode->ptr=pos->ptr;
    pos->ptr=newnode;
    }
void traversal()
{
    struct node *newnode;
    newnode=head;
    while(newnode!=NULL)
    {
        printf("%d\t",newnode->data);
        newnode=newnode->ptr;
    }
}
void create()
{
    char ch;
    struct node *newnode1,*newnode2;
    newnode1=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode1->data);
    head=newnode1;
    do
    {
        newnode2=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode2->data);
        newnode1->ptr=newnode2;
        newnode1=newnode2;
        printf("Do you want to add more nodes(Y/N)");
        scanf(" %c",&ch);
    }
    while(ch=='Y' || ch=='y');
    newnode1->ptr=NULL;
}
int main()
{
    int n;
    create();
    printf("Enter the value after which u want to insert : ");
    scanf("%d",&n);
    insert_after_value(n);
    traversal();
}
