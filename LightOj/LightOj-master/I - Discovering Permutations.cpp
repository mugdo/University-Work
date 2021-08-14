#include <bits/stdc++.h>
#include <string.h>
using namespace std;
 int ck=0;

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int l, int r,int b)
{
   int i;

   if (l == r)
   {
       if(ck==b)
        cout<<a;
       else
       {
           cout<<a<<endl;
           ck++;

       }


       //cout<<ck<<"b="<<b<<endl;

   }

   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));


              permute(a, l+1, r,b);


          swap((a+l), (a+i));
          if(ck==b)
            break;//backtrack
       }
   }
}


int main()
{
    int t;
    cin>>t;
    int ca=0;
    for(int j=0;j<t;j++)
    {

        ca++;
        int a=0,b=0;
        cin>>a>>b;
        char str[a+10];
        char c;
        int i;
        int con=0;

        for(c = 'A',i=0; c <= 'Z',i<a; ++c,i++)
        {
            con++;
            str[i]=c;
            //cout<<str[c];

        }
       //printf("%c ", c);
       //cout<<"t="<<t<<endl;


        int n = strlen(str);
        ck=0;

            cout<<"Case"<<" "<<ca<<":"<<endl;
            permute(str, 0, n-1,b);
            //cout<<endl;
            //cout<<"i="<<j<<endl;

    }


    return 0;
}
