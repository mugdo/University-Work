#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
int a[200],ar[200];
for(int i=0;i<t;i++){
    int n,flag=0,l=0;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>a[j];

    }
     for(int p=0;p<n;p++){
        cin>>ar[p];

    }
    int count=0;
    int y=0;
    y=n-1;
    for(int k=0;k<n;k++){
    if(a[k]==ar[y]){

        count+=1;
      }


    y--;

    }

    if(count==n){
       flag++;
       l=1;

    }
    int con=0;
    for(int s=0;s<n;s++){

        if(a[s]==ar[con]){
          con++;


        }
    }

    if(con==n){
       flag++;
       l=2;
    }
    if(flag==2){
        cout<<"both"<<endl;
    }
    else if(l==1){
        cout<<"stack"<<endl;
    }
    else if(l==2){
        cout<<"queue"<<endl;
    }
else{
    cout<<"neither"<<endl;
}
}
return 0;
}
