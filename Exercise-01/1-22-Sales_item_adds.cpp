// 1-22

#include<iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    Sales_item books, book;
    cout << "input books' item: " << endl;
    if(cin >> books) 
    {
        int count = 0;
        while(cin >> book)
        {
            if(compareIsbn(books, book)) 
            {
                books += book;
            }
            else
            {
                cout << "different ISBN" << endl;
                return -1;
            }
        }
        // 最后一条输出
        cout << "this total is: " << books << endl;
    }
    else
    {
        cout << "no item" << endl;
    }

    return 0;
}
