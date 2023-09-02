// 1-23

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
                count++;
            }
            else
            {
                cout << "this item is: " << books << endl;
                cout << "this item count: " << count << endl;
                books = book;
                count = 1;
            }
        }
        // 最后一条输出
        cout << "this item is: " << books << endl;
        cout << "this item count: " << count << endl;
    }
    else
    {
        cout << "no item" << endl;
    }

    return 0;
}
