
#include <iostream>
#include<string>
using namespace std;
class book {
private:
	int pages;
	float price;
	string title;
public:
	void input(){
		cout << "enter title";
		getline(cin, title);
		cout << "enter pages";
		cin >> pages;
		cout << "enter price";
		cin >> price;
		cin.ignore();
	}
	void display() {
		cout << "title:" << title << endl;
		cout << "pages:" << pages << endl;
		cout << "price:" << price << endl;
	}
};
int main() {
	book b1, b2, b3;
	cout << "enter details of book 1" << endl;
	b1.input();
	b2 = b1;
	b3 = b1;
	cout << "displaying books" << endl;
	cout << "book 1:" << endl;
	b1.display();
	cout << "book 2:" << endl;
	b2.display();
	cout << "book 3:" << endl;
	b3.display();
	return 0;

}
