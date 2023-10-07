#include<bits/stdc++.h>
using namespace std;

void subSeq(int i, int arr[], vector<int> &ds, int n){
    if(i == n){
        for(auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[i]);
    subSeq(i + 1, arr, ds, n);
    ds.pop_back();
    subSeq(i + 1, arr, ds, n);

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[] = {3, 1, 2};
  int n = 3;
  vector<int> ds;
  subSeq(0, arr, ds, n);

  return 0;
}