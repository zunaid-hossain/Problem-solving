#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a == 6 && ((b == 1 && c == 1) || (b == 0 && c == 3) || (b == 3 && c == 0))) ||
            (b == 6 && ((a == 1 && c == 1) || (a == 0 && c == 3) || (a == 3 && c == 0))) ||
            (c == 6 && ((a == 1 && b == 1) || (a == 0 && b == 3) || (a == 3 && b == 0)))) {
                cout << "Case " << i << ": perfectus" << endl;
        }
        else if ((a == 3 && b == 3 && c == 3) || (a == 2 && b == 2 && c == 2)) {
            cout << "Case " << i << ": perfectus" << endl;
        }
        else if ((a == 4 && ((b == 1 && c == 2) || (b == 2 && c == 1))) ||
                 (b == 4 && ((a == 1 && c == 2) || (a == 2 && c == 1))) ||
                 (c == 4 && ((a == 1 && b == 2) || (a == 2 && b == 1)))) {
                cout << "Case " << i << ": perfectus" << endl;
        }
        else {
            cout << "Case " << i << ": invalidum" << endl;
        }
    }
    return 0;
}
