class Solution {
public:
	void push(int value) {
		//元素压入数据栈
		_s.push(value);
		//如果辅助栈为空或者辅助栈的栈顶元素大于value
		if (_min.size() == 0 || _min.top()>value)
		{
			//value入辅助栈
			_min.push(value);
		}
		else
		{
			//否则，把辅助栈的栈顶元素继续入栈
			_min.push(_min.top());
		}

	}
	void pop() {
		//元素栈和辅助栈都不为空时，pop（）
		if (_s.size()>0 && _min.size()>0)
		{
			_s.pop();
			_min.pop();
		}

	}
	int top() {
		return _s.top();
	}
	int min() {
		return _min.top();

	}
private:
	stack<int> _s;
	stack<int> _min;
};
