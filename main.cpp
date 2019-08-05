#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
constexpr double pi = M_PI;
using namespace std;

#define int long long

signed main()
{
    double x = pi / 2;
    int A, B;
    cerr << "n=Aからn=Bまでを調べます。A Bを入力してください。" << endl;
    for (int i = 0; i <= B; i++) {
        if (i >= A) {
            cout << i << " " << x << endl;
        }
        x = sin(x);
    }
    cerr << "終了" << endl;
}
