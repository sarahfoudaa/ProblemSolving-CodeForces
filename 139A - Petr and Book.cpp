#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main (){
    int n=0,pages=0,finish=0;
    int days[7];
    cin>>n;
    for(int i = 0 ; i < 7 ; i ++){
        cin>>days[i];
    }
    while(pages<n){
        for(int i = 0 ; i < 7 ; i ++){
            pages=pages+days[i];
            if(pages>=n){
                cout<<i+1;return 0;
            }
        }
    }
    cout<<finish;
}