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
        string s,p;
        cin>>s>>p;
        sort(s.begin(),s.end());
        for(ll i=0;i<p.length();i++)
        {
          for(ll j=0;j<s.length();j++)
          {
          if(s[j]==p[i])
          {
            s.erase(j,1);
            break;
          }
        }
        }
        bool flag=true;
        for(ll i=0;i<s.length();i++)
        {
        if(s[i]<=p[0])
        continue;
        else
        {
          s.insert(i,p);
          flag=false;
          break;
        }
        }
        if(flag)
        cout<<s+p<<endl;
        else
        cout<<s<<endl;
      }
    return 0;
  }
