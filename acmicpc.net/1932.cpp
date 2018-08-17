#include <iostream>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int d[501][501] = { 0 };
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> d[i][j];
			if (j == 1) //���� ����
				d[i][j] = d[i - 1][j] + d[i][j];
			else if(j == i) //���� ������
				d[i][j] = d[i - 1][j - 1] + d[i][j];
			else //������
				d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + d[i][j];
			if (ans < d[i][j]) //�ִ� ����
				ans = d[i][j];
		}
	}
	cout << ans << endl;
}