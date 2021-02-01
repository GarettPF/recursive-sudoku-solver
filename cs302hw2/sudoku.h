#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>
#include <fstream>

using namespace std;

/**
 * @brief			This function loads in the board from a .txt file
 * @param board		The 2D array that stores the board state
 * @param input		The input file that contains the user given puzzle
*/
void load_puzzle(int board[][9], ifstream& input) {
	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 9; x++) {
			input >> board[y][x];
		}
	}
}

/**
 * @brief			Print the sudoku puzzle in a nice format
 * @param board		The current sudoku puzzle to print out
*/
void print_puzzle(int board[][9]) {
	cout << "-------------------------------" << endl;
	for (int y = 0; y < 9; y++) {
		if ((y-2) % 3 == 1)
			cout << "-------------------------------" << endl;
		for (int x = 0; x < 9; x++) {
			if (x % 3 == 0)
				cout << "|";
			if (board[y][x] == 0)
				cout << " - ";
			else
				cout << " " << board[y][x] << " ";
		}
		cout << "|" << endl;
	}
	cout << "-------------------------------" << endl;
}


#endif