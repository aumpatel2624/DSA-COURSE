
#include <bits/stdc++.h>
using namespace std;
//Max till i - Given an array of size n. For every i from i = 0 to n-1, output max[a[0],a[1],......,a[n-1]]


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    int j=2;
    
    while(j<n){
        
        if(pd == (a[j]-a[j-1])){
            curr++;
        }
        else {
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout << ans << endl;
    return 0;
}