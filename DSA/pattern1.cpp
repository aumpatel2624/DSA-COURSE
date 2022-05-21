#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    cin >> rows >> cols;

    //RECTANGLE
    for (int i = 1; i <= rows; i++ ){
        for (int j = 1; j <= cols; j++ ){
            cout << "*";

        }
        cout << endl;
    }

    //HOLLOW RECTANGLE
    cin >> rows >> cols;
    for(int i = 1; i <= rows; i++){
        for (int j = 1; j <=cols; j++){
            if(i == 1 || i == rows){
                cout << "*";
            }
            else if(j == 1 || j == cols ){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
    cout << endl;
    }
    //INVERTED HALF PYRAMID
    cin >> rows;
    for (int i = rows; i >= 1; i--){
        for (int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    //HALF PYRAMID AFTER 180 ROTATION
    int n;
    cin >>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j<=n-i){
                cout << " ";
            }
            else{
                cout <<"*";
            }
        }
        cout << endl;
    }
    
    //HALF PYRAMID USING NUMBERS
    cin >> n;
    for ( int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    
    //FLOYD's TRIANGLE
    int count = 1;
    cin >> n;
    for ( int i = 1; i < n; i++){
        for (int j = 1; j <= i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    //BUTTERFLY PATTERN
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
        cout <<"*";
        }
        
        int space = 2*n-2*i;
        for(int j = 1; j <= space; j++){
        cout << " ";
        }
        
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        
        int space=2*n-2*i;
        for(int j = 1; j<= space; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
    cout << endl;
    }

    return 0;
}