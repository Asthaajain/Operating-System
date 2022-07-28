#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the no of Process: ";
    int n,sum=0;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the burst time:";
        cin>>a[i];
    }
    
    for(int i=1;i<n;i++)
        sum+=a[i];
    
    cout<<"Average Wating time ="<<(sum/n);


    return 0;
}

/*    for(int i=0;i<n;i++)
    {
        if(i==0){
            cout<<"Wating time for Process1 = 0"<<endl;
            sum+=a[i];
        }
        else{
            cout<<"Wating time for Process"<<i+1<<" = "<<sum<<endl;
            sum+=a[i];
        }
    }*/

