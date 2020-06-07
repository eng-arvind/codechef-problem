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
      string s;
      cin>>s;
      ll count=0;
      for(ll i=0;i<s.length()-1;i++)
      {
        if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x') )
        {
        count++;
        i++;
         }
      }
      cout<<count<<endl;
    }
    return 0;
  }
