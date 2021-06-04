#include <iostream>
#include <string>
using namespace std;
int find_min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}

string abbreviate(int numerator, int denominator) {
	int min = find_min(numerator, denominator);
	string result = "";
	for (int i = min; i > 1; i--) {
		if ((numerator % i == 0) && (denominator % i == 0))
		{
			numerator = numerator / i;
			denominator = denominator / i;
			min = find_min(numerator, denominator);
		}
	}
	result = to_string(numerator) + "/"  + to_string(denominator);
	return result;
}

int main(void)
{
	int count;
	cin >> count;
	int first;
	cin >> first;
	for (int i = 0; i < count - 1; i++)
	{
		int tmp;
		cin >> tmp;
		string result = abbreviate(first, tmp);
		cout << result << endl;
	}

	return 0;
}