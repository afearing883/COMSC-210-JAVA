// not working yet 2018.10.20
#ifndef QUEENS_H
#define QUEENS_H

#include <vector>
#include <string>
#include <iostream>


const char Q = 'Q', SQUARE = ' ';


bool solveQueens(std::vector<size_t>& board, size_t currentRank)
{
	bool validPlace = false;
	for (size_t file = 0;file < board.size() && !validPlace; ++file)
	{
		for (size_t i = 0;!validPlace && i < currentRank; ++i)
		{
			validPlace = (file != board.at(i)) && (file + (currentRank - i)) != board.at(i) && (file - (currentRank - i)) != board.at(i);
		}
		if (validPlace)
		{
			board.at(currentRank) = file;
			solveQueens(board, currentRank + 1);
			
		}

	}




}

void queens(int n = 8)
{
	size_t currentRank = 0;
	std::vector<size_t> board(n, std::string::npos);
	solveQueens(board, currentRank);
}

#endif // !QUEENS_H
