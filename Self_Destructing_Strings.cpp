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
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      ll zero=0,one=0;
      if(s.length()%2!=0)
      {
        cout<<-1<<endl;

      }
      else
      {
        for(ll i=0;i<s.length();i++)
        {
          if(s[i]=='0')
          zero++;
          else
          one++;
        }
        if(zero==one)
        cout<<0<<endl;
        else
        {
          ll diff=abs(zero-one);
          if(diff==s.length())
          {
            cout<<-1<<endl;
            continue;
          }
        else if(diff%2==0)
          cout<<diff/2<<endl;
          else
          cout<<-1<<endl;
        }
      }

    }
    return 0;
  }
