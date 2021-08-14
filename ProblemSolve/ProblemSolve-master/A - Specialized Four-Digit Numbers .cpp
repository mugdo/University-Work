#include<iostream>
using namespace std;

int main(){
    for(int y=1000;y<=9999;y++){
            int k=y;
int s=0,r=0,t=0;
int l=k;
s=k;
r=k;
t=k;

int p=0,q=0;
while(k>=10){

p+=k%10;
q=k/10;
k=q;
if(q<10)
{
    p=p+q;
    break;
}
}

int i=0,j=0;
while(l>=12){

  i+=l%12;

  j=l/12;
  l=j;
if(l<12)
{
    i=i+l;
    break;
}
}
int f=0,g=0;
while(r>=16){

  f+=r%16;

  g=r/16;
  r=g;
if(r<16)
{
    f=f+r;
    break;
}
}

if(p==i&&p==f){
    cout<<t<<endl;
 }
}
return 0;
}
