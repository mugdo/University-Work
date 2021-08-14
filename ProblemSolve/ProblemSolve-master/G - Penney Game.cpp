#include<bits/stdc++.h>
using namespace std;
int main(){
   int p,n;
   char ar[10];
   string s;
   cin>>p;


   for(int i=0;i<p;i++){
       int TTT=0,TTH=0,THT=0,THH=0,HTT=0,HTH=0,HHT=0,HHH=0;
       cin>>n;
       cin>>s;
       for(int j=0;j<38;j++){

       if (s[j]=='T'&&s[j+1]=='T'&&s[j+2]=='T'){

       TTT+=1;
       }
       else if(s[j]=='T'&&s[j+1]=='T'&&s[j+2]=='H'){
       TTH+=1;

       }
       else if(s[j]=='T'&&s[j+1]=='H'&&s[j+2]=='T'){
       THT+=1;

       }
       else if(s[j]=='T'&&s[j+1]=='H'&&s[j+2]=='H'){
       THH+=1;

       }

      else if(s[j]=='H'&&s[j+1]=='T'&&s[j+2]=='T'){
       HTT+=1;

       }
       else if(s[j]=='H'&&s[j+1]=='T'&&s[j+2]=='H'){
       HTH+=1;

       }
       else if(s[j]=='H'&&s[j+1]=='H'&&s[j+2]=='T'){
       HHT+=1;

       }


        else if(s[j]=='H'&&s[j+1]=='H'&&s[j+2]=='H'){
       HHH+=1;

       }






   }
   cout<<n<<" "<<TTT<<" "<<TTH<<" "<<THT<<" "<<THH<<" "<<HTT<<" "<<HTH<<" "<<HHT<<" "<<HHH<<endl;



}



return 0;

}
