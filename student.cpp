#include<iostream>
#include<string>
using namespace std;
class student {
private:
	static int count;
	int rollNo;
	int marks;
	string name;
public:
	student() {
		count++;
		rollNo = count;
	}
	void input() {
		cout << "enter name for rollNo"<<rollNo<<":";
		getline(cin, name);
		cout << "enter marks";
		cin >> marks;
		cin.ignore();
	}
	void show() {
		cout << "rollNo<:" << rollNo << "| name:" << name << "| marks" << marks << endl;
	}

};
int student::count = 0;
int main() {
	student s1, s2, s3;
	cout << "enter student details:" << endl;
	s1.input();
	s2.input();
	s3.input();
	cout << "student record"<<endl;
	s1.show();
	s2.show();
	s3.show();
	return 0;

}
