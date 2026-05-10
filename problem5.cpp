#include <iostream>
#include <numeric>   // std::gcd (C++17)
using namespace std;

int main() {
    long long result = 1;

    for (int i = 2; i <= 20; i++) {
        result = result / std::gcd(result, (long long)i) * i;  // LCM formula
    }

    cout << "Smallest evenly divisible number: " << result << endl;
    return 0;
}