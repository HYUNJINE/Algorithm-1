// 2563. 색종이
#include <iostream>
using namespace std;

int a[101][101];

int main()
{
	int n, x, y, ans = 0;
	cin >> n;
	while (n--)
	{
		//색종이가 덮는 부분을 1로 표시
		cin >> x >> y;
		for (int j = y; j < y + 10; j++)
			for (int i = x; i < x + 10; i++)
				a[j][i] = 1;
	}

	//전체 영역에서 1로 표시된 부분의 합을 구함.
	for (int i = 1; i <= 100; i++)
		for (int j = 1; j <= 100; j++)
			if (a[i][j] == 1)
				ans++;

	cout << ans << endl;
	return 0;
}
