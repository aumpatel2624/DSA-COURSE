#include <iostream>
using namespace std;

int main(){
    //Arithmatic operators
    int i = 1;
    i = i++ + ++i;
    cout << i << endl;
    
    i = 1;

    int j = 2;
    int k;
    k = i + j + i++ + j++ + ++i + ++j;
    cout << k << endl;

    i = 0;
    i = i++ - --i + ++i - i--;
    cout << i << endl;

    //Relational Operators
    //returs boolean value
    int a;
    cin >> a;
    if (a < 10 ){
        cout << "a less than 10" << endl;
    }
    else if(a == 10){
        cout << "a is equal to 10" << endl;

    }
    else {
        cout << "a is greater than 10" << endl;
    }

    //Logical Operators
    //&& - True when both true
    // || - True when one true
    // ! - Gives opp logical value
    //Ture = 1 False = 0
    int c;
    cin >> c;
    if ( c%2 == 0 && c%3 == 0){
        cout << "It is divisible by 2 and 3" << endl;
    }
    else if (c%2 == 0 || c%3 == 0){
        cout << "It is divisible by only one of 2 and 3" << endl;
    }
    else {
        cout << "It is not divisible by 2 and 3" << endl;
    }

    //Bitwise Operator 
    //& AND Operator - gives 1 when 1+1 or else 0
    //| OR Operator - gives 0 when 0+0 or else 1
    //^ XOR Operator - gives 0 when 1^1 and 0^0 else 1
    //~ ONE Complement Operator - gives 1 for ~0 
    //<< LEFT SHIFT Operator - shifts  bit on left
    //>> RIGHT SHIFT Operator - shifts bit on right

    // a << n -> a * 2^n
    // a >> n -> a / 2^n


    //Assignment Operators
    // =
    // += sum of two operand assigned to left operand -> a += b -> a = a+b
    // -= -> a -= b -> a = a-b
    //*= -> a *= b -> a = a * b
    // /= -> a /= b -> a = a/b

    //Miscellaneous Operators
    //sizeof() - Returns size of variable;
    //Turnery or Conditional Operator - Condition ?X:Y - Returns value of X if condition is true or else value of Y
    int x,y,z;
    x = 10;
    y = 5;
    z = x > y ? x-y : x+y;
    cout << z ;
    //Cast - Convert one data type to another
    //Comma(,) - 
}