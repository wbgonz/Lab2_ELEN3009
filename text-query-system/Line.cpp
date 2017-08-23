// -------------------------------------------
//					Line
// -------------------------------------------

#include "Line.h"

Line::Line(const string &line) {

    // Hint: some of string's member functions might come in handy here
    // for extracting words.
    string _tempWord;
    string tempLine;
    tempLine = line;
    cout<< tempLine<<endl;
    int k;


    for (auto i = 0; i < line.length(); i++) {

        if (line.size() == 0) {
            break;
        }

        if ((line.find(' ') != true) ) { // if no spaces the line will contain only one word
            Word newWord = Word(line);
            _wordVector.push_back(newWord);
            //break;


        }
cout <<"test"<<endl;
        while (tempLine[1] != '\0') {

            cout<<"yes"<<endl;
            k = 0;

            while (tempLine[k] != ' ') {
                k++;
            }

            for (int i = 0; i < k; i++) {
                _tempWord[i] = tempLine[i];

            }
            tempLine.erase(0, k);
            cout<< _tempWord<<endl;
            Word addWord = Word(_tempWord);
            _wordVector.push_back(addWord);


        }







//        if(line.find(' ') == true){ // more that one word in the line
//
//        }

    }

}

bool Line::contains(const Word &search_word) const {
    int count = 0;

    if (_wordVector.size() == 0) {
        return false;
    }

    if (_wordVector.size() == 1) {
        if (_wordVector[0] == search_word) {
            return true;
        } else {
            return false;
        }
    }


    if (_wordVector.size() > 1) {
        for (int i = 0; i < _wordVector.size(); i++) {
            if (_wordVector[i] == search_word) {
                count++;
            }
        }

        if (count > 0) {
            return true;
        }
    }

    // return false;
}
