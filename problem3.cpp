#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i == 0) {
                if (j != 0) {
                    cout << j << ' ';
                }
            }
            
            else if (!(i == 3 && j > 5)) {
                cout << i << j << ' ';
            }
        }
    }
    cout << endl;
    return 0;
}