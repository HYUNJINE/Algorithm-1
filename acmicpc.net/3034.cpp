#include <iostream>
#include<math.h>
using namespace std;

int main(void)
{
	int n, w, h;
	cin >> n >> w >> h;

	int len;
	for (int i = 0; i < n; i++)
	{
		cin >> len;
		//�Է¹��� ������ ���̰� �ڽ��� �밢���� ���̿� �۰ų� ������ �� �� �ִ�.
		if (len <= sqrt((w*w) + (h*h)))
		{
			cout << "DA" << endl;
		}
		else
		{
			cout << "NE" << endl;
		}
	}
	return 0;
}