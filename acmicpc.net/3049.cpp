#include <iostream>

using namespace std;

int main() {

	int n;
	//���� N������ �������� ������ nC4�̴�.
	cin >> n;
	int ans = 0;
	if (n < 4) ans = 0;
	else
	{
		ans = n * (n - 1)*(n - 2)*(n - 3) / 24;
	}

	cout << ans << endl;
	return 0;
}