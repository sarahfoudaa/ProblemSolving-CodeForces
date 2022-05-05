#include <iostream>
#include <cmath>
using namespace std;
int main (){
    long double x ;long long o;
    cin>>x;
    cin>>o;
    if(((x/2)+1)>o){//odd    
        cout<<o*2-1;
        return 0;
    }
    else if((x/2)<=o){//even
    if(int(x)%2==1){o=o-ceil(x/2);}
        else{o=o-(x/2);}
        cout<<abs(2*o);
        return 0;
    }
}