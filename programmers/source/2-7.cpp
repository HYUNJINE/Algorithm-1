// 최솟값 만들기
// 2019.06.28
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
	int answer = 0;
	// 하나는 내림차순, 하나는 오름차순으로 정렬
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());
	for (int i = 0; i < A.size(); i++)
	{
		answer += (A[i] * B[i]);
	}
	return answer;
}
