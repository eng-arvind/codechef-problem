#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int n,tax=0;
    cin>>n;
     if(n>250000)
    {
      if(n>=500000)
      tax=tax+12500;
      else
      tax=tax+(n-250000)*0.05;
    }
     if(n>500000)
    {
      if(n>=750000)
      tax=tax+10000;
      else
      tax=tax+(n-500000)*0.1;
    }
    if(n>750000)
    {
      if(n>=1000000)
      tax=tax+(1000000-750001)*0.15;
      else
      tax+=(n-750000)*0.15;
    }
   if(n>1000000)
    {
      if(n>=1250000)
      tax+= (1250000-1000000)*0.20;
      else
      tax+=(n-1000000)*0.20;
    }
   if(n>1250000)
    {
      if(n>=1500000)
      tax+= (1500000-1250000)*0.25;
      else
      tax+=(n-1250000)*0.25;
    }
     if(n>1500000)
    {
      tax=tax+(n-1500000)*0.30;
    }
    cout<<n-tax<<endl;
  }
  return 0;
}
