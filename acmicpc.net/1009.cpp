#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> a >> b;
		int num = 1;
		for (int i = 0; i < b; i++)
		{
			num *= a;
			num %= 10;
		}
		if (num == 0) cout << "10" << endl;
		else cout << num << endl;
	}
}