#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
void ex02();
void ex03();
void ex04();
void ex05();
void value(int a[], int b);
void array1(int a[], int b);
void add1(int &s);
int doubling(int a);
int add(int a, int b);
int main()
{
	cout << "ex02 function: " << endl;
	ex02();
	cout << "ex03 function" << endl;
	ex03();
	cout << "ex04 function" << endl;
	ex04();
	cout << "ex05 function" << endl;
	ex05();



	return 0;
}

void ex02()
{
	bool hasPassedTest = true;
	double x = rand() % 100;
	double y = rand() % 100;
	int numberOfShares;
	int boxWidth;
	int bookWidth;
	double shelfLife;
	double temp;


	if (x > y)
		cout << "X > Y" << endl;
	else if (x < y)
		cout << "X < Y" << endl;
	else
		cout << "X = Y" << endl;
	cout << "Please enter the number of shares: ";
	cin >> numberOfShares;
	if (numberOfShares>100)
		cout << "The number of shares is greater than 100" << endl;
	else if (numberOfShares < 100)
		cout << "The number of shares is less than 100" << endl;
	else
		cout << "The number of shares is 100" << endl;

	cout << "Please enter the box width: ";
	cin >> boxWidth;
	cout << "please enter the book width: ";
	cin >> bookWidth;

	if (boxWidth%bookWidth == 0)
		cout << "The box width is evenly divisible by the book width" << endl;
	else
		cout << "The box width is not evenly divisible by the book width" << endl;

	cout << "Please enter the shelf life: ";
	cin >> shelfLife;
	cout << "Please enter the temperature: ";
	cin >> temp;
	if (temp>90)
		shelfLife -= 4;
	cout << "Shelf life is " << shelfLife << endl;

}

void ex03()
{
	double area;
	double diagonal;
	char answer;
	char tab;
	string mailingAddress;
	string empty;
	cout << "Please enter the area of the square: ";
	cin >> area;
	diagonal = sqrt(area)*sqrt(2);
	cout << "The length of the diagonal is " << diagonal << endl;
	cout << "y or n ? ";
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		cout << "Your answer is yes" << endl;
	}
	else if (answer == 'n' || answer == 'N')
	{
		cout << "Your answer is no" << endl;
	}
	else
	{
		cout << "Your answer is invalid" << endl;
	}

	tab = '\t';
	cout << "tab is" << tab << tab << "working" << endl;
	cout << "Please enter mailing address: " << endl;
	cin.ignore();
	getline(cin, mailingAddress);

	cout << "Mailing address is: " << mailingAddress << endl;

	empty = "";

}

void ex04()
{
	int number;
	int sum = 0;
	int counter = 0;
	int twice;
	int a, b, z;
	cout << "Please enter a number between 1 and 10: ";
	cin >> number;
	while (number < 1 || number >10)
	{
		cout << "The number you entered is invalid, please enter a number between 1 and 10: ";
		cin >> number;
	}

	for (int i = 1; i <= number; i++)
	{
		sum = sum + pow(i, 3);
	}
	cout << "the sum is: " << sum << endl;

	do
	{
		cout << "*";
		counter += 1;
	} while (counter < number);
	cout << endl;
	cout << " Even numbers from 0 to 40 are:" << endl;
	for (int j = 0; j <= 40; j += 2)
		cout << j << " ";
	cout << endl;
	cout << "doubling function: ";
	twice = doubling(number);
	cout << twice << endl;
	a = rand() % 100;
	b = rand() % 100;
	z = rand() % 100;
	cout << "Addition of " << a << " and " << b << " is " << add(a, b) << endl;
	cout << "The addOne function takes " << z << " and returns ";
	add1(z);
	cout << " with the new z as " << z << endl;

}

int doubling(int a)
{
	int b = a * 2;
	return b;
}

int add(int a, int b)
{
	int r = a + b;
	return r;

}

void add1(int &s)
{
	s = s + 1;
	cout << s;
}

void ex05()
{
	int c[5];
	int sum = 0;
	int product = 1;
	cout << "Please enter five integers: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> c[i];
	}
	for (int j = 0; j < 5; j++)
	{
		sum = sum + c[j];
		product = product*c[j];
	}
	cout << "The sum of the values is " << sum << " and the product of the values is " << product << endl;
	cout << "The array function: " << endl;
	array1(c, sizeof(c));
	cout << "Check if value is in the array: " << endl;
	value(c, sizeof(c));
}

void array1(int a[], int b)
{
	cout << "Size of array is: " << b << endl;

	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
}

void value(int a[], int b)
{
	int v;
	cout << "Please enter a value to check: ";
	cin >> v;
	for (int i = 0; i < 5; i++)
	{
		if (v == a[i])
		{
			cout << "This value is in the array" << endl;
			i = 10;
		}
		if (i == 5 && v != a[5])
			cout << "This value is not in the array" << endl;

	}


}