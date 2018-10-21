// not working yet 2018.10.20
#ifndef QUEENS_H
#define QUEENS_H

#include <vector>
#include <string>
#include <iostream>


const char Q = 'Q', SQUARE = ' ';

bool checkPlace(vector<string>& board, int rank, int file)
{
	bool valid = true;
	--rank;
	for (int diag = 1; valid && 0 <= rank; --rank, ++diag)
	{
		valid *= board.at(rank).at(file) != Q && board.at(rank).at(file - diag * ((file - diag) >= 0)) && board.at(rank).at(file + diag * ((file + diag) < board.at(rank).size()));
	}
}

bool solveQueens(vector<string>& board, int n, int rank, int file)
{
	bool validPlace = checkPlace(board, rank, file);
	if (validPlace)
	{
		if (n)
		{
			solveQueens(board, n - 1, rank + 1, file);
		}
		else
		{
			return true;
		}

	}
	else
	{
		++file;
	}

}


int main()
{
	int n = 8;
	vector<string> board(n);
	for (string& s : board)
	{
		s = (n, SQUARE);
	}
	solveQueens(board, n, 0, 0);
	for (string& s : board)
	{
		cout << s << endl;
	}
	return 0;
}

#endif // !QUEENS_H
