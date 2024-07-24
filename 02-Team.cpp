#include <iostream>

using namespace std;

// https://codeforces.com/contest/231/problem/A

int main() {

    int problems, a, b, c, count = 0;
    cin >> problems;
    for (int i = 0; i < problems; ++i) {
        cin >> a >> b >> c;
        count+=(a + b + c>=2);
    }
    cout << count << endl;

    return 0;
}