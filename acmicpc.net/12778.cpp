// CTP 공국으로 이민 가자
#include <iostream>
#include<vector>
using namespace std;

int arr1[501];
char arr2[501];

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		int n;
		char type;
		cin >> n >> type;
		if (type == 'C')
		{
			for (int i = 0; i < n; i++)
			{
				cin >> arr2[i];
			}
			for (int i = 0; i < n; i++)
			{
				cout << arr2[i] -'@' <<" ";
			}
			cout << endl;
		}
		else if (type == 'N')
		{
			for (int i = 0; i < n; i++)
			{
				cin >> arr1[i];
			}
			for (int i = 0; i < n; i++)
			{
				cout << char(arr1[i]+64) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}