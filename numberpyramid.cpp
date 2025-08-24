#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {

        for (int s = 1; s <= rows - i; s++) {
            cout << " ";
        }
 for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }
    return 0;
  }

