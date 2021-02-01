/*
* Name: Garett Pascual-Folster, 2001691416, Assignment 2
* Description: This program takes in a sudoku problem from the user
*				and solves the puzzle automatically using recursion
* Input: a .txt file that contains a sudoku puzzle
* Output: a complete and finished sudoku puzzle based on the input
*/

#include "sudoku.h"

int main() {
	ifstream puzzle;
	string filename;
	int board[9][9];

	do { // Get the .txt file from the user and load the puzzle
		puzzle.clear();
		cout << "Enter initial sudoku board file: ";
		cin >> filename;
		puzzle.open(filename.c_str());
	} while (puzzle.fail());
	load_puzzle(board, puzzle);



	return 0;
}