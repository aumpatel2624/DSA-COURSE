/* 
You are given3numbers .Each number represents the length of a line.You need to figure out whether these lines can form a valid triangle
If a valid triangle can be formed,print"Yes",otherwise print"No".
*/

#include <iostream>
using namespace std;

bool checkTriangle(int a,int b,int c){
    if ( (a+b) > c || (b+c) > a || (c+a) > b){
        return true;
    }
    else{
        return false;
    }
}

int main (){
    int a,b,c;
    cin >> a >> b >> c;
    if(checkTriangle(a,b,c)){
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}