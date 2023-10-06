#include <bits/stdc++.h>
using namespace std;
long long  minn, hour;
double s, v;

int main() {
    cin >> s >> v;
    minn = ceil(s / v);
    if (minn > 470) {
        minn -= 470;
        hour = 24 - minn / 60;
        minn = 60 - minn % 60;
    } else {
        minn = 470 - minn;
        hour = minn / 60;
        minn = minn % 60;
    }
    if (hour < 10) {
        cout << "0";
    }
    cout << hour << ":";
    if (minn < 10) {
        cout << "0";
    }
    cout << minn;
    return 0;
}
