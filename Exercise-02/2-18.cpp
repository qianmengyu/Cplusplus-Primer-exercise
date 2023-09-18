/*
 * 2-18
 * 更改指针值和指针所指对象的值
 * */

#include<iostream>

using namespace std;

int main() {
    double pi = 3.1415, w = 13.14;
    double *p1 = &pi;        // 初始化
    double *p2 = 0;          // 空指针
    double *p3 = nullptr;    // 空指针
    double *p4 = NULL;       // 空指针
    double *p5;              // 不初始化

    cout << p1 << "  " << p2 << "  " << p3 << "  " << p4 << "  " << p5 << endl;
    p5 = &w;
    cout << *p1 << "  " << p2 << "  " << p3 << "  " << p4 << "  " << *p5 << endl;
    p1 = p5;
    cout << *p1 << "  " << p2 << "  " << p3 << "  " << p4 << "  " << *p5 << endl;
    *p1 = 2.5;
    cout << *p1 << "  " << p2 << "  " << p3 << "  " << p4 << "  " << *p5 << endl;
    
    return 0;
}
