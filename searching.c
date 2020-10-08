#include <stdio.h>
#include <conio.h>

int searching(int *x,int n,int key)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(x[i]==key)
        {
            printf("\n Element is found  ");
            break;
        }
    }
    if(i==n)
        printf("\n Element is not found in the list ");
}
int main()
{
    int x[10],n,key,i;
    printf("\n Enter the no of array element");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n Enter the %d array element ",i);
        scanf("%d",&x[i]);
    }
    printf("\n Enter the key element :- ");
    scanf("%d",&key);
    searching(x,n,key);
    getch();
}
