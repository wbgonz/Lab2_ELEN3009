// -------------------------------------------
//					Paragraph
// -------------------------------------------

#include "Paragraph.h"

void Paragraph::addLine(const Line& line)
{
	_lineVector.push_back(line);
}

bool Paragraph::contains(const Word& search_word, vector<int>& line_numbers) const
{
	line_numbers.clear(); // just in case the user passes a vector that is not empty.

	if (_lineVector.empty()){
		return false;
	}

	for(auto i = 0; i < _lineVector.size(); i++){
		Line line = _lineVector[i];
		if (line.contains(search_word)){
			line_numbers.push_back(i+1);
		}
	}

	if (line_numbers.empty()) {
		return false;
	} else {
		return true;
	}

}