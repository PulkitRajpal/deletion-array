#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],n,i,pos,val;
    printf("enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the elements of array");
        scanf("%d",&a[i]);

        }
        printf("\n");
        printf("enter the val of element");
        scanf("%d",&val);
    printf("enter the pos of element");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        a[i-1]=a[i];

    }
    n--;

    for(i=0;i<n;i++)
   {

    printf(" %d ",a[i]);
   }
    return 0;
}
