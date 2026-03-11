//find average
#include<iostream>
using namespace std;
class averagecal {
private:
	int num1, num2;
public:
	averagecal() {
		num1 = 100;
		num2 = 100;
	}
	void avg() {
		double result = (num1 + num2) / 2;
		cout << "averege of " << num1 << " or " <<num2 << " are: "  << result;
	}
};
int main() {
	averagecal obj;
	obj.avg();
	return 0;
}

