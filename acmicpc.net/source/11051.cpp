// 11051. 이항계수 2
// 2019.05.22
// 다이나믹 프로그래밍
#include<iostream>

using namespace std;

int d[1001][1001];  // d[n][k] : nCk를 10007로 나눈 나머지
int main()
{
	int n, k;
	cin >> n >> k;

	//1C0 = 1, 1C1 = 1
	d[1][0] = 1;
	d[1][1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j || j == 0)
			{
				d[i][j] = 1;
			}
			else
			{
				// nCk = n-1Ck-1 + n-1Ck를 활용
				d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
			}
			d[i][j] %= 10007;
		}
	}
	// 결과 출력
	cout << d[n][k] << endl;
	return 0;
}
