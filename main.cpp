#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class convert
{
public:
	string decToBin(int decimal) //function to convert decimal to binary
	{
		int digit = 0;
		string answer;
		char c;
		int i = 0;

		while (decimal > 0)
		{
			digit = decimal % 2;
			decimal = decimal / 2;
			c = '0' + digit;
			answer.push_back(c);
		}
		reverse(answer.begin(), answer.end());
		return answer;
	}
private:
	string answer;
};

void main()
{
	convert input;
	int num;

	cout << "Please enter a number: ";
	cin >> num;
	cout << num << " in binary is " << input.decToBin(num) << endl;

	system("pause");
}