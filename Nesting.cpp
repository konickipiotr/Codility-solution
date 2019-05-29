int solution(std::string & S)
{
	int right = 0, left = 0;
	for (auto & i : S)
	{
		if (i == '(')
			left++;
		if (i == ')') {
			right++;
			if (right > left)
				return 0;
		}
	}
	return right == left ? 1 : 0;
}