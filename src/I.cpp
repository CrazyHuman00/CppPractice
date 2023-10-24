#include <iostream>
using namespace std;

int main() {
    int p;
    int price;
    cin >> p;

    // パターン2
    if (p == 2) {
        string text;
        cin >> text;
        cout << text << "!" << endl;
    }

    int N;
    cin >> price >> N;
    cout << price * N << endl;

    return 0;
}
