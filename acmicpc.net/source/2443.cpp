// 2443. 별 찍기 - 6
// 2019.05.20
// 별 찍기
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= n * 2 + 1 - 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
