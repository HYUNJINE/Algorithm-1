#include <iostream>

using namespace std;

int main() {

	int t, n, k;
	//n : ������ ������ �� 
	//k : k�� �̻� �Ծ�� �ູ
	cin >> t;
	while (t > 0)
	{
		int count = 0;
		t--;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			int ans = c / k;
			count += ans;
		}
		cout << count << endl;
	}
	
	return 0;
}