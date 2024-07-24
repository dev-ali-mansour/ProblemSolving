#include <iostream>

using namespace std;

//http://codeforces.com/contest/791/problem/A

int main() {

    long long a, b;
    cin >> a >> b;
    int res = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        res++;
    }
    cout << res << endl;
    return 0;
}