#include <iostream>
#include <string>
using namespace std;

bool isPalindromeHelper(const string& str, int start, int end) {
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return isPalindromeHelper(str, start + 1, end - 1);
}

bool isPalindrome(int n) {
    string str = to_string(n);
    return isPalindromeHelper(str, 0, str.length() - 1);
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;

    return 0;
}
