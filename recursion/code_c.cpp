#include<bits/stdc++.h>
using namespace std;

bool findSum(int idx, vector<int> &ds, int sum, int arr[]){
    if(idx == 3){
        // condition satisfied
        if(sum == 2){
            for(int i = 0; i < ds.size(); i++){
                cout << ds[i] << " ";
            }
            cout << endl;
            return true;
        }
        // condition not satisfied
        else return false;
    }

    ds.push_back(arr[idx]);
    sum += arr[idx];
    if(findSum(idx + 1, ds, sum, arr)) return true;

    ds.pop_back();
    sum -= arr[idx];
    if(findSum(idx + 1, ds, sum, arr)) return true ;

    return false;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int arr[] = {1, 2, 1};
  vector<int> ds;
  findSum(0, ds, 0, arr);

  return 0;
}


