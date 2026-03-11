//tv brand 
#include<iostream>
#include<string>
using namespace std;
class  tv {
private:
	string brand;
	string model;
	double price;
public:
	tv(string b, string m, double p) {
		brand = b;
		model = m;
		price = p;
		cout << "tv object created" << endl;
	}
	void display() {
		cout << "brand:" << brand << "| model:" << model << "| price:" << price << endl;
	}
	void cange(string b, string m, double p) {
		brand = b;
		model = m;
		price = p;
	}
	~tv() {
		cout << "tv object destroyed,memory released." << endl;
	}
};
int main() {
	tv t("sumsung", "neo", 120000);
	t.display();
	t.cange("soni", " bravio", 140000);
	cout<<"after update:" << endl;
	t.display();
	return 0;
}
