#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int exchange = 1000 - n;
	int count = 0;

	while (exchange > 0) 
	{
		if (exchange >= 500) //500��
		{
			exchange -= 500;
			count++;
		}
		else if (exchange >= 100) //100��
		{
			exchange -= 100;
			count++;
		}
		else if (exchange >= 50 && exchange<100) //50��
		{
			exchange -= 50;
			count++;
		}
		else if (exchange >= 10 && exchange<50) //10��
		{
			exchange -= 10;
			count++;
		}
		else if (exchange >= 5 && exchange<10) //5��
		{
			exchange -= 5;
			count++;
		}
		else if (exchange >= 1 && exchange<5) //1��
		{
			exchange -= 1;
			count++;
		}

	}
	cout << count << endl;
	return 0;

}
