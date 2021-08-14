#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int wet[100][100];
int vis[100];
int dis[100]={99999999};
struct  st
{
    int p;
    int w;
};
bool operator < (st x,st y)
{
    if(x.w > y.w)
        return true;
    return false;
//    if(x.w!=y.w)
//    {
//        return x.w>y.w;
//    }
//    else
//    {
//        return x.w<y.w;
//    }
}
void diskta(int sorce,int n)
{
   for(int i=0;i<100;i++)
   {
       vis[i]=0;
       dis[i]=999999;
   }
   vis[sorce]=1;
   dis[sorce]=0;
   priority_queue<st>pq;
   st obj;
   obj.w=dis[sorce];
   obj.p=sorce;
   pq.push(obj);
   //cout<<"ss"<<endl;
   while(!pq.empty())
   {
       st ob;
       ob=pq.top();
       //cout<<"pop="<<ob.p<<endl;
       pq.pop();
       for(int i=0;i<v[ob.p].size();i++)
       {
           //cout<<"ss"<<endl;
           //cout<<"dis["<<v[ob.p][i]<<"]="<<dis[v[ob.p][i]]<<" dis["<<ob.p<<"]="<<dis[ob.p]<<" wet["<<ob.p<<"]["<<v[ob.p][i]<<"]="<<wet[ob.p][v[ob.p][i]]<<endl;
           if(dis[v[ob.p][i]]>(dis[ob.p]+wet[ob.p][v[ob.p][i]]))
           {
              dis[v[ob.p][i]]=(dis[ob.p]+wet[ob.p][v[ob.p][i]]);
              //cout<<"dis="<<dis[v[ob.p][i]]<<endl;
              st op;
              op.p=v[ob.p][i];
              op.w=dis[v[ob.p][i]];
              pq.push(op);
           }

       }
       //cout<<"endl"<<endl;
   }
 //cout<<"distance="<<endl;
  for(int i=1;i<=n;i++)
  {
      cout<<"dis[<<"i<<"]="<<dis[i]<<endl;
  }
}
int main()
{
    int edge,node;
    cin>>edge>>node;
    int a,b,w;
    for(int i=0;i<edge;i++)
    {
        cin>>a>>b>>w;
        v[a].push_back(b);
        v[b].push_back(a);
        wet[a][b]=w;
        wet[b][a]=w;

    }
    diskta(1,node);
    return 0;
}
