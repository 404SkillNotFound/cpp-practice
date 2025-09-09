//Problem Link: https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true
//Create Array of Arrays - use 2d vectors

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n; int q; cin >> n >> q;
  vector<vector<int>> a(n);
  for(int i = 0; i < n; i++) {
    int k; cin >> k;
    a[i].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> a[i][j];
    }



  }

    return 0;
}