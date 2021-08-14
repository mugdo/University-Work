#include<bits/stdc++.h>
using namespace std;
int ar[1000][1000];
int EndingPoint;
bool ck(int r,int n)
{

  if(r>=0&&r<n)
  {
    return true;
  }
  else
  {
     return false;
  }
}
int vis[10000][10000]={0};
struct fr
{
   int p;
   int q;
};
int BFS(int i,int j,int n)
{
   //cout<<"i="<<i<<endl;
   fr obj;
   obj.p=i;
   obj.q=j;
   queue<fr>qu;
   qu.push(obj);
   vis[obj.p][obj.q]=1;
   //cout<<"ss"<<endl;
   int valid1[4]={0,-1,0,1};
   int valid2[4]={1,0,-1,0};
   //cout<<"j="<<j<<endl;
   while(!qu.empty())
   {

            fr font=qu.front();
            //cout<<font.p<<endl;
            qu.pop();
            for(int k=0;k<4;k++)
             {
                  if(EndingPoint==obj.q)
                  {
                     return 99;

                  }
                 if(ck(font.p+valid1[k],n)==true&&ck(font.q+valid2[k],n)==true&&ar[valid1[k]+font.p][valid2[k]+font.q]==1&&vis[valid1[k]+font.p][valid2[k]+font.q]!=1)
                 {
                   obj.p=font.p+valid1[k];
                   obj.q=font.q+valid2[k];
                   qu.push(obj);
                   vis[obj.p][obj.q]=1;


                 }
             }




   }

  return 0;

}
int main()
{
  int n;
  cin>>n;
  int temp=0;
  for(int i=0;i<n;i++)
  {
     for(int j=0;j<n;j++)
     {
        cin>>ar[i][j];

     }
  }

  EndingPoint=n-1;
  if(BFS(0,0,n)==99)
  {

     cout<<"Frog can cross the river"<<endl;
  }
  else
  {
    cout<<"Frog can't cross the river"<<endl;
  }

  return 0;
}
/*
3
1 0 0
1 1 0
1 1 1
*/
