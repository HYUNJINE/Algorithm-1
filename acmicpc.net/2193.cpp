#include <iostream>
#include<string>
using namespace std;

long long d[90]; //d[n] : n�ڸ� ��ģ���� ����
int main()
{
	//��ȭ���� �ۼ��غ��� 1,1,2,3,5,8������ ��ģ���� ������ �����ϰ� �ȴ�.
	int n;
	cin >> n;
	d[0] = 1;
	d[1] = 1;
	for (int i = 2; i < n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << d[n - 1] << endl;
}