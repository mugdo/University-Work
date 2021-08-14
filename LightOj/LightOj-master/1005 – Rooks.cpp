#include<bits/stdc++.h>
using namespace std;
int n,k,p;
int r[1000][1000];
int rooks(int n,int k)
{
    if(k==0)
    {
        return 0;
    }
    if(n<=0)
    {
        return 0;
    }
    if(k==1)
    {
        return n*(p-k);
    }
    int x=0,y=0;
    x+=rooks(n-1,k-1);
    y+=rooks(n-1,k);
    return x+y;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        cin>>n>>k;
        p=k;
        int temp=rooks(n,k);
        cout<<"Case "<<i<<": "<<temp<<endl;

    }


    return 0;
}
