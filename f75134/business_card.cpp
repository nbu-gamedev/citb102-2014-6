// AUTHOR:
// Pavel Danov - F75134
// _hao@ensifer.io
//
// USE:
// Program for displaying a business card from the user's input details
//
// RESOURCES:
// cout.width() - http://www.cplusplus.com/reference/ios/right/
// getline() - http://www.cplusplus.com/reference/string/string/getline/?kw=getline
//
// INFO:
// I could've made the whole thing with "ncurses" - create borders and align the
// text with something different than "cout.width()" but I didn't have enough
// time and I got lazy :).
//
// Compiled with g++ (Debian 4.9.1-16) 4.9.1

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string info[5];
	string coutStringVal[5] = {"| Name:", "| City:", "| E-mail:", "| Telephone:",};
	int nRow, nCol, nNumCols = 4;

	int coutWidthVal[4][3] = {
		{5, 34, 2,},
		{5, 34, 2,},
		{5, 32, 2,},
		{5, 29, 2,},
	};

	cout << "Please enter your name: ";
	getline(cin, info[0]);
	cout << "Please enter your city: ";
	getline(cin, info[1]);
	cout << "Please enter your e-mail: ";
	getline(cin, info[2]);
	cout << "Please enter your telephone: ";
	getline(cin, info[3]);

	cout << internal << "+=========================================+" << endl;
	cout << internal << "+";
	cout.width(29); cout << right << "Your Business Card";
	cout.width(13); cout << right << "+" << endl;
	cout << internal << "+=========================================+" << endl;

	for (int col = 0; col < nNumCols; col++) {
		nCol = 0;
		cout.width(coutWidthVal[nRow][nCol]); cout << left << coutStringVal[col];
		cout.width(coutWidthVal[nRow][nCol+1]); cout << right << info[col];
		cout.width(coutWidthVal[nRow][nCol+2]); cout << right << "|" << endl;
		nRow++;
	}

	cout << internal << "+=========================================+" << endl;

	return 0;
}