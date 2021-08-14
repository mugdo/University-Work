#include<bits\stdc++.h>
using namespace std;
int main(){
    while(1){
    int ss=9999;
    int ar[30][30];
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++){

            ar[i][j]=ss;
        }
    }
    int sec;
    int first;
    for(int i=1;i<=19;i++){

        cin>>first;
        for(int j=1;j<=first;j++){
                cin>>sec;

            ar[i][sec]=1;
            ar[sec][i]=1;
        }
       // cout<<"*";
    }
    //cout<<"$";
    for(int k=1;k<=20;k++){
        for(int i=1;i<=20;i++){
            for(int j=1;j<=20;j++){
                ar[i][j]=min(ar[i][j],(ar[i][k]+ar[k][j]));
            }
        }
    }
    //cout<<"#";
    int test,in=1;
    cin>>test;
    for(int t=0;t<test;t++){

        int a,b;
        cin>>a>>b;
        cout<<"Test Set"<<' '<<"#"<<in<<' ';
        cout<<a<<' '<<"to"<<' '<<b<<":"<<' ';
        cout<<ar[a][b]<<endl;

    }
    in++;
    cout<<test<<endl;

}

return 0;
}
