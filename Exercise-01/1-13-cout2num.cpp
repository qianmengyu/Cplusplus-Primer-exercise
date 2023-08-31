// 1-13 rewrite 1-11
// cout numbers between two numbers cin

#include<iostream>

using namespace std;

int main() {
    cout << "input two numbers and cout numbers between them: " << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    if(v1 > v2) {
        for(; v1 >= v2; v1--) {
            cout << v1 << "  ";
        }
    }
    else {
        for(; v1 <= v2; v1++) {
            cout << v1 << "  ";
        }
    }
    
    return 0;
}
