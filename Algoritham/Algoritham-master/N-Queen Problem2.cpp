#include<bits/stdc++.h>
using namespace std;
int con=0;
void update(int i,int col,int x,int y,int ar[14][14],int n)
{
    int p=i+x,q=col+y;
//    int r=i,c=col;

    while(p<n&&p>=0&&q<n&&q>=0)
    {
        ar[p][q]+=1;
        p+=x;
        q+=y;

    }
}

void rupdate(int i,int col,int x,int y,int ar[14][14], int n)
{
     int p=i+x,q=col+y;
     int r=i,c=col;

    while(p<n&&p>=0&&q<n&&q>=0)
    {
        ar[p][q]-=1;
        p+=x;
        q+=y;
    }
}

bool emty(int row,int col,int ar[14][14])
{
    if(ar[row][col]==0)
        return true;
    else
        return false;
}

int place(int i,int col,int ar[14][14])
{
    ar[i][col]=99;
    //cout<<ar[i][col]<<endl;
}

int mark(int i,int col,int ar[14][14],int n)
{
    int r = i ;
    int c = col ;

    for(int ii=0;ii<n;ii++)
    {
        ar[r][ii]+=1;
        ar[ii][c]+=1;
    }

    update(i,col,-1,1,ar,n);
    update(i,col,1,1,ar,n);
    update(i,col,1,-1,ar,n);
    update(i,col,-1,-1,ar,n);
}

int unmark(int i,int col,int ar[14][14],int n)
{
    int r = i ;
    int c = col ;

    for(int ii=0;ii<n;ii++)
    {
        ar[r][ii]-=1;
        ar[ii][c]-=1;
    }

    rupdate(i,col,-1,1,ar,n);
    rupdate(i,col,1,1,ar,n);
    rupdate(i,col,1,-1,ar,n);
    rupdate(i,col,-1,-1,ar,n);

}
int replace(int i,int col,int ar[14][14])
{
  ar[i][col]=ar[i][col]-99;
}

bool recus(int col,int n,int ar[14][14])
{
    /*
    printf("%d\n",col);

    for( int i = 0 ; i < n ; i ++ ) {
        for( int j = 0 ; j < n ; j ++ ) {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
    */
    if(col == n) {
        //cout<<"shaiful"<<endl;
        con++;
       // return true;
    }

    for(int i=0;i<n;i++)
    {
        bool k = false ;
        if(emty(i,col,ar)==true)
        {
//            printf("coloring %d %d\n",i,col);
            place(i,col,ar);
            mark(i,col,ar,n);
            k=recus(col+1,n,ar);


            if(k==true)
            {

        //        return true;

            }
            else
            {
                unmark(i,col,ar,n);
                replace(i,col,ar);
            }
        }
    }

    return false ;
}

int main()
{
    int t;
    cin>>t;
    int ar[14][14];

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ar[i][j]=0;
            }
        }
        //for(int i=0;i<=0;i++)
        //{
         //   for(int j=0;j<n;j++)
         //   {
        bool k=false;
        k=recus(0,n,ar);
        if(k==true)
        {
              for(int i=0;i<n;i++)
                {

                    for(int j=0;j<n;j++)
                    {
                        cout<<ar[i][j]<<"     ";
                    }
                    cout<<endl;
                }
        }
        else
        {
            cout<<"NO"<<endl;
            cout<<con<<endl;
        }
    }
    return 0;
}

