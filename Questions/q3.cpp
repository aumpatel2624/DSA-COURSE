//check if 3 given numbers are pythagoream triplet or not

#include <bits/stdc++.h>
using namespace std;


bool checkPyth(int x,int y,int z){
    int p = max(x, max(y,z));
    int q,r;
    if( p == x){
        q = y;
        r = z;
    }
    else if (p == y){
        q = x;
        r = z;
    }
    else {
        q = x;
        r = y;
    }

    if (p*p == q*q + r*r){
        return true;
    }
    else {
        return false;
    }
}


int main (){
    
    int a,b,c;
    cin >> a >> b >> c;

    if(checkPyth(a,b,c)){
        cout << "They are pythagorean triplet";
    }
    else {
        cout << "They are not pythagorean triplet";
    }

    return 0;
}