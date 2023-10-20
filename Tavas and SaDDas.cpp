#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string input;
	vector<int> b;
	int index = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '4')
		{
			b.push_back(0);
		}
		else
		{
			b.push_back(1);
		}
	}
	for (int i = b.size(); i >0; i--)
	{
		index += pow(2, i);
	}
	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == 0)
		{
			index -= pow(2, b.size() - i - 1);
		}
	}
	cout << index << endl;
	return 0;
}