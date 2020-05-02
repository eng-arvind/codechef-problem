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
      ll n,q;
      cin>>n>>q;
      string s;
      cin>>s;
      vector<int> v;
      set<char> st;
      ll i=0;
       for(ll i=0;i<s.length();i++)
      {
        if(st.find(s[i])!=st.end())
        {
          continue;
          }
        else
        {
          int cnt=count(s.begin(),s.end(),s[i]);
          v.pb(cnt);
          st.insert(s[i]);
        }
      }
      while(q--)
      {
        ll c;
        cin>>c;
        ll p_queue=0;
        for(ll i=0;i<v.size();i++)
        {
          if((v[i]-c)>0)
          p_queue+=(v[i]-c);
        }
        cout<<p_queue<<endl;
      }
    }
    return 0;
  }
