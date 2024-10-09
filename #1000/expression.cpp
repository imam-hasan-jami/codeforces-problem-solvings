//479A - Expression

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max[5] = {a*(b+c),a*b*c,(a+b)*c,a+(b*c),a+b+c};

    sort(max, max+5);

    cout << max[4];

    return 0;
}