#include<bits/stdc++.h>
using namespace std;
int common(int ar[],int lis[],int n)
{
    int i=1,j=2;
    int big=0;
    while(j!=n+1)
    {
            for(int p=i;p<j;p++)
            {
                cout<<"ar["<<p<<"[="<<ar[p]<<" ar["<<j<<"]="<<ar[j]<<endl;
                if(ar[p]<ar[j])
                {
                    //cout<<"ar[p]+1="<<ar[p]+1<<""lis[j]"
                    lis[j]=max(lis[p]+1,lis[j]);
                    cout<<"lis[j]="<<lis[j]<<endl;
                    if(big<lis[j])
                    {
                        big=lis[j];
                    }
                }
            }
            cout<<"lis[j]=last="<<lis[j]<<endl;
            j++;
            i=1;


    }
    return big;
}
int main()
{
    int n;
    cin>>n;
    int ar[10000];
    int lis[1000];
    for(int i=1;i<=n;i++)
    {
        lis[i]=1;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    cout<<common(ar,lis,n)<<endl;

    return 0;
}
