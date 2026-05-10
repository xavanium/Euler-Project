#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int n) {
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
    int largest = 0;

    for (int i = 999; i >= 100; i--) {
        if (i * i < largest) break;

        for (int j = i; j >= 100; j--) {  // j starts at i to avoid duplicates
            int product = i * j;

            if (product <= largest) break;  // Products only get smaller from here

            if (isPalindrome(product)) {
                largest = product;
            }
        }
    }

    cout << "Largest palindrome: " << largest << endl;
    return 0;
}