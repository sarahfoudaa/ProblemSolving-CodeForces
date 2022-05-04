#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;
 
int main()
{
    string x,y,z,c;
    cin>>x>>y>>z;
    c=x+y;
    sort(c.begin(), c.end());
    sort(z.begin(), z.end());
    if(c==z){
        cout<<"YES";
    }
    else{cout<<"NO"; }
 
    return 0;
}
 