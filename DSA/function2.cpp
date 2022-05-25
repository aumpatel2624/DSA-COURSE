#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int a){
    for ( int i = 2; i <= sqrt(a) ; i++){
        if ( a%i == 0){
            return false;
        }
    }        
    return true;
}

int main (){

    int a,b;
    cin >> a >> b;
    cout << endl;
    for (int i = a ; i <= b; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}

