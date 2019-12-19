#include<iostream>
#include<string>
#include"CEnglishSection.h"
using namespace std;
int main()
{
	CEnglishSection es;
	string str;

	str = "There are moments in life when you miss someone so much that you just want to pick them from your dreams and hug them for real! Dream what you want to dream;go where you want to go;be what you want to be,because you have only one life and one chance to do all the things you want to do.";

	es.Input(str);
	//cout << str << endl << endl;
	cout << "total number of words in paragraph:" << es.GetNumWords() << endl;
	cout << "maximum word:" << es.GetMaxWord() << endl;
	cout << "minimum word:" << es.GetMinWord() << endl;
	return 0;
}