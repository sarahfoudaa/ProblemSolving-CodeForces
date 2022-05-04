#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,r=0;
    int x=0;
    cin>>n;
    for(int i=0;i<n;i++){
             x=0;
        for(int j=0;j<3;j++){
            int y;cin>>y;
            x=x+y;
        }
    if(x>1){
    r++;
    }
    }
    cout<<r;
return 0;
}