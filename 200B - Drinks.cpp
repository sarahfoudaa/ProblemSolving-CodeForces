#include <iostream>
 
using namespace std;
 
int main()
{
    double n,sum=0,x;
    cin>>n;
    for(int i =0 ;i<n;i++){
        cin>>x;
        sum=sum+x;
    }
    cout<<sum/n;
 
    return 0;
}