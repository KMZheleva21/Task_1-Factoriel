
#include <iostream>
using namespace std;
class Fact {
private:
	int num;
public:
	Fact(int number) {
		num = number;
	}
	int Factoriel(int num) {
		if (num == 1) {
			return 1;
		}
		else {
			return num * Factoriel(num - 1);
		}
	}
};
int main()
{
	
	int n;
	cin >> n;
	Fact a(n);
	cout << a.Factoriel(n);
}
