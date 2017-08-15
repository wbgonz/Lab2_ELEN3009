// -------------------------------------------
//					Word
// -------------------------------------------

#include "Word.h"

Word::Word(const string& word): _word{word}
{
	// throws an exception (in the form of WordContainsNoLetters object)
	// indicating that the word being constructed contains no letters
	if (_word.empty()) throw WordContainsNoLetters();

	// Note, we will cover exceptions in more detail later on in the course.

}

// overloads the equivalence operator which allows to Words to be compared using ==
bool Word::operator==(const Word& rhs) const
{
	auto counter = 0;
	for(auto i = 0; i < _word.length(); i++){

		char temp1 = tolower(_word[i]);
		char temp2 = tolower(rhs._word[i]);

		auto ascii1 = int(temp1);
		auto ascii2 = int(temp2);

		if ( (ascii1 >= int('a') && ascii1 <= int('z')) && (ascii2 >= int('a') && ascii2 <= int('z')) ){
			if( temp1 != temp2)counter++; // The case a character is not equal

		} else{
			continue;
		}
	}

	if (counter == 0)
		return true;
	else
		return false;
}

bool Word::isQueryable() const
{
	return false;
}
