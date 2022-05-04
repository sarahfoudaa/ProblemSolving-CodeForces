#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
using namespace std;
 
int main()
{
  int n,k,l,c,d,p,nl,np,mm,mmm;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int f,s,t;
  f=k*l;
  f=f/nl;
  s=c*d;
  t=p/np;
  mm=min(f,s);
  mmm=min(mm,t);
  cout<<mmm/n;
 
}