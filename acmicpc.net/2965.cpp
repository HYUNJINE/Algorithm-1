#include <iostream>

using namespace std;

int main() 
{
	//Ļ�ŷ� 3���� ������ ������ ū �� -1�� ���Ѵ�.
	int A, B, C;
	cin >> A >> B >> C;
	if (C - B > B - A)
	{
		cout << C - B - 1;
	}
	else
	{
		cout << B - A - 1;
	}

	return 0;
}