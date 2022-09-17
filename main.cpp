#include "Lib.h"


int main() {
    SoPhuc a, b;
    cin >> a >> b;
    cout << "a = " << a << "b = " << b;
    SoPhuc h = a - b;
    cout << "Hieu = " << h;
    SoPhuc t = a + b;
    cout << "Tong = " << t;
    cout << "Tich = " << a * b;
    if (a > b) cout << "a > b";
    else cout << "a =< b";
    return 0;
}