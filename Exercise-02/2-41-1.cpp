/*
 * 2-41
 * 重写1.20 - 1.25
 * */

#include<iostream>
#include"Sales_data.h"

using namespace std;

int main() {
    Sales_data data1, data2;

    // 读入数据
    double price = 0.0;
    cout << "input data' information: ISBN Units-sold Price" << endl;
    cin >> data1.isbn >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cout << "input data' information: ISBN Units-sold Price" << endl;
    cin >> data2.isbn >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    // 读取两个具有相同ISBN的对象，输出记录和
    if(data1.isbn == data2.isbn) {
        unsigned units_sum = data1.units_sold + data2.units_sold;
        double revenue_sum = data1.revenue + data2.revenue;
        cout << "Book ISBN: " << data1.isbn << "  Units sold: " << units_sum << "  Revenue: " << revenue_sum << endl;
        return 0;
    }
    else {
        cout << "Not same book!" << endl;
        return -1;
    }

    return 0;
}
