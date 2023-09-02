/*
 * 2-4
 * 程序检查
 * */

#include<iostream>

using namespace std;

int main() {
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl;
    cout << u - u2 << endl;           // 程序不报错，但实际值错误=unsigned模值-（u2-u）

    int i = 10, i2 = 42;
    cout << i - i2 << endl;
    cout << i2 - i << endl;
    cout << i - u << endl;           // 程序不报错，实际值正确，实际按照unsigend计算
    cout << u - i << endl;           // 程序不报错，实际值正确，实际按照unsigned计算
    
    return 0;
}
