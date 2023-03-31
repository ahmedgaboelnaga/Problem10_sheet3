#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int rows = 5, columns =5;
	const int width = 4;


	//create the header
	for (int i = 1; i <= columns; i++)
	{
		cout << setw(width) << " " << i;
	}
	cout << endl;
	for ( int j = 1; j <= columns; j++)
	{
		cout << setw(width) << "x" << " ";
	}
	cout << endl;

	//create the table
	for (int k = 1; k <= rows; k++)
	{
		for (int l = 1; l <= columns; l++)
		{
			cout << setw(width) << pow(k, l) << " ";
		}
		cout << endl;
	}


	return 0;
}