#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int d[10001]; //d[n] : n��° ���� �����ָ� �Ծ����� �ִ�
int a[10001];
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	d[1] = a[1];
	d[2] = max(a[2], a[1] + a[2]);
	d[3] = max(a[1] + a[2], max(a[2] + a[3], a[1] + a[3]));
	for (int i = 4; i <= n; i++)
	{
		// 1. a[i]�� �����ϴ� ��� 
		// d[i-2] + a[i] , d[i-3] + a[i-1] + a[i]�� �ִ�
		// 2. a[i]�� �������� �ʴ� ���
		// d[i-1]
		// �� ��� �� �ִ��� ���Ѵ�.
		d[i] = max(max(a[i] + d[i - 2], d[i - 3] + a[i - 1] + a[i]), d[i - 1]);
	}

	cout << d[n] << endl;
	return 0;
}