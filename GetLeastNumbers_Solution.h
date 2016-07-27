class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		vector<int> res;
		if (input.size() == 0 || k <= 0 || k>input.size())
		{
			return res;
		}

		int i = 0;//最小的K个数，循环i次
		int j = 0;
		int index = 0;//最小的元素下标

		for (i; i<k; i++)
		{
			index = i;
			for (j = i + 1; j<input.size(); j++)
			{
				if (input[index]>input[j])
				{
					index = j;
				}
			}
			res.push_back(input[index]);
			if (index != i)
			{
				swap(input[i], input[index]);
			}
		}
		return res;
	}
};
