/*Create a C++ program using Object-Oriented Programming concepts to manage and compare details of books.
Design a class named Book that contains the following:
Data Members,Book ID,Number of pages,Price of the book
Compare their prices and Display the details of the book with the higher price*/

#include <iostream>
using namespace std;

class book {
private:
    int id;
    int pages;
    int price;

public:
    void getfun() {
        cout << "enter id:";
        cin >> id;
        cout << " enter pages:";
        cin >> pages;
        cout << "enter price:";
        cin >> price;
    }
    void setfun(int a, int b, int c) {
        id = a;
        pages = b;
        price = c;
    }
    float getprice() {
        return price;
    }
    void display() {
        cout << "id: " << id << endl;
        cout << "pages: " << pages << endl;
        cout << "price: " << price << endl;
    }
};

int main() {
    book b1, b2;
    cout << "detail of book 1"<<endl;
    b1.getfun();
    cout << "detail of book 2"<<endl;
    b2.getfun();
    cout << "costliest book detail" << endl;
    if (b1.getprice() > b2.getprice())
        b1.display();
    else
        b2.display();
    return 0;
}
