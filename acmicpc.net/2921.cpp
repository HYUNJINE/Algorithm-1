#include <iostream>
#include<math.h>
using namespace std;

int d[1001];
int main()
{
	int n;
	cin >> n;
	//d[n] : ũ�Ⱑ n�� ���̳� ��Ʈ�� �����ִ� ���� ����
	d[1] = 3;
	d[2] = 12;
	for (int i = 3; i <= n; i++)
	{
		int sum = 0;
		for (int j = i * 2; j >= i; j--)
		{
			sum += j;
		}
		d[i] = d[i - 1] + sum;
	}
	cout << d[n] << endl;
	return 0;
}