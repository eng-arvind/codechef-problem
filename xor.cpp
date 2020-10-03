#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int l)
{
  for(int a=1;a<l;a++)
  {
    for(int b=a+1;b<=l;b++)
    {
      if(a^b==l)
      return b;
    }
  }
  return -1;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int l,r;
    cin>>l>>r;
    int s=0;
    for(int i=l;i<r+1;i++)
    {
      s += fun(i);
    }
    cout<<s<<endl;
  }
}
