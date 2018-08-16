#include <iostream>
#include <algorithm>

using namespace std;

int ans[5], score[8], sum = 0;

int main() 
{
	for (int i = 0; i < 8; i++)
		cin >> score[i];

	//큰거를 하나씩 찾으면서 인덱스를 기억하고 -1로 바꾼다.
	for (int i = 0; i < 5; i++)
	{
		int big = -1;
		int index = 0;
		for (int j = 0; j < 8; j++)
		{
			if (score[j] > big)
			{
				big = score[j];
				index = j;
			}
		}
		sum += big;
		score[index] = -1;
		ans[i] = index + 1;
	}
	sort(&ans[0], &ans[4]);
	cout << sum << endl;
	for (int i = 0; i < 5; i++)
		cout << ans[i] << ' ';
}