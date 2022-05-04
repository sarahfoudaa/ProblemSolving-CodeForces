#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;
int main()
{
    int x=0,n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="++X"){
            ++x;
        }
        else if(s=="X++"){
            x++;
        }
        else if(s=="--X"){
            --x;
        }
        else if(s=="X--"){
            x--;
        }
    }
    cout<<x;
return 0;
}