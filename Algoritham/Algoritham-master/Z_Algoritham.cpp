#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pratarn;
    cin>>pratarn;
    int ps=0;
    ps=pratarn.size();
    int z[ps];
    z[0]=0;
    int left=0,right=0;
    int j=0;
    int con=0;
    int ck=0;
    for(int i=1;i<ps;i++)
    {
        //j=0;
        //con=0;

        //left=i;
        cout<<"pratarn[i]="<<pratarn[i]<<"   pratarn[j]="<<pratarn[j]<<endl;
       if(pratarn[i]==pratarn[j])
       {
           if(ck==0)
           {
               left=i;
               ck=1;
           }
           //ck=1;
           //i++;
           j++;
           con++;

       }
       else
       {
          //i--; //cout<<"lest"<<endl;

           right=i;

           cout<<"left="<<left<<"  right="<<right<<endl;

           if(right==left)
           {
               z[i]=0;
               cout<<"z[i]="<<z[i]<<endl;
               con=0;
           }
           else
           {
              // cout<<"left="<<left<<"  right="<<right<<endl;
               int temp=1;
               z[left]=con;
               cout<<"ss z[left]="<<z[left]<<endl;
               int pk=0;
               int rk=0;
               for(int k=left+1;k<right;j++)
               {
                   //cout<<"ss"<<endl;
                  if((z[temp]+k)>right)
                  {
                      z[k]=z[temp];
                      cout<<"z[k]="<<z[k]<<endl;
                      temp++;
                      pk++;

                  }
                  else
                  {
                     rk=1;
                     left=k;
                     j=pk;
                     i=right;

                  }
               }
               if(rk==0)
               {
                   left=right=i;
                   ck=0;
               }
               cout<<"left="<<left<<"  right="<<right<<endl;
               i--;

           }
           cout<<"i="<<i<<endl;





       }
    }
    for(int r=0;r<ps;r++)
    {
        cout<<z[r]<<" ";
    }
    return 0;
}
