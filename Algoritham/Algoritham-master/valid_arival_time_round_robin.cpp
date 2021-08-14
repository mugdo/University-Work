#include<bits/stdc++.h>
using namespace std;
struct round_robin
{
    int process;
    int bust_time;
    int arival_time;
};
bool operator <(round_robin a,round_robin b)
{
    if(a.arival_time!=b.arival_time)
    {
        return a.arival_time<b.arival_time;
    }
}
int main()
{
    int number_of_process,time_quantum;
    int total_bust_time=0;
    cin>>number_of_process;
    cin>>time_quantum;
    round_robin process_arivel_bust[number_of_process];
    for(int i=0;i<number_of_process;i++)
    {
        cin>>process_arivel_bust[i].bust_time;
        cin>>process_arivel_bust[i].arival_time;
        total_bust_time+=process_arivel_bust[i].bust_time;
        process_arivel_bust[i].process=i+1;
    }
    sort(process_arivel_bust,process_arivel_bust+number_of_process);

    int grant_chart[total_bust_time];
    int k=1;
    //cout<<"total_bust_time="<<total_bust_time<<endl;
    for(int i=1;i<=total_bust_time;)
    {
        //cout<<"k="<<k<<endl;
        //cout<<"process_arivel "<<k-1<<" .bust_time="<<process_arivel[k-1].bust_time<<endl;

        if(process_arivel_bust[k-1].bust_time>=time_quantum&&process_arivel_bust[k-1].bust_time!=0)
        {
            //cout<<"process_arivel.process ="<<process_arivel[k-1].process<<endl;
            for(int j=i;j<i+time_quantum;j++)
            {

                grant_chart[j]=process_arivel_bust[k-1].process;
                //cout<<grant_chart[j]<<" ";
            }
            //cout<<endl;

            process_arivel_bust[k-1].bust_time-=time_quantum;
            //cout<<"process_arivel[k-1].bust_time="<<process_arivel[k-1].bust_time<<endl;
            //cout<<endl;
            i+=time_quantum;
           // k++;
        }
        else if(process_arivel_bust[k-1].bust_time!=0)
        {
            //cout<<"process_arivel.process ="<<process_arivel[k-1].process<<endl;

            for(int j=i;j<i+process_arivel_bust[k-1].bust_time;j++)
            {
                grant_chart[j]=process_arivel_bust[k-1].process;
                //cout<<grant_chart[j]<<" ";
            }
            //cout<<endl;
            i+=process_arivel_bust[k-1].bust_time;
            process_arivel_bust[k-1].bust_time=0;
            //cout<<"process_arivel[k-1].bust_time="<<process_arivel[k-1].bust_time<<endl;
            //k++;
        }
        k++;
        if(k==number_of_process+1)
        {
            k=1;
        }
        //k++;
        //cout<<"i="<<i<<endl;
    }
    int waiting_time[number_of_process];
    //memset(waiting_time,0,number_of_process);
    int turan_arount_time[number_of_process];
    int total_waiting_time=0;
    int total_turn_aroun_time=0;
    for(int i=0;i<number_of_process;i++)
    {
        waiting_time[i]=0;
    }
    for(int j=1;j<=number_of_process;j++)
    {
      for(int i=total_bust_time;i>=1;i--)
        {
          if(grant_chart[i]==j)
          {
              turan_arount_time[j]=i;
              //cout<<turan_arount_time[j]<<endl;
              total_turn_aroun_time+=turan_arount_time[j]-process_arivel_bust[j-1].arival_time;
              break;
          }
        }
    }
  for(int j=1;j<=number_of_process;j++)
    {
        //cout<<"waiting_time[j]="<<waiting_time[j]<<endl;
      for(int i=1;i<turan_arount_time[j];i++)
        {
          if(grant_chart[i]!=j)
          {
              waiting_time[j-1]++;
              //cout<<waiting_time[j-1]<<endl;

          }
        }
        waiting_time[j-1]-process_arivel_bust[j-1].arival_time;
        total_waiting_time+=waiting_time[j-1];
        //cout<<total_waiting_time<<endl;
    }
    cout<<total_waiting_time/number_of_process<<endl;
    cout<<total_turn_aroun_time/number_of_process<<endl;






    return 0;
}
/*


4
20
53 17 68 24


*/
