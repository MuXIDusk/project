#include "CEnglishSection.h"
#include<iostream>
#include<string>
using namespace std;

void CEnglishSection::Process()
{
	string str;
	minWord.resize(50);
	int j = 0;
	for (int i = 0; strPara[i] != '\0'; i++)
	{
		if (isalpha(strPara[i])  && !isalpha(strPara[i+1]))
			num = num + 1;
		if (isalpha(strPara[i]))
		{
			str.resize(++j);
			str[j-1] = strPara[i];
		}
		else
		{
			if (maxWord.size() < j)
			{
				maxWord.resize(j);
				maxWord = str;
			}
			if (minWord.size() > j && j!=0)
			{
				minWord.resize(j);
				minWord = str;
			}
			str.clear();
			j = 0;
		}
	}
}

CEnglishSection::CEnglishSection()
{
	num = 0;
}

void CEnglishSection::Input(string paragraph)
{
	strPara = paragraph;
}

int CEnglishSection::GetNumWords()
{
	Process();
	return num;
}

string CEnglishSection::GetMaxWord()
{
	return maxWord;
}

string CEnglishSection::GetMinWord()
{
	return minWord;
}
