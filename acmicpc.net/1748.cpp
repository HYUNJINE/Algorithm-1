// 1748. 수 이어쓰기
#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		count++;
		int k = i;
		while (k>=10) //자릿수를 더함
		{
			k = k/10;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
