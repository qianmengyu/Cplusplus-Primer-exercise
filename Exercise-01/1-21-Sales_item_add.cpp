// 1-21

#include<iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item book1, book2;
    cin >> book1 >> book2;
    if(compareIsbn(book1, book2)) 
    {
        // 判断是否同一本书
        cout << book1 + book2 << endl;
    }
    else
    {
        cout << "different ISBN" << endl;
    }

    return 0;
}
