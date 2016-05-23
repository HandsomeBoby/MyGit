//二维数组中的查找

bool Find(vector<vector<int> > array, int target)
{
	int row = array.size();//
	int col = array[0].size();//列数
	int m = 0;
	int n = col - 1;//第一次选取右上角的元素
	while (m < row&&n >= 0)
	{
		if (target == array[m][n])//相等
		{
			return true;
		}
		else if (target < array[m][n])//比右上角的元素小，去除这一列
		{
			n--;
		}
		else if (target > array[m][n])//比右上角的元素大，去除这一行
		{
			m++;
		}
	}
	return false;
}
