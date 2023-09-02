// 

#include<iostream>

using namespace std;

int main() {
    int sum = 0, val = 0;
    cout << "input numbers: " << endl;
    while(cin >> val) {
        sum += val;
    }
    cout << "sum of input is: " << sum << endl;
    return 0;
}
