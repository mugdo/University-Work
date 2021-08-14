#include<bits/stdc++.h>
using namespace std;
int vist[10000]={0};
struct st
{
    int id;
    int wt;
};

bool operator < (st x,st y)
{
    if(x.wt!=y.wt)
    {
        return x.wt>y.wt;
    }
    else
        return x.wt<y.wt;
}
void prims(int sorce,vector<int>vc[10000],vector<int>w[10000])
{

    priority_queue<st>pq;
    for(int i=0;i<vc[sorce].size();i++)
    {
        st obj;
        obj.id=vc[sorce][i];
        obj.wt=w[sorce][i];
        //cout<<"w["<<sorce<<"]["<<i<<"]="<<w[sorce][i]<<endl;
        pq.push(obj);
    }
    vist[sorce]=1;
    cout<<"pt="<<sorce<<" ";
    while(!pq.empty())
    {
        st ob;
        ob=pq.top();

        pq.pop();
        //cout<<"vist[ob.id]="<<ob.id<<endl;
        if(vist[ob.id]==0)
        {
           cout<<ob.id<<" ";
           vist[ob.id]=1;
           for(int i=0;i<vc[ob.id].size();i++)
            {
               st ob2;
               ob2.id=vc[ob.id][i];
               ob2.wt=w[ob.id][i];
               if(vist[ob2.id]==0)
                pq.push(ob2);
            }
        }

    }

 cout<<endl;

}
int main()
{
    int node,edge;
    cin>>node>>edge;
    int a,b,wet;
    vector<int>vc[10000];
    vector<int>w[10000];
    for(int i=0;i<edge;i++)
    {
        cin>>a>>b>>wet;
        if(b!=a)
        {
            vc[a].push_back(b);
            vc[b].push_back(a);
            //int k=min(wet,w[a][i]);
            w[a].push_back(wet);
            w[b].push_back(wet);
        }

    }
    prims(1,vc,w);
    return 0;
}
/*
4 5
1 2 1
1 3 3
2 4 4
1 4 2
3 4 5


6 10
1 2 3
2 3 1
3 4 4
4 5 8
4 1 6
1 6 5
2 6 4
3 6 4
4 6 5
5 6 2
*/
