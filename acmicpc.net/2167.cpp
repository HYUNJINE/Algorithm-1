#include<iostream>

using namespace std;

int d[301][301];
int sum[301][301]; //sum[i][j] : 1,1���� i,j������ ��

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)//��
	{
		for (int j = 1; j <= m; j++)//��
		{
			cin >> d[i][j];
		}
	}

	for (int i = 1; i <= n; i++)//��
	{
		for (int j = 1; j <= m; j++)//��
		{
			sum[i][j] = sum[i][j - 1] + d[i][j];
		}
	}

	int t, i, j, x, y;
	cin >> t;
	int ans;
	while (t > 0)
	{
		t--;
		ans = 0;
		cin >> i >> j >> x >> y;
		for (int a = i; a <= x; a++)
		{
			ans += (sum[a][y] - sum[a][j - 1]); //�� �ະ������ ����
		}
		cout << ans << endl;
	}
	return 0;
}