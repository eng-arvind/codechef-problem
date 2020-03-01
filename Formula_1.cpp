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
      ll n;
      cin>>n;
      vector<pair<ll , string> > m;
      for(ll i=0;i<n;i++)
      {
        string s;
        cin>>s;
        ll a;
        cin>>a;
        m.push_back(make_pair(a,s));
      }
      sort(m.begin(),m.end());
      for(ll i=0;i<n;i++)
      cout<<m[i].second<<endl;
    }
    return 0;
  }
