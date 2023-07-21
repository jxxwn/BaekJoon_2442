#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = i - 1; j > 0; j--)
		{
			cout << ' ';
		}
		
		for (int k = 0; k <= count; k++)
		{
			cout << '*';
		}
		count = count + 2;
		cout << '\n';
	}
	return 0;


}