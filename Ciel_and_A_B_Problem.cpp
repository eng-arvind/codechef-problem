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
   ll a,b;
   cin>>a>>b;
   ll ans=abs(a-b);
   string s1=to_string(ans);
   ll ans1=ans+1;
   string s2=to_string(ans1);
   if(ans1%10==0)
   cout<<ans-1;
   else
   cout<<ans+1;
    return 0;
  }
