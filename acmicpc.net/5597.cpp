// 5597. 과제 안 내신 분..?
// 2018.10.15
#include <iostream>

using namespace std;

int num[31];
int arr[28];
int main()
{
	for (int i = 0; i < 28; i++)
	{
		cin >> arr[i];
		num[arr[i]] = 1;
	}

	for (int i = 1; i < 31; i++)
	{
		if (num[i] != 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}
