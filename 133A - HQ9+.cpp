#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    string p;
    cin>>p;
    for(int i=0;i<p.length();i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9' ){cout<<"YES";return 0;}
    }
    cout<<"NO";
 
}