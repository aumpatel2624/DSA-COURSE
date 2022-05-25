#include <iostream>
using namespace std;
//Function is a piece of code that performs a specific task
int add(int a, int b){
    int sum = a+b;
    return(sum);
}
int main(){
    int a = add(5,6);
    cout << a;
    return 0;

}