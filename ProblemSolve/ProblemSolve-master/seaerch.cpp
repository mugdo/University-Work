#include<iostream>
using namespace std;
char ar[50][50];
int count;
int Seas(char ar[50][50],int i,int j);
int main(){
int m,n;
int s=0;
cin>>m;
n=m;

for(int i=0;i<m;i++){
   for(int j=0;j<m;j++){
   cin>>ar[i][j];

   }
}

   for(int i=0;i<m;i++){
   for(int j=0;j<m;j++){
   cout<<ar[i][j]<<" ";

   }
   cout<<endl;

}
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
     if(ar[i][j]==1){
     s+=Seas(ar,i,j);



     }
   }


}
cout<<s<<endl;



return 0;
}
int  Seas(char ar[50][50],int i,int j){

if(ar[i][j]==1){
ar[i][j]==0;
Seas(ar,i,j);

}
if(ar[i][j-1]==1){
ar[i][j-1]==0;
Seas(ar,i,j-1);


}
if(ar[i-1][j]==1){
    ar[i-1][j]==0;
    Seas(ar,i-1,j);

}
if(ar[i-1][j-1]==1){
ar[i-1][j-1]==0;
Seas(ar,i-1,j-1);


}
if(ar[i-1][j+1]==1){
ar[i-1][j-1]==0;
Seas(ar,i-1,j-1);


}
if(ar[i+1][j-1]==1){
ar[i+1][j-1]==0;
Seas(ar,i+1,j-1);


}
if(ar[i+1][j]==1){
ar[i+1][j]==0;
Seas(ar,i+1,j);

}
if(ar[i+1][j+1]==1){
ar[i+1][j+1]==0;
Seas(ar,i,j);

 }
    count=count+1;
    return count;


}

