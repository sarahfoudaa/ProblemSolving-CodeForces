#include <iostream>
#include <string>
using namespace std;
 
int main()
{    int n;
    string word;
    cin>>n;
    cin>>word;
     int l=0 ,u=0;
   for(int i = 0 ; i < word.length() ; i++){
         if(word[i]==word[i+1]){
            l++;
        }
   }
   cout<<l;
    return 0;
}