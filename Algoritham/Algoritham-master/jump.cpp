#include<bits/stdc++.h>
using namespace std;
int ar[1000][1000];
int ck(int i,int j,int n)
{
   if(i==n-1)
   {
     return 22;
   }
   if(ar[i][j]==1)
      {

      if(ar[i+1][j]=1&&(i+1)<n)
      {
         ck(i+1,j,n);
      }
      if(ar[i][j+1]==1&&(j+1)<n)
      {
        ck(i,j+1,n);
      }

      else if(ar[i-1][j]==1&&(i-1)>=0)
      {
         ck(i-1,j,n);
      else if(ar[i][j-1]==1)
      {
         ck(ar,i,j-1,n);
      }
    }

}

int main()
{
  int n;
  cin>>n;
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<n;j++)
   {

      cin>>ar[i][j];
   }


 }
 cout<<ck(0,0,n)<<endl;



if(pk==1)
{
  cout<<"yes"<<endl;
}


  return 0;
}
