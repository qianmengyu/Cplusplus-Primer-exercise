/*
 * 2-42
 * 
 * */

#include<iostream>
#include"Sales_data1.h"

using namespace std;

int main() {
    cout << "1. 输出一系列销售记录" << endl;
    Sales_data1 book1;
    cout << "输入销售记录：" << endl;
    while(cin >> book1) {
        cout << "ISBN, Units-sold, Revenue, Price: " << book1 << endl;
    }

    cout << "2. 读取两个相同对象求和" << endl;
    Sales_data1 book2;
    cin >> book1 >> book2;
    if(compareIsbn(book1, book2)) {
        book1 += book2;
        std::cout << "ISBN, Units-sold, Revenue, Price: " << book1 << std::endl;
    }
    else {
        cout << "Not Same Book!" << endl;
    }

    cout << "3. 读取多条相同对象求和" << endl;
    if(cin >> book1) {
        while(cin >> book2) {
            if(compareIsbn(book1, book2)) {
                book1 += book2;
            }
            else {
                cout << "Not Same Book!" << endl;
                break;
            }
        }
        cout << book1;
    }
    else {
        cout << "No Data!" << endl;
    }

    cout << "4. 读取多条记录，输出每本几条记录及其汇总信息" << endl;
    int flag = 0;
    Sales_data1 total, cur;
    if(cin >> total) {
        while(cin >> cur) {
            flag++;
            if(compareIsbn(total, cur)) {
                // 相同ISBN，相加
                total += cur;
            }
            else {
                // 不同ISBN，输出上一本信息，更新到下一本
                cout << "条数: " << flag << endl;
                cout << total << endl;
                flag = 0;
                total = cur;
            }
        }
        // 最后一条输出
        cout << "条数: " << flag << endl;
        cout << total << endl;
    }
    else {
        cout << "No Data!" << endl;
    }

    return 0;
}
