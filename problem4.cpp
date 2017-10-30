#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1;
    string s2;
    
    getline(cin, s1);
    getline(cin, s2);
    
    int i = s1.find(s2);
    if (i != string::npos){
        s1.replace(i, s2.size(), "");
    }
    cout << s1 << endl;
    return 0;
}