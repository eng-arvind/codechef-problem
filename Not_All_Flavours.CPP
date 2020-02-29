#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin>>t;
      while(t--)
      {
      ll n,k;
      cin>>n>>k;
      vector<ll> v;
      for(ll i=0;i<n;i++)
       {
         ll a;
         cin>>a;
         v.push_back(a);
       }
       ll mx=0,count=0;
       for(ll i=0;i<n;i++)
       {
         if(v[i]!=k && v[i]>0)
         count++;
         else
         {
           mx = max(count,mx);
           count=0;
         }
         mx = max(mx,count);
       }
       cout<<mx<<endl;
      }
    return 0;
  }
