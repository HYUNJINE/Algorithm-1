#include<iostream>

using namespace std;

int d[10][1001]; //d[j][i] : j�� ������ i�ڸ� ��������
int a[1001]; //a[i] : i�ڸ� �������� 

int main()
{
	int n;
	cin >> n;
	a[1] = 10;
	for (int i = 0; i < 10; i++)
	{
		d[i][1] = 1; //1�ڸ� ���������� 10��
	}
	for (int i = 2; i < n + 1; i++) //a[2]���� a[n]���� ���ϱ� ���� �ݺ�
	{
		for (int j = 0; j < 10; j++) //0���� 9���� �ݺ�
		{
			for (int k = 0; k <= j; k++) //0���� j���� �ݺ�
			{//0���� j���� �۰ų� �������� ��� ����
				d[j][i] += d[k][i - 1] % 10007;
			}
			a[i] = (a[i] + d[j][i]) % 10007;
		}
	}

	cout << a[n] << endl;
	return 0;
}