#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#define ll long long
using namespace std;
void flip(vector<char> &v,int m)
{
  for(ll i=0;i<m;i++)
  {
    if(v[i]=='T')
    v[i]='H';
    else
    v[i]='T';
  }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin>>t;
      while(t--)
      {
        ll n,k;
        cin>>n>>k;
        vector<char> c;
        for(ll i=0;i<n;i++)
        {
          char a;
          cin>>a;
          c.push_back(a);
        }
        ll count=0;
       for(int i=1;i<=k;i++)
       {
         if(c[n-i]=='T')
         c.resize(c.size()-1);
         else
         {
           flip(c,n-i);
           c.resize(c.size()-1);
         }
       }
       for(ll i=0;i<c.size();i++)
       {
         if(c[i]=='H')
         count++;
       }
        cout<<count<<endl;
      }
    return 0;
  }
