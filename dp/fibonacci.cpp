#include<bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int> &dp){
    if(n == 0 or n == 1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cout << "Enter your n :";
  int n;
  cin >> n;

  vector<int> dp(n+1, -1);  
  cout << fibo(n, dp) << endl;

  return 0;
}