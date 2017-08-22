// -------------------------------------------
//					Line
// -------------------------------------------

#include "Line.h"
#include <iostream>


Line::Line(const string& line)
{
    // Hint: some of string's member functions might come in handy here
    // for extracting words.

    string _wordInLine;
//

    for( auto i = 0; i < line.size(); i++){
        if (line == " "){
            break;
        }

        if( line.find(' ') == string::npos){    // testing if the string is a single word
            Word tempWord = Word(line);
            _wordVector.push_back(tempWord);
            break;
        }

        char letter  = line[i];

        if (letter != ' ' && ((int(letter) >= int('A') && int(letter) <= int('Z')) || (int(letter) >= int('a') && int(letter) <= int('z'))) ){
            _wordInLine += letter;

        } else if (letter == ' ' || line[i+1] == '\0'){
            Word tempWord = Word(_wordInLine);
            _wordVector.push_back(tempWord);
            _wordInLine.clear();
        }
    }
}


bool Line::contains(const Word& search_word)const{

    if( _wordVector.empty()){   //empty vector
        return false;
    }

    if( !search_word.isQueryable()){
        return  false;
    }
    bool isEqual = false;
    for( auto i = 0; i < _wordVector.size() ; i++){

        if( _wordVector.at(i) == search_word){
            isEqual = true;
            break;
        } else{
            isEqual = false;
        }
    }
    return isEqual;

}
