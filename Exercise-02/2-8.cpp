/*
 * 2-8
 * 
 * */

#include<iostream>

using namespace std;

int main() {
    cout << "cout 2M and Line feed" << endl;
    cout << "2M\012" << endl;

    cout << "cout 2 tab M and Line feed" << endl;
    cout << "2\t\x4d\n" << endl;

    return 0;
}
