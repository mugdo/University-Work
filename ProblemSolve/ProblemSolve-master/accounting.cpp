#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,n;
    while(cin>>a>>b>>n)
    {
        if(a==0 && b==0)
            cout<<5<<endl;
        else
        {
            int flag=1;

            float d=b/a;
            float p=1/n;

            if(d<0)
            {
                flag=0;
                d=abs(d);
            }

            float r=pow(d,p);

            if(ceil(r)!=floor(r))
                cout<<"No solution"<<endl;
            else
            {
                if(flag==0)
                    cout<<"-"<<r<<endl;
                else
                    cout<<r<<endl;
            }
        }
    }


return 0;

}
