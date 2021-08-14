#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
        {
            break;
        }
        string name[n];
        int x[n],y[n];
        int alfa[n];
        int bord[12][12];
        int flah=1;
        int k;
        for(int i=0;i<n;i++)
        {
            cin>>name[i]>>x[i]>>y[i]>>alfa[i];
            k=stoi(name[i]);
            bord[x[i]][y[i]]=k;

        }
        int time=0;
        string name2,content;
        int alfa2,alfa3;
        for(int j=0;j<m;j++)
        {
            cin>>time>>name2>>content;
            if(content=="TURN")
            {
                cin>>alfa2;
                alfa3=0;
            }
            if(content=="MOVE")
            {

            }
            if(content=="SHOOT")
            {

            }

        }




    }
    return 0;
}
