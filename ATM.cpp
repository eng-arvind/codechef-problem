#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int x;
float y;
cin>>x>>y;
if ((x%5==0)&&(y>(x+0.50)))
{
cout<<(y-x-0.50);
}
else
{
cout<<y;
}
         return 0;
  }
