///!!!!! Triangle output 
// Program which provide console output in shape of triangle (e.g.). 
// The input parametars are character and lenght of triangle side.
//              
//    *
//   **
//  ***
// ****
//*****


#include<iostream>
#include<string>
using namespace std;

int main()
{

	int sideLength;
	cout << "Please enter the length of triangle: " << endl;
	cin >> sideLength;

	string symbol;
	cout << "Please enter the symbol which will bild your triangle: " << endl;
	cin >> symbol;


	string emptySpaces = " ";
	string arrayEmptySpaces = "";
	string symbols = symbol;

	for (int i = 1; i<=sideLength; i++)
	{

		symbols = symbols + symbol;
		

		for (int j = sideLength; j > 0; j--)
		{
			arrayEmptySpaces = arrayEmptySpaces + emptySpaces;
		}
		cout << arrayEmptySpaces + symbols << endl;
	}


	return 0;
}