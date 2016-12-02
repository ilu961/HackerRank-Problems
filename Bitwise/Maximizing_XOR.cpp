One way to do it is simply by brute force.
One more way is there which is quite efficient

................!!!!!!!!!!!!.......................

#include<bits/stdc++.h>
using namespace std;

int maximize(int m,int n)
{
  int p=m^n;
  int leadingZeroes=__builtin_clz(p);
  int Index=32-leadingZeroes;
  return pow(2,Index)-1;
}

int main()
{
  int m,n,get;
  cin>>m>>n;
  get=maximize(m,n);
  cout<<get;
  return 0;
 }
