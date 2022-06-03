#include <bits/stdc++.h>
using namespace std;
//Max till i - Given an array of size n. For every i from i = 0 to n-1, output max[a[0],a[1],......,a[n-1]]


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mx = INT_MIN;
    for (int i=0; i<n; i++){
        mx = max( mx, arr[i]);
        cout << mx << endl;
    }
    return 0;
}