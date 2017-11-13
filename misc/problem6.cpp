#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (int i = s.size() - 1; i >= 0; --i) {
        if (isalpha(s.at(i))) {
            cout << static_cast<char>(toupper(s.at(i)));
        }
    }
    cout << endl;
    return 0;
}