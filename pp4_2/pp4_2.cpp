// page 247 -- added my own second function

#include <iostream>
using namespace std;

void bottleNumber(int);

void bottleSong();

int main()
{
	bottleSong();

	return 0;
}

void bottleNumber(int number)
{
	int tens = 0, ones = 0;

	tens = number / 10;
	ones = number % 10;

	if (number == 9) cout << "Nine";
	else if (number == 8) cout << "Eight";
	else if (number == 7) cout << "Seven";
	else if (number == 6) cout << "Six";
	else if (number == 5) cout << "Five";
	else if (number == 4) cout << "Four";
	else if (number == 3) cout << "Three";
	else if (number == 2) cout << "Two";
	else if (number == 1) cout << "One";
	else if (number == 0) cout << "No more";

	else if (number >= 20)
	{
		switch (tens)
		{
		case 9:
			cout << "Ninety";
			break;
		case 8:
			cout << "Eighty";
			break;
		case 7:
			cout << "Seventy";
			break;
		case 6:
			cout << "Sixty";
			break;
		case 5:
			cout << "Fifty";
			break;
		case 4:
			cout << "Forty";
			break;
		case 3:
			cout << "Thirty";
			break;
		case 2:
			cout << "Twenty";
			break;
		}
		if (ones != 0) cout << "-";

		switch (ones)
		{
		case 9:
			cout << "nine";
			break;
		case 8:
			cout << "eight";
			break;
		case 7:
			cout << "seven";
			break;
		case 6:
			cout << "six";
			break;
		case 5:
			cout << "five";
			break;
		case 4:
			cout << "four";
			break;
		case 3:
			cout << "three";
			break;
		case 2:
			cout << "two";
			break;
		case 1:
			cout << "one";
			break;
		}
	}

	else if (number < 20)
	{
		switch (ones)
		{
		case 9:
			cout << "Nineteen";
			break;
		case 8:
			cout << "Eighteen";
			break;
		case 7:
			cout << "Seventeen";
			break;
		case 6:
			cout << "Sixteen";
			break;
		case 5:
			cout << "Fifteen";
			break;
		case 4:
			cout << "Fourteen";
			break;
		case 3:
			cout << "Thirteen";
			break;
		case 2:
			cout << "Twelve";
			break;
		case 1:
			cout << "Eleven";
			break;
		case 0:
			cout << "Ten";
			break;
		}
	}
}

void bottleSong()
{
	int number;
	cout << "How many bottles on the wall? ";
	cin >> number;
	cout << endl;

	for (int i = number; i > 0; i)
	{
		bottleNumber(i);
		if (i == 1)
		{
			cout << " bottle of beer on the wall" << endl;
			bottleNumber(i);
			cout << " bottle of beer," << endl;
			cout << "Take it down, pass it around," << endl;
			bottleNumber(--i);
			cout << " bottles of beer on the wall." << endl;
		}
		else
		{
			cout << " bottles of beer on the wall" << endl;
			bottleNumber(i);
			cout << " bottles of beer," << endl;
			cout << "Take one down, pass it around," << endl;
			bottleNumber(--i);
			if (i == 1)
			{
				cout << " bottle of beer on the wall." << endl;
			}
			else
			{
				cout << " bottles of beer on the wall." << endl;
			}
		}
		cout << endl;
	}
}