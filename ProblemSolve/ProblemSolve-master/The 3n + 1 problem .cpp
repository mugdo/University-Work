#include<iostream>
using namespace std;
int devide(int x);
int main(){

int n,m;
while(cin>>n>>m){
int r=0,p=0,i,temp=0,r1=0,r2=0;
r1=n;
r2=m;
if(n>m){
temp=n;
n=m;
m=temp;
}


for(i=n;i<=m;i++){
r=devide(n);
n++;
if(r>p){
    p=r;
    }
    else if(r<p){

        p=p;
    }
 }
cout<<r1<<' '<<r2<<' '<<p<<endl;
    }
return 0;
}
int devide(int x){
    int count=1;
while(x!=1){
if(x%2==0){
x=x/2;
count+=1;
}
else{
    x=((3*x)+1);
    count+=1;
    }
  }
  return count;
}
