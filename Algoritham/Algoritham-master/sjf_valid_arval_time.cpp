#include<bits/stdc++.h>
using namespace std;
struct sjf
{
    int process;
    int arival_time;
    int bust_time;
};
bool operator < (sjf a,sjf b)
{
    if(a.bust_time!=b.bust_time)
    {
        return a.bust_time<b.bust_time;
    }
    else
        a.arival_time<b.arival_time;
}
int main()
{
    int number_of_process;
    cin>>number_of_process;
    sjf process_arival_bust[number_of_process];
    for(int i=0;i<number_of_process;i++)
    {
        cin>>process_arival_bust[i].arival_time;
        cin>>process_arival_bust[i].bust_time;
        process_arival_bust[i].process=i+1;
    }
    sort(process_arival_bust,process_arival_bust+number_of_process);
      for(int i=0;i<number_of_process;i++)
    {
         cout<<process_arival_bust[i].process<<"  ";
        cout<<process_arival_bust[i].arival_time<<"   ";
        cout<<process_arival_bust[i].bust_time<<endl;

    }


    return 0;
}
