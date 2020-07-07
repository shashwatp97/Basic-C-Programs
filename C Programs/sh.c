#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*link;
};
struct node*first;
void create()
{
struct node*p,*q;
char ch;
p=(struct node*)malloc(sizeof(struct node));
printf("ENTER THE INFO ");
scanf("%d",&p->info);
p->link=NULL;
first=p;
do
{
    q=(struct node*)malloc(sizeof(struct node));
    printf("ENTER INFO FOR NEXT NODE ");
    scanf("%d",&q->info);
    q->link=NULL;
    p->link=q;
    p=q;
    printf("ENTER Y OR N ");
    scanf(" %c",&ch);

    }while(ch=='y'||ch=='Y');
}

void traverse()
{
   struct node*p;
    p=first;
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->link;}
}
void insert_beg()
{
    struct node*p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("ENTER INFO FOR NODE AT BEGINNING  ");
    scanf("%d",&p->info);
    p->link=first;
    first=p;
}

void insert_end()
{

    struct node*p,*q;
    p=(struct node*)malloc(sizeof(struct node));
    printf("ENTER INFO FOR NODE AT END ");
    scanf("%d",&p->info);
    q=first;
    while(q->link!=NULL)
    {


        q=q->link;
    }
    q->link=p;
    p->link=NULL;
}

void insert_location()
{
    struct node*p,*q;
    int data;
    p=(struct node*)malloc(sizeof(struct node));
    printf("ENTER INFO FOR NODE ");
    scanf("%d",&p->info);
    printf("ENTER THE DATA OF THE NODE AFTER WHICH YOU WANT TO INSERT THE NODE ");
    scanf("%d",&data);
    q=first;
    while(q->info!=data)
    {

        q=q->link;
    }
    p->link=q->link;
    q->link=p;


}

void main()
{


    create();


    insert_location();
    traverse();
    getch();
}














