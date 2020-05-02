#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,m;
      cin>>n>>m;
      ll f[n],p[n];
      fill(f,f+n,0);
      fill(p,p+n,0);
      for(ll i=0;i<n;i++)
      cin>>f[i];
      for(ll i=0;i<n;i++)
      cin>>p[i];
      ll cost[m+1]={0};
      for(ll i=0;i<n;i++)
      {
        cost[f[i]]+=p[i];
      }
      sort(cost,cost+m+1);
      for(ll i=0;i<m+1;i++)
      {
        if(cost[i]!=0)
        {
        cout<<cost[i]<<endl;
        break;
         }
       }
    }
    return 0;
  }
