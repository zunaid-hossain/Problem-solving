#include<bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));  // Seed for randomness

    double a = -90 + (rand() / (double)RAND_MAX) * 180;
    double b = -180 + (rand() / (double)RAND_MAX) * 360;

    cout << fixed << setprecision(6) << a << " " << b << endl;

    return 0;
}
