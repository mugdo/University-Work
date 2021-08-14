#include<bits/stdc++.h>
using namespace std;
int siz;
struct ar
{
    int f;
    int s;
    int d;
};
bool operator < (ar a,ar b)
{
    if(a.f!=b.f)
    {
        return a.f<b.f;
    }
    else
        return a.s<b.s;
}
int check(char a)
{
    int k=1;
    for(char p='a';p<='z';p++ )
    {
        if(p==a)
        {
            return k;
        }
        k++;
    }
}
int main()
{
    string suffix;
    cin>>suffix;
    siz=suffix.size();
    ar suffix_array[siz];
    for(int i=0;i<siz;i++)
    {
        suffix_array[i].f=check(suffix[i]);
        suffix_array[i].s=-1;
        suffix_array[i].d=i+1;

    }
     sort(suffix_array,suffix_array+siz);
     for(int i=0;i<siz;i++)
    {
        cout<<suffix_array[i].d<<" f=  "<<suffix_array[i].f<<" s= "<<suffix_array[i].s<<endl;
    }
    cout<<endl;

    //cout<<"2  na ar f ar man:"<<suffix_array[2].d<<endl;
    cout<<endl;
    int ck=1;
    int k=0;
    cout<<"ss"<<endl;
    while(ck<=siz)
    {
       for(int i=0;i<siz-1;i++)
       {
           if(suffix_array[i].f!=suffix_array[i+1].f||suffix_array[i].s!=suffix_array[i].s)
           {
               suffix_array[i+1].f=suffix_array[i+1].f+1;
           }
       }
       int s_array[siz];

       for(int j=0;j<siz;j++)
       {
           int temp=suffix_array[j].d+ck;
           cout<<"suffix_array[j].s+ck="<<suffix_array[j].d+ck<<endl;
           if(temp<siz)
           {
               suffix_array[j].s=suffix_array[temp].f;
               cout<<"suffix_array[temp].f="<<suffix_array[temp].f<<endl;
               cout<<"suffix_array[j].s="<<suffix_array[j].s<<endl;
           }
           else
           {
               suffix_array[j].s=-1;
           }
           cout<<suffix_array[j].s<<endl;
       }
       sort(suffix_array,suffix_array+siz);
      for(int i=0;i<siz;i++)
       {
        cout<<suffix_array[i].d<<"  "<<suffix_array[i].f<<" "<<suffix_array[i].s<<endl;
       }
       cout<<endl;
       ck=ck*2;
    }


    return 0;
}
