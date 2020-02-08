#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#define ll unsigned long long int
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int  n,i;
    cin>>n;
    vector<unsigned long long int> a;
    for(i=0;i<n;i++)
    {
      unsigned long long int k;
      cin>>k;
      a.push_back(k);
    }
    cout<<a[0]<<endl;
    ll sum=0;
    for(i=n-1;i>=0;i--)
    {
      unsigned long long int  k;
      cin>>k;
      if(k<a[i])
      sum += k;
      else
      sum += a[i];
      }
    cout<<sum<<endl;
  }
  return 0;
}
