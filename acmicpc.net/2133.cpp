#include <iostream>

using namespace std;

int d[31];
int main() 
{
	int n;
	cin >> n;

	d[0] = 1;
	d[2] = 3;
	for (int i = 4; i <= n; i += 2)
	{
		d[i] = 3 * d[i - 2]; //2���� ����� �ִ� ����� 3�辿 ����
		for (int j = 4; j <= i; j += 2) //4��,6��...�� ����� �ִ� ����� 2���� �����Ƿ� ���� 2�辿�Ͽ� ���� 
		{
			d[i] += 2 * d[i - j];
		}
	}

	cout << d[n] << endl;
	return 0;
}