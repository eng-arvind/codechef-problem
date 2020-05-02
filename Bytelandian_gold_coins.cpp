#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#define ll long long int
using namespace std;
map<int, long long> dp;
ll b_g_c(ll n)
   {
    if(n==0)
    return 0;
    if(dp[n]!=0)
    return dp[n];
    ll x=b_g_c(n/2)+b_g_c(n/3)+b_g_c(n/4);
    if(x>n)
    dp[n]=x;
    else
    dp[n]=n;
    return dp[n];
}
int main()
{
    ll n;
    while(cin>>n) cout<<b_g_c(n)<<endl;
  return 0;
}
