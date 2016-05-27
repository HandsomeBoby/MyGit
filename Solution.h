//class Solution {
//public:
//	int Fibonacci(int n) {
//		if (n<2)
//		{
//			return n;
//		}
//		else
//		{
//			return Fibonacci(n - 1) + Fibonacci(n - 2);
//		}
//	}
//};

class Solution {
public:
	int Fibonacci(int n) {
		if (n<2)
		{
			return n;
		}
		int sum = 0;
		int sum1 = 0;
		int sum2 = 1;
		for (int i = 2; i <= n; i++)
		{
			sum = sum1 + sum2;
			sum1 = sum2;
			sum2 = sum;
		}
		return sum;
	}
};
