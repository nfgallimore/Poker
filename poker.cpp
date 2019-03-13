#include <iostream>
#include <string>

using std::string;

bool shouldFold(string input);

int main(int argc, char** argv)
{
	if (shouldFold(argv[1]))
	{
		std::cout << "Fold\n";
	}
	else
	{
		std::cout << "Play\n";
	}
}

// `aa` means ace ace
// `lp` means late position
// `ep` early
// `mp` mid
// requires higher card first in hole string
// example input: saae
// suited ace ace early pos

bool shouldFold(string input)
{
	bool suited = input[0] == 's';
	string hole = input.substr(1,2);
	char position = input[3];

	char retVal = 'n';

	if (suited)
	{
		if (position == 'e')
		{
			if (hole == "aa") retVal = 'p';
			else if (hole == "kk") retVal = 'p';
			else if (hole == "qq") retVal = 'p';
			else if (hole == "jj") retVal = 'p';
			else if (hole == "tt") retVal = 'p';
			else if (hole == "99") retVal = 'p';
			else if (hole == "88") retVal = 'p';
			else if (hole == "77") retVal = 'p';
			else if (hole == "ak") retVal = 'p';
			else if (hole == "aq") retVal = 'p';
			else if (hole == "aj") retVal = 'p';
			else if (hole == "at") retVal = 'p';
			else if (hole == "kq") retVal = 'p';
			else if (hole == "kj") retVal = 'p';
			else if (hole == "kt") retVal = 'p';
			else if (hole == "qj") retVal = 'p';
			else if (hole == "qt") retVal = 'p';
			else if (hole == "jt") retVal = 'p';
			else if (hole == "j9") retVal = 'p';
			else if (hole == "t9") retVal = 'p';
			else retVal = 'f';
		}
		else if (position == 'm')
		{
			if (hole == "aa") retVal = 'p';
			else if (hole == "kk") retVal = 'p';
			else if (hole == "qq") retVal = 'p';
			else if (hole == "jj") retVal = 'p';
			else if (hole == "tt") retVal = 'p';
			else if (hole == "99") retVal = 'p';
			else if (hole == "88") retVal = 'p';
			else if (hole == "77") retVal = 'p';
			else if (hole == "ak") retVal = 'p';
			else if (hole == "aq") retVal = 'p';
			else if (hole == "aj") retVal = 'p';
			else if (hole == "at") retVal = 'p';
			else if (hole == "kq") retVal = 'p';
			else if (hole == "kj") retVal = 'p';
			else if (hole == "kt") retVal = 'p';
			else if (hole == "qj") retVal = 'p';
			else if (hole == "qt") retVal = 'p';
			else if (hole == "jt") retVal = 'p';
			else if (hole == "j9") retVal = 'p';
			else if (hole == "t9") retVal = 'p';
			else if (hole == "66") retVal = 'p';
			else if (hole == "55") retVal = 'p';
			else if (hole == "a9") retVal = 'p';
			else if (hole == "a8") retVal = 'p';
			else if (hole == "a7") retVal = 'p';
			else if (hole == "a6") retVal = 'p';
			else if (hole == "k9") retVal = 'p';
			else if (hole == "q9") retVal = 'p';
			else if (hole == "j8") retVal = 'p';
			else if (hole == "t8") retVal = 'p';
			else if (hole == "98") retVal = 'p';
			else retVal = 'f';
		}
		else if (position == 'l')
		{
			if (hole == "aa") retVal = 'p';
			else if (hole == "kk") retVal = 'p';
			else if (hole == "qq") retVal = 'p';
			else if (hole == "jj") retVal = 'p';
			else if (hole == "tt") retVal = 'p';
			else if (hole == "99") retVal = 'p';
			else if (hole == "88") retVal = 'p';
			else if (hole == "77") retVal = 'p';
			else if (hole == "ak") retVal = 'p';
			else if (hole == "aq") retVal = 'p';
			else if (hole == "aj") retVal = 'p';
			else if (hole == "at") retVal = 'p';
			else if (hole == "kq") retVal = 'p';
			else if (hole == "kj") retVal = 'p';
			else if (hole == "kt") retVal = 'p';
			else if (hole == "qj") retVal = 'p';
			else if (hole == "qt") retVal = 'p';
			else if (hole == "jt") retVal = 'p';
			else if (hole == "j9") retVal = 'p';
			else if (hole == "t9") retVal = 'p';
			else if (hole == "66") retVal = 'p';
			else if (hole == "55") retVal = 'p';
			else if (hole == "a9") retVal = 'p';
			else if (hole == "a8") retVal = 'p';
			else if (hole == "a7") retVal = 'p';
			else if (hole == "a6") retVal = 'p';
			else if (hole == "k9") retVal = 'p';
			else if (hole == "q9") retVal = 'p';
			else if (hole == "j8") retVal = 'p';
			else if (hole == "t8") retVal = 'p';
			else if (hole == "98") retVal = 'p';
			else if (hole == "44") retVal = 'p';
			else if (hole == "33") retVal = 'p';
			else if (hole == "22") retVal = 'p';
			else if (hole == "a5") retVal = 'p';
			else if (hole == "a4") retVal = 'p';
			else if (hole == "a3") retVal = 'p';
			else if (hole == "a2") retVal = 'p';
			else if (hole == "k8") retVal = 'p';
			else if (hole == "k7") retVal = 'p';
			else if (hole == "k6") retVal = 'p';
			else if (hole == "k5") retVal = 'p';
			else if (hole == "k4") retVal = 'p';
			else if (hole == "k3") retVal = 'p';
			else if (hole == "k2") retVal = 'p';
			else if (hole == "j7") retVal = 'p';
			else if (hole == "t7") retVal = 'p';
			else if (hole == "97") retVal = 'p';
			else if (hole == "96") retVal = 'p';
			else if (hole == "87") retVal = 'p';
			else if (hole == "86") retVal = 'p';
			else if (hole == "76") retVal = 'p';
			else if (hole == "75") retVal = 'p';
			else if (hole == "65") retVal = 'p';
			else retVal = 'f';
		}
	}
	else if (!suited)
	{
		if (position == 'e')
		{
			if (hole == "ak") retVal = 'p';
			else if (hole == "aq") retVal = 'p';
			else if (hole == "aj") retVal = 'p';
			else if (hole == "at") retVal = 'p';
			else if (hole == "kq") retVal = 'p';
			else if (hole == "kj") retVal = 'p';
			else retVal = 'f';
		}
		else if (position == 'm')
		{
			if (hole == "ak") retVal = 'p';
			else if (hole == "aq") retVal = 'p';
			else if (hole == "aj") retVal = 'p';
			else if (hole == "at") retVal = 'p';
			else if (hole == "kq") retVal = 'p';
			else if (hole == "kj") retVal = 'p';
			else if (hole == "kt") retVal = 'p';
			else if (hole == "qj") retVal = 'p';
			else if (hole == "qt") retVal = 'p';
			else if (hole == "jt") retVal = 'p';
			else retVal = 'f';
		}
		else if (position == 'l')
		{
			if (hole == "ak") retVal = 'p';
			else if (hole == "aq") retVal = 'p';
			else if (hole == "aj") retVal = 'p';
			else if (hole == "at") retVal = 'p';
			else if (hole == "kq") retVal = 'p';
			else if (hole == "kj") retVal = 'p';
			else if (hole == "kt") retVal = 'p';
			else if (hole == "qj") retVal = 'p';
			else if (hole == "qt") retVal = 'p';
			else if (hole == "jt") retVal = 'p';
			else if (hole == "a9") retVal = 'p';
			else if (hole == "a8") retVal = 'p';
			else if (hole == "a7") retVal = 'p';
			else if (hole == "k9") retVal = 'p';
			else if (hole == "q9") retVal = 'p';
			else if (hole == "j9") retVal = 'p';
			else if (hole == "j8") retVal = 'p';
			else if (hole == "t9") retVal = 'p';
			else if (hole == "t8") retVal = 'p';
			else if (hole == "98") retVal = 'p';
			else if (hole == "97") retVal = 'p';
			else if (hole == "87") retVal = 'p';
			else retVal = 'f';
		}
	}

	if (retVal == 'n') throw new std::exception();

	return retVal == 'f';
}