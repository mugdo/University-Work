#include<bits/stdc++.h>
using namespace std;
vector<vector<int > >u(2000);
vector<int>vis(2000,0);
int edg;
BFS(int source)
{
   queue<int>q;
   q.push(source);
   vis[source]=1;
   while(!q.empty())
   {
       int fon=q.front();
       cout<<fon<<" ";
       q.pop();
       for(int i=0;i<u[fon].size();i++)
       {
           if(vis[u[fon][i]]!=1)
           {
               vis[u[fon][i]]=1;
               q.push(u[fon][i]);
           }


       }
   }
}
int main()
{
    cin>>edg;
    int source=0;
    int ck=0;
    for(int i=0;i<edg;i++)
    {
        int a,b;
        cin>>a>>b;
        if(ck==0)
        {
            source=a;
            ck=1;
        }
        u[a].push_back(b);
        u[b].push_back(a);
    }
    BFS(source);

    return 0;
}
/*
1 2
1 3
2 4
2 5
3 6
3 7
*/

