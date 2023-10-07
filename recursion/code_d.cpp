#include<bits/stdc++.h>
using namespace std;

int findSum(int idx, int sum, int arr[]){
    if(sum > 2) return 0;
    if(idx == 3){
        // condition satisfied
        if(sum == 2) return 1;
        // condition not satisfied
        else return 0;
    }

    sum += arr[idx];
    int l = findSum(idx + 1, sum, arr);

    sum -= arr[idx];
    int r = findSum(idx + 1, sum, arr);

    return l + r;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[] = {1, 2, 1};
  cout << findSum(0, 0, arr) << endl;

  return 0;
}


