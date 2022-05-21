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
    return 0;
}