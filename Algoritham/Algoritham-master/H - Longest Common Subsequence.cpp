#include<bits/stdc++.h>
using namespace std;
int ss=0;
int b=0;
int main()
{
    char s1[2000],s2[2000];
    int ar[1000];
    while(cin>>s1>>s2)
    {
        int n1=0,n2=0;
        n1=strlen(s1);
        n2=strlen(s2);
        int con=0;
        if(n1>=n2)
        {
            for(int k=0;k<n1;k++)
            {
                      for(int i=k;i<n1;i++)
                       {
                         for(int j=b;j<n2;j++)
                            {
                                if(s1[i]==s2[j])
                                   {
                                con++;
                                cout<<s1[j];

                            //cout<<s1[j];
                            //break;
                                  }
                          }
                       }
                       cout<<endl;
                       ar[ss]=con;
                       ss++;
                       con=0;
                       b=0;


            }


        }
        else
        {
            for(int x=0;x<n2;x++)
            {
                for(int y=0;y<n1;y++)
                {
                    if(s2[x]==s1[y])
                    {
                        con++;
                        s1[y]=' ';
                        //cout<<"s1[y]"<<s1[y]<<endl;
                        //break;
                    }
                }
            }

        }
        sort(ar,ar+(ss-1));
        cout<<ar[0]<<endl;

    }
    return 0;
}
