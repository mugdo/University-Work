# include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int s[n];
        int e[n];
        for(int j=0;j<n;j++)
        {
            int a=0;
            int b=0;
            cin>>a>>b;
            s[j]=a;
            e[j]=b;
        }
        sort(s,s+n);
        sort(e,e+n);

        int con=0;
        int ck=0;
        int p=0,q=0;
        int ar[n];
        int r=0;
        while(1)
        {
            if(n==p)
                break;
            if(s[p]<=e[q])
            {
                con++;
                ar[r]=con;
               // cout<<"ar[s]="<<ar[r]<<endl;
                r++;
                p++;
            }
            if(s[p]>e[q])
            {
                con--;
                ar[r]=con;
               // cout<<"ar[e]="<<ar[r]<<endl;
                r++;
                q++;
            }

        }
       // cout<<"r="<<r<<endl;
        int mx=0;
        for(int ind=0;ind<r;ind++)
        {
            if(ar[ind]>mx)
                mx=ar[ind];
        }
        sort(ar,ar+(r-1));

        cout<<"Case"<<" "<<i+1<<": "<<mx<<endl;
    }
}
/*
3
6
1 10
3 5
10 20
11 22
16 18
*/
