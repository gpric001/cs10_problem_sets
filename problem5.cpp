#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c;
    int count = 0;
    int i = 0;
    int result = 0;
    bool running = true;
    
    getline(cin, s);
    cin >> c;
    
    do {
        int i = s.find(c, i);
        if (i != string::npos) {
            ++count;
            ++i;
        }
        else {
            running = false;
        }
        if (count == 3) {
            running = false;
            result = i - 1;
        }
    } while (running);
    
    if (count == 3) {
        cout << result;
    }
    else {
        cout << -1;
    }
    cout << endl;
    return 0;
}