#include <iostream>
using namespace std;

int main(void)
{
	// l : �� ���� �� �� / a : Ǯ��� �ϴ� ���� ������ / b : Ǯ��� �ϴ� ���� ������ / c : �Ϸ� �ִ� ���� / d : �Ϸ� �ִ� ����
	int l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;

	int day = 0;

	while (a > 0 || b > 0)
	{
		a -= c;
		b -= d;
		day++;
	}

	int ans;
	ans = l - day;
	cout << ans << endl;
	return 0;
}