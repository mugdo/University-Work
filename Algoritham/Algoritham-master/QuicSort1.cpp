#include<bits/stdc++.h>
using namespace std;
int part(int ar[],int p,int r)
{
    int i=p-1;
    int m=p;
    int v=r;
    int x=ar[r];
    int j;
    for(j=p;j<r;j++)
    {
        if(ar[j]<=x)
        {
            i=i+1;
            int temp=0;
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
           // cout<<"ar["<<i<<"]="<<ar[i]<<" ar["<<j<<"]="<<ar[j]<<endl;

        }

    }
    int te=ar[i+1];
    ar[i+1]=ar[j];
    ar[j]=te;
    return i+1;


}
void Quicsort(int ar[],int p,int r)
{
    if(p<r)
    {
        int f=0;
        f=part(ar,p,r);
        Quicsort(ar,p,f-1);
        Quicsort(ar,f+1,r);

    }
}


int main()
{
    int n;
    cout<<"Enter the Number of element:";
    cin>>n;
    int ar[n+1];
    cout<<"Enter the Element:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    Quicsort(ar,1,n);
    cout<<"Sorted Elemnent:"<<endl;
    cout<<"********************************"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
12
13 19 9 5 12 8 7 4 21 2 6 11
*/
