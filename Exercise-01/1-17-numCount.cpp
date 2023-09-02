// 1-17 & 1-18
/* 
  * 1-17 & 1-18
  * input some numbers
  * output times of number consecutive duplicates
  */

#include<iostream>

using namespace std;

int main() 
{
    int val = 0, nowval = 0;
    while(cin >> nowval) {
        int count = 1;
        // 继续读入并计算个数
        while(cin >> val) {
            if(nowval == val) {
                count++;
            }
            else {
                // 已经来了新值，输出旧值及其个数并更新
                cout << "number is: " << nowval << " and its times is: " << count << endl;
                nowval = val;
                count = 1;
            }
        }
        // 最后一个值
        cout << "number is: " << nowval << " and its times is: " << count << endl;
    }

    return 0;
}
