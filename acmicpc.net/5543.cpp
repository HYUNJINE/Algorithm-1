#include <iostream>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	//a,b,c�� ���� , d,e�� ����
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	cout << min(a, min(b, c)) + min(d, e) - 50 << endl;
}