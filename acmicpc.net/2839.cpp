#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = 0;
	int count1 = 0;
	int count2 = 0;

	while (1)
	{
		if (n % 5 == 0)//5�� ������ ��������
		{
			count2 = n / 5;
			ans = count1 + count2;
			break;
		}
		if (n < 0)
		{
			ans = -1;
			break;
		}
		n -= 3;
		count1++;
	}
	cout << ans << endl;

	return 0;
}