#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(t) int t; cin>>t; while(t--)
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll n;
        cin>>n;
        vector<ll> v;
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
          ll a;
          cin>>a;
          v.pb(a);
        }
        for(ll i=1;i<n;i++)
        {
          if(abs(v[i]-v[i-1])>1)
          cnt+=(abs(v[i]-v[i-1])-1);
        }
        cout<<cnt<<endl;
      }
    return 0;
  }
