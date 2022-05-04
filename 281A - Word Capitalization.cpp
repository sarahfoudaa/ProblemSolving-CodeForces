#include <iostream>
#include <string>
using namespace std;
 
int main()
{
   // char word[1000];
    string word;
    cin>>word;
    char z=toupper(word[0]);
   cout<<z;
   for(int i = 1 ; i <word.length() ; i++){
cout<<word[i];
 
   }
    return 0;
}
 