#include <iostream>

using namespace std;

string fst = " Ты не любишь розы, окей. Я нарву тебе цветов со всех полей и устрою тебе самый лучший день", sec;

int main()
{
	setlocale(0, "");
	cout << "Введите слово (на английском) начинающееся на (A|a)\n";
	getline(cin,sec);
	if (sec[0] == 'a' || sec[0] == 'A' )
	{
		fst.insert(0, sec);
		cout << fst << "\n";
		return 0;
	}
	else {

		cout << "не могу читать слова не начинающиеся с A|a \n";
	}

}
