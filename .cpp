//maximum and minimum value in array
#include<iostream>
using namespace std;
class list {
private:
	int arr[5];
public:
	void fill();
	void display();
	void max();
	void min();
};
void list::fill() {
	cout << "enter 5 values";
	for (int i = 0; i < 5; i++)
		cin >> arr[i];
}
void list::display() {
	cout << "arrays value:" << endl;
	for (int i = 0; i < 5; i++)
		cout << arr[i]<<" ";
	cout<<endl;
}
void list:: max() {
	int maximum = arr[0];
	for(int i=0;i<5;i++)
		if (arr[i] > maximum) {
			maximum = arr[i];
		}
	cout << "maximum value:" << maximum << endl;
}
void list::min() {
	int minimum = arr[0];
	for (int i = 0; i < 5; i++)
		if (arr[i] < minimum) {
			minimum = arr[i];
		}
	cout << "minimum value:" << minimum << endl;
}
int main() {
	list obj;
	obj.fill();
	obj.display();
	obj.max();
	obj.min();
	return 0;
}
