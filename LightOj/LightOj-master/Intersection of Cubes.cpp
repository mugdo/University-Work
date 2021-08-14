#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n=0;
        cin>>n;
        int a=0,b=0,c=0,d=0,e=0,f=0;
        int ck=0;
        for(int j=1;j<=n;j++)
        {
            int x1=0,y1=0,z1=0,x2=0,y2=0,z2=0;
            cin>>x1>>y1>>z1>>x2>>y2>>z2;

            //cout<<"x1="<<x1<<" y1="<<y1<<" z1="<<z1<<" x2="<<x2<<" y2="<<y2<<" z2="<<z2<<endl;
            if(ck==0)
            {
                a=x1;
                b=y1;
                c=z1;
                d=x2;
                e=y2;
                f=z2;
                ck=1;
            }
            //cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<" f="<<f<<endl;
            if(x1>a)
            {
                a=x1;
            }
            if(y1>b)
            {
                b=y1;
            }
            if(z1>c)
            {
                c=z1;
            }
            if(x2<d)
            {
                d=x2;
            }
            if(y2<e)
            {
                e=y2;
            }
            if(z2<f)
            {
                f=z2;
            }
            //cout<<"a="<<a<<" b="<<b<<" c="<<c<<" d="<<d<<" e="<<e<<" f="<<f<<endl;




        }
        int s=0,t=0,l=0;
        s=d-a;
        t=e-b;
        l=f-c;
        int p=0;
        p=s*t*l;
        if(p<0)
            cout<<"Case"<<" "<<i<<":"<<" "<<"0"<<endl;
        else

        cout<<"Case"<<" "<<i<<":"<<" "<<p<<endl;

    }
    return 0;
}
