#include<stdio.h>
#include<conio.h>
struct poly
{
    int c;
    int e;
    struct poly *ptr;
};
struct poly *head;
void create()
{
    char ch;
    struct poly *newnode1,*newnode2;
    newnode1=(struct poly *)malloc(sizeof(struct poly));
    scanf("%d%d",&newnode1->c,&newnode1->e);
    head=newnode1;
    do
    {
        newnode2=(struct poly *)malloc(sizeof(struct poly));
        scanf("%d%d",&newnode2->c,&newnode2->e);
        newnode1->ptr=newnode2;
        newnode1=newnode2;
        scanf(" %c",&ch);
    }
    while(ch=='y'||ch=='Y');
    newnode1->ptr=NULL;

}
void traversal()
{
    struct poly *pos;
    pos=head;
    if(head==NULL)
    {
        printf("UNDERFLOW!!!!!");
        exit(0);
    }
    while(pos->ptr!=NULL)
    {
        printf(" (%d)x^%d +",pos->c,pos->e);
        pos=pos->ptr;
    }
    printf(" (%d)x^%d",pos->c,pos->e);
}
int main()
{
    create();
    traversal();
}
