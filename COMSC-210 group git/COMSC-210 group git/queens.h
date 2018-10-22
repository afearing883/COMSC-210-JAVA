// working now 2018.10.22
#ifndef QUEENS_H
#define QUEENS_H

#include <vector>
#include <string>
#include <iostream>

bool solveQueens(std::vector<std::size_t>& board, const std::size_t currentRank)
{
	bool validPlace = true;
	bool validFile = false;
	bool validLeftDiag = false;
	bool validRightDiag = false;
	if (currentRank == board.size())
	{
		return true;
	}
	for (std::size_t file = 0; file < board.size(); ++file, validPlace = true)
	{
		std::size_t i = 0;
		//for debugging
		validFile = (file != board.at(i));
		validRightDiag = (file + (currentRank - i)) != board.at(i);
		validLeftDiag = (file - (currentRank - i)) != board.at(i);
		for (i = 0; (i < currentRank) && (validPlace = (file != board.at(i)) && (file + (currentRank - i)) != board.at(i) && (file - (currentRank - i)) != board.at(i)); ++i)
		{
		}
		if (validPlace)
		{
			board.at(currentRank) = file;
			if (solveQueens(board, currentRank + 1))
			{
				return true;
			}
		}
	}
	return false;
}

std::vector<std::size_t> queens(std::size_t n = 8)
{
	std::size_t currentRank = 0;
	std::vector<std::size_t> board(n, std::string::npos);
	solveQueens(board, currentRank);
	std::vector<std::string> chessBoard;

	for (std::size_t i = 0; i < board.size(); ++i)
	{
		std::string rank(n, ' ');
		rank.at(board.at(i)) = 'Q';
		chessBoard.push_back(rank);
		std::cout << rank << std::endl;
	}
	return board;
}

#endif // !QUEENS_H
