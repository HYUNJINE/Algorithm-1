#include<iostream>

using namespace std;

int d[1000001];
int main(void)
{
	int n;
	cin >> n;
	d[1] = 1; //1
	d[2] = 2; //11,10

	//d[i]�� d[i-1]�� 1�� �߰��ѰͰ� d[i-2]�� 00�� �߰��Ѱ��̹Ƿ� d[i-1]+d[i-2]�̴�.
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
		d[i] %= 15746;
	}

	cout << d[n] << endl;
}
