#include<bits/stdc++.h>
using namespace std;

void findSum(int idx, vector<int> &ds, int sum, int arr[]){
    if(idx == 3){
        if(sum == 2){
            for(int i = 0; i < ds.size(); i++){
                cout << ds[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[idx]);
    sum += arr[idx];
    findSum(idx + 1, ds, sum, arr);

    ds.pop_back();
    sum -= arr[idx];
    findSum(idx + 1, ds, sum, arr);

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[] = {1, 2, 1};
  vector<int> ds;
  findSum(0, ds, 0, arr);

  return 0;
}


