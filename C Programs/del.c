#include<stdio.h>
#include<conio.h>
struct node
{
    int data;
    struct node *ptr;
};
struct node *head;
void del_pos(int n)
{
    int i;
    struct node *newnode,*pos;
    pos=head;
    for(i=1;i<n;i++)
    {
        newnode=pos;
        pos=pos->ptr;
    }
    newnode->ptr=pos->ptr;
    free(pos);
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
    printf("Enter the pos u want to delete : ");
    scanf("%d",&n);
    del_pos(n);
    traversal();
}
