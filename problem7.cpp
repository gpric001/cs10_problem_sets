#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    bool isPalindrome = true;
    getline(cin, s);
    
    for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
        while (!(isalpha(s.at(i)))) {
            ++i;
        }
        while (!(isalpha(s.at(j)))) {
            --j;
        }
        if (tolower(s.at(i)) != tolower(s.at(j))) {
            isPalindrome = false;
            i = s.size();
        }
    }
    
    if (isPalindrome) {
        cout << "It is a palindrome!";
    }
    else {
        cout << "It is not a palindrome."; 
    }
    cout << endl;

    return 0;
}