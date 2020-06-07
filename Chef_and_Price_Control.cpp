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
           ll n,k;
           cin>>n>>k;
           ll t_sum=0,c_price=0;
           for(ll i=0;i<n;i++)
           {
             ll a;
             cin>>a;
             if(a<=k)
             c_price+=a;
             else
             c_price+=k;
             t_sum+=a;
           }
           cout<<t_sum-c_price<<endl;
         }
    return 0;
  }
