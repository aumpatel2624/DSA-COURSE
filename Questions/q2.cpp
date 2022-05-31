//Sum of n natrual numbers using function

#include <iostream>
using namespace std;

int sum (int a){
    int sum1 = 0;
    for(int i = 1 ; i <= a ; i++){
        sum1 += i;
    }
    return sum1;
}

int main(){

    int n;
    cin >> n;
    cout << sum(n);
}