#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {9,8,7,6,5,4};

    // Checking if vector v is sorted or not
    if (is_sorted(v.begin(), v.end(), greater<>()))
        cout << "Sorted";
    else
        cout << "Not Sorted";
    return 0;
}