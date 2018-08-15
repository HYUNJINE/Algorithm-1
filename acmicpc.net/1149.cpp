#include <iostream>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int RGB[1001][3];
enum { R, G, B };

int main()
{
	int n, r, g, b;
	cin >> n;
	/*
	RGB[i][R] : i��° ���� R�� ĥ�Ҷ� ��� �ּڰ�
	RGB[i][G] : i��° ���� G�� ĥ�Ҷ� ��� �ּڰ�
	RGB[i][B] : i��° ���� B�� ĥ�Ҷ� ��� �ּڰ�
	*/
	for (int i = 0; i < n; i++)
	{
		cin >> r >> g >> b;
		RGB[i][R] = r + min(RGB[i - 1][G], RGB[i - 1][B]);
		RGB[i][G] = g + min(RGB[i - 1][R], RGB[i - 1][B]);
		RGB[i][B] = b + min(RGB[i - 1][R], RGB[i - 1][G]);
	}
	cout << min(RGB[n-1][R], min(RGB[n-1][G], RGB[n-1][B])) << endl;
	return 0;
}

