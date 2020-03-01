#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<ll> v;
      for(ll i=0;i<n;i++)
      {
        ll a;
        cin>>a;
        v.pb(a);
      }
     sort(v.begin(),v.end());
      cout<<abs(v[0])<<endl;
    }
    return 0;
  }
