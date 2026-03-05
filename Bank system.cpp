//A simple C++ Bank Management System using OOP to perform deposit, withdrawal, and display account information.

#include<iostream>
#include<string>
using namespace std;
class bank {
private:
	int accountnumber;
	string  accountname;
	int balance;
public:
	bank(int a, string b, int c) {
		accountnumber = a;
	    accountname = b;
	    balance = c;
	}

	void deposit() {
		int amount;
		cout << "Enter deposit amount: ";
		cin >> amount;
		balance = balance + amount;
		cout << "Deposit successful" << endl;
	}
	void withdraw() {
		int amount;
		cout << "Enter withdraw amount: ";
		cin >> amount;
		if (amount > balance)
			cout << "Insufficient balance" << endl;
		else {
			balance = balance - amount;
			cout << "Withdraw successful" << endl;
		}
	}
	void display() {
		cout << "Account number:" <<accountnumber << endl;
		cout << "Account name:" << accountname << endl;
		cout << "Balance:" << balance << endl;
	}
};
int main() {
	int accountnum;
	string name;
	int balance;
		cout << "enter account number" << endl;
	  cin >> accountnum;
  
    cin.ignore();
	  cout << " enter account name" << endl;
		getline(cin, name);
  
		cout << "balance" << endl;
		cin >> balance;
  
		bank b(accountnum, name, balance);
		b.deposit();
		b.withdraw();
	  b.display();
		return 0;
}
