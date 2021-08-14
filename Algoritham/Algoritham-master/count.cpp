#include<bits/stdc++.h>
using namespace std;
int ck(int n)
{
int flag=0;
  int k=n%10;
   n=n/10;
  //cout<<"k="<<k<<endl;
  //cout<<"n="<<n<<endl;
  if(n==3)
  {
    flag++;
  }
  if(k==3)
  {
    flag++;
  }
if(flag==0)
{
  return 0;
}
 return flag;
}
int main()
{
  int n;
  scanf("%d",&n);
  int sum=0;
  //cout<<ck(33)<<endl;
  int ar[n];
  memset(ar,0,sizeof(ar));
  int con=0;
  for(int i=1;i<=n;i++)
  {
    //cout<<"i="<<i<<endl;
     sum+=ck(i);
     if(ck>0)
     {
       ar[con]=i;
       con++;
     }
     //cout<<"ck="<<sum<<endl;

  }

  printf("nUmber Of 3 : %d\n ",sum);

   return 0;
}
