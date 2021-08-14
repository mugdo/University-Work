#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1,l2;
    l1=s1.size();
    l2=s2.size();
    int ar[l1][l2];
    for(int i=0;i<l2;i++)
    {
        ar[0][i]=0;
    }
    for(int i=0;i<l1;i++)
    {
        ar[i][0]=0;
    }
    for(int i=1;i<l1;i++)
    {
        for(int j=1;j<l2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                ar[i][j]=max(ar[i][j-1],ar[i-1][j])+1;
            }
            else
            {
                ar[i][j]=max(ar[i][j-1],ar[i-1][j]);
            }
        }
        //cout<<endl;
    }
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;



    return 0;
}
