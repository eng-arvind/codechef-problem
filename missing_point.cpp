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
        set<ll> x;
        set<ll> y;
        for(ll i=0;i<4*n-1;i++)
        {
          ll a,b;
          cin>>a>>b;
          if(x.count(a))
          x.erase(a);
          else
          x.insert(a);
          if(y.count(b))
          y.erase(b);
          else
          y.insert(b);
        }
        set<ll> ::iterator it;
        for(it=x.begin();it!=x.end();it++)
        cout<<*it<<" ";
        for(it=y.begin();it!=y.end();it++)
        cout<<*it<<endl;
      }
    return 0;
  }
