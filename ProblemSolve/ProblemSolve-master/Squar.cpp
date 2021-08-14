#include<iostream>
#include <cstdio>
using namespace std;
int mat[110][110];
int ar(int mat[110][110],int ss,int);
int main(){

int m;
int p=1;
int q=2;
while(cin>>m){
int n=m;
int r=m;
int p=1;
if(m==0){
    break;
}

for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){


       mat[i][j]=p;
    }
    for(int ss=1;ss<m-1;ss++){
            ar(mat,ss,m);


      }

    }



    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
                if( l != 0)
                    printf(" %3d",mat[k][l]);
                else {
                    printf("%3d",mat[k][l]);
                }
            //cout<<"   " << mat[k][l];
        }
        cout<<endl;
    }
    cout<<endl;
}
return 0;
}
int ar(int mat[110][110],int ss,int m){
 for(int i=ss;i<(m-ss);i++){
        for(int j=ss;j<(m-ss);j++){
            mat[i][j]=ss+1;
        }
    }


}
