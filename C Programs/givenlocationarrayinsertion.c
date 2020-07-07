#include<stdio.h>
#include<conio.h>
void insert_pos(int pos,int ar[],int num,int size)
{
    int i;
    for(i=size-1;i>=(pos-1);i--)
    {
        ar[i+1]=ar[i];
    }
    ar[pos-1]=num;
}
int delete_pos(int ar[],int num1,int size)
{
    int i,j=0,p;
    for(i=0;i<size;i++)
    {
        if(ar[i]!=num1)
        {
            ar[j]=ar[i];
            j++;
            p=j;
        }
    }
    return p;
}
void traverse(int ar[],int size)
{
    int i;
    for(i=0;i<size;i++)
        printf("%d\t",ar[i]);
}
void main()
{
    int i=0,pos,size,num,ar[15],num1;
    char ch;
    do
    {
        printf("Insert element");
        scanf("%d",&ar[i]);
        i=i+1;
        printf("Want to add more elements(Y/N)");
        scanf(" %c",&ch);
    }
    while(ch=='Y'||ch=='y');
    size=i;
    traverse(ar,size);
    printf("\nEnter the position at which you want to insert number");
    scanf("%d",&pos);
    printf("Enter the number you want to insert");
    scanf("%d",&num);
    insert_pos(pos,ar,num,size);
    size=size+1;
    traverse(ar,size);
    printf("\nGive the number you want to delete");
    scanf("%d",&num1);
    size=delete_pos(ar,num1,size);
    traverse(ar,size);
    getch();
}

