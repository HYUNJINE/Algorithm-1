// 2884. 알람 시계
// 2018.10.15
#include <iostream>

using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	M -= 45;
	if (M < 0)
	{
		M = M + 45 + 15;
		H--;
		if (H < 0)
		{
			H = 23;
		}
	}

	cout << H << " " << M;
	return 0;
}
