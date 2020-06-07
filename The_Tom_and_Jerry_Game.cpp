#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include<cmath>
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
ll solve(ll a)
{
  if(a==1)
  return 0;
  else if( a%2!=0)
  return (a-1)/2;
  else
   {
     bool flag=false;
     while(a>1)
     {
       if(a%2==0)
       a=a/2;
       else
       {
         flag=true;
         break;
       }
     }
     if(flag)
     return a/2;
     else
     return 0;
   }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      w(t)
      {
        ll a;
        cin>>a;
        cout<<solve(a)<<endl;
      }
    return 0;
  }
