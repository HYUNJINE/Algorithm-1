#include <iostream>

using namespace std;
#define PI 3.14159265358979323846

int main()
{
	double r;
	cin >> r;

	cout << fixed;
	cout.precision(6);

	cout << r * r * PI << endl; //��Ŭ���� ������
	cout << r * r * 2.0f << endl; //�ý� ������
	return 0;

}