#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int temp;
    int flag=0;
    int swp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            flag++;
            printf("ar[%d]=%d  ar[%d]=%d\n",j,ar[j],j+1,ar[j+1]);
            if(ar[j]>ar[j+1])
            {
                swp++;
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        printf("total comparisation step %d : %d\n",i+1,flag);
        printf("total swap %d : %d \n",i+1,swp);
        for(int i=0;i<n;i++)
        {
            printf("%d  ",ar[i]);
        }
        printf("\n");
        flag=0;
        swp=0;
    }

    return 0;
}
/*
6
2 4 7 1 5 3
*/


