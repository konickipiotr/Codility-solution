#include <vector>
#include <algorithm>

int solution(vector<int> &A)
{
	if (A.size() > 100000)
		
	return 0;

	
	
	int sum = 0;
	int sum2 = 0;
	

	for (unsigned int i = 0; i < A.size(); ++i)
	{
		sum += A[i];
		sum2 += (i + 1);
	}
	int size = A.size() + 1;
	return size+(sum2 - sum);
}