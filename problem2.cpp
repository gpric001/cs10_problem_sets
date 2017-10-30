#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2;
    int i = 0;
    int count = 0;
    getline(cin, s1);
    getline(cin, s2);
    
    do {
        i = s1.find(s2, i);
        if (i != string::npos) {
            ++count;
            i += s2.size();
        }
    } while (i != string::npos);
    
    cout << count << endl;
    return 0;
}