#include <bits/stdc++.h>
using namespace std;

int binarytoDecimal(int a){
    int ans = 0;
    int x = 1;
    while(a > 0){
        int y = a%10;
        ans += x*y;
        x *= 2;
        a /= 10;
    }
    return ans;
}

int OctaltoDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexadecimaltoDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i = s-1; i >= 0; i --){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x*(n[i] - '0');
        }
        else if( n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i]- 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}
int main (){
    int a,n;
    string x;
    cin >> a >> n;
    cin >> x;
    cout << binarytoDecimal(a) << endl;
    cout << OctaltoDecimal(n) << endl;
    cout << hexadecimaltoDecimal(x) << endl;

    return 0; 
}

