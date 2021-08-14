#include<bits/stdc++.h>
using namespace std;
int top=0;
char ch[130];

int pus(char j){
    ch[top]=j;
    top++;
    return top;
}
int pop(int k){
    top--;
    return top;
}

int main(){
    int t;
    cin>>t;

    string tmp = "" ;
    getline(cin,tmp);

    for(int a=0;a<t;a++){
        int i=0;
        string s;
        top = 0 ;

        getline(cin,s);
        //cin>>s;

        int n=s.size();

        for(i=0;i<n;i++){
            //cerr << s[i]<<endl;
            if(s[i]==')' && top>=0 && ch[top-1]=='('){
                pop(ch[top]);
            }
            else if(s[i]==']'&& top>=0 &&ch[top-1]=='['){

                pop(ch[top]);

            }
            else{
                pus(s[i]);
            }

        }
        //cout << top << endl ;


if(top==0){
    cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}



}


 return 0;

}

