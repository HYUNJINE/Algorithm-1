#include <iostream>

using namespace std;

int main()
{
//자료형 주의
	long long n;
	cin >> n;
	long long count = 1;
	while (1)
	{

		if (n - count >= 0)
			n -= count;
		count++;
		if (n - count < 0) break;
	}
	cout << count-1 << endl;
	
	return 0;
}