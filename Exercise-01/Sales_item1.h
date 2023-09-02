/* unfinished
 * Sales_item类文件
 * 运算符重载这块没写好，报错
 * 
 *
 * */

#include<iostream>
#include<string>

using namespace std;

class Sales_item
{
    friend std::istream& operator>>(std::istream&, Sales_item&);
    friend std::ostream& operator<<(std::ostream&, const Sales_item&);
public:
    // 构造函数
    Sales_item() {
        ISBN = "";
        saled = 0;
        price = 0;
    }
    Sales_item(string s, int saled, double price) {
        ISBN = s;
        saled = saled;
        price = price;
    }
    // 调用函数
    string isbn() {
        return ISBN;
    }
    double avg_price() {
        return price / saled;
    }
    // 运算符重载函数
    Sales_item& operator=(Sales_item& item) {
        return Sales_item(item.ISBN, item.saled, item.price);
    }
    friend Sales_item& operator+(const Sales_item& item1, const Sales_item& item2) {
        if(item1.ISBN == item2.ISBN) {
            return Sales_item(item1.ISBN, item1.saled + item2.saled, item1.price + item2.price);
        }
        else {
            cout << "error: not same book add" << endl;
            return Sales_item();
        }
        return Sales_item();
    }
    Sales_item& operator+=(Sales_item& s) {
        saled += s.saled; 
        price += s.price; 
        return *this;
    }


    // std::istream& operator>>(std::istream& in, Sales_item& s)
    friend std::istream& operator >>(std::istream& in, Sales_item& s)
    {
        double price;
        in >> s.ISBN >> s.saled >> price;
        // check that the inputs succeeded
        if (in)
            s.price = s.saled * price;
        else 
            s = Sales_item();  // input failed: reset object to default state
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Sales_item& s)
    {
        out << s.isbn() << " " << s.saled << " "
            << s.price << " " << s.avg_price();
        return out;
    }



private:
    string ISBN;     // 编号
    int saled;       // 卖出册数
    double price;    // 总价
};

