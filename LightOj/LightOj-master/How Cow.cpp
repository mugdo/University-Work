
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x1=0,y1=0,x2=0,y2=0;
        int m=0;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;


        int ck=0;
        for(int j=0;j<m;j++)
        {

            int x=0,y=0;
            cin>>x>>y;
             if(ck==0)
            {
                cout<<"Case"<<" "<<i<<":"<<endl;
                ck=1;

            }
            if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
            {
                cout<<"Yes";
            }
            else
            cout<<"No";


        }
        cout<<endl;


    }


    return 0;
}
