#include<bits/stdc++.h>
using namespace std;


int subSeq(int i, int a[], int n, int sum, int target){
	if(i == n){
		if(sum == target){
            return 1;
        }
        return 0;
	}
	
    sum += a[i];
	int l = subSeq(i + 1, a, n, sum, target);

    sum -= a[i];
	int r = subSeq(i + 1, a, n, sum, target);

    return l + r;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cout << "Enter your n :";
  int n;
  cin >> n;
  
  int a[n];
  cout << "Enter your elements :";
  for(int i = 0; i < n; i++){
	cin >> a[i];
  }

  int target;
  cout << "Enter your sum you wanna find :";
  cin >> target;

  cout << subSeq(0, a, n, 0, target) << endl;

  return 0;
}