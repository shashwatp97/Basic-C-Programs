#include<stdio.h>
#include<conio.h>
void sparse(int ar[10][10],int ar2[10][3],int r,int c)
{
    int i,j,k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(ar[i][j]!=0)
            {
                ar2[k][0]=i;
                ar2[k][1]=j;
                ar2[k][2]=ar[i][j];
                k++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<k;j++)
        {
            printf("%d\t",ar2[i][j]);
        }
        printf("\n");
    }


}
void main()
{
    int ar[10][10],ar2[10][3],i,j,r,c;
    printf("Row of matrix=");
    scanf("%d",&r);
    printf("Column of matrix=");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
    sparse(ar,ar2,r,c);
}

