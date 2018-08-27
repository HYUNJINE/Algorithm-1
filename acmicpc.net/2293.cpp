#include<iostream>

using namespace std;

int coin[100];
int d[10001]; //d[n] : ��ġ�� ���� n���� �Ǵ� ����� ��

int main()
{
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> coin[i];
	d[0] = 1; //0���� �Ǵ� ����� ���� 1����

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (j - coin[i] >= 0)
				d[j] += d[j - coin[i]];
		}
	}

	cout << d[k] << endl;

	return 0;
}
