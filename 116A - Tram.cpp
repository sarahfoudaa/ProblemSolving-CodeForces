#include <iostream>
 
using namespace std;
 
int main()
{
    int n,x,y,r=0,cap=0;
    cin>>n;
    cin>>x;
    cin>>y;
    r=r-x+y;
    if(r>cap){
            cap=r;
        }
    for(int i=2;i<=n;i++){
        cin>>x;
        cin>>y;
        r=r-x+y;
        if(r>cap){
            cap=r;
        }
    }
cout<<cap;
    return 0;
}