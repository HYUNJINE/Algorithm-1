#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//�ִ������� ���ϴ� �Լ�
long long GCD(long long n, long long k)
{
	if (k == 0) return n;
	GCD(k, n%k);
}
int main()
{
	long long A, B;
	cin >> A >> B;
	long long C = GCD(A, B);
	cout << C * (A / C)*(B / C) << endl;
	return 0;
}
