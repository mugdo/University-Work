#include<bits/stdc++.h>
using namespace std;
vector<int>vc[100000];
int BFS(int s,int d)
{
   // cout<<"sp"<<endl;
    int ar[100000]={0};
    int dis[100000]={0};
    queue<int>q;
    q.push(s);
    ar[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        int fon=q.front();
        q.pop();
        if(fon==d)
        {
            break;
        }
       //cout<<"fon.size()"<<fon.size()<<endl;
        for(int i=0;i<vc[fon].size();i++)
        {
            //cout<<"kq1"<<endl;
            if(ar[vc[fon][i]]==0)
            {
                q.push(vc[fon][i]);
                ar[vc[fon][i]]=1;
                dis[vc[fon][i]]=dis[fon]+1;
                cout<<"dis[vc[fon][i]]="<<dis[vc[fon][i]]<<endl;
            }
        }
    }
    return dis[d];

}
int main()
{
    int n,r,c,q;
    cin>>r;
    int a,b;

    for(int i=0;i<r;i++)
    {
        cin>>a>>b;
        //cout<<"i="<<i<<endl;
        vc[a].push_back(b);
        //vc[b].push_back(a);
        //cout<<"sk"<<endl;
    }
    //cout<<"pk"<<endl;
   for(int j=0;j<q;j++)
   {
       int temp=0;
       int sorce,distace;
       cin>>sorce>>distace;
       temp=BFS(sorce,distace);
       cout<<temp<<endl;
   }


    return 0;
}
