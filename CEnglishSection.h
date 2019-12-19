#pragma once
#include<string>
using namespace std;
class CEnglishSection
{
private:
	string strPara;
	int num;
	string maxWord;
	string minWord;

private:
	void Process();
public:
	CEnglishSection();
	void Input(string paragraph);
	int GetNumWords();
	string GetMaxWord();
	string GetMinWord();
};

