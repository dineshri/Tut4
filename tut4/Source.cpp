#include <iostream>
using namespace std;

char grid[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
class TicTacToe {

public:

	void reset() {
		system("cls");
		cout << "Tic Tac Toe" << endl;
		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<3; j++)
			{
				cout << grid[i][j] << " ";
			}
			cout << endl;
		}
	}

	void move() {
		int choice;
		cout << "its " << player << " turn" << " Press the number on the grid: ";
		cin >> choice;

		switch (choice) {

		case 1: if (grid[0][0] == '1')
		{
					grid[0][0] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}

				break;

		case 2: if (grid[0][1] == '2')
		{
					grid[0][1] = player;
		}

				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		case 3: if (grid[0][2] == '3')
		{
					grid[0][2] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		case 4: if (grid[1][0] == '4')
		{
					grid[1][0] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		case 5: if (grid[1][1] == '5')
		{
					grid[1][1] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		case 6: if (grid[1][2] == '6')
		{
					grid[1][2] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;


		case 7: if (grid[2][0] == '7')
		{
					grid[2][0] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		case 8: if (grid[2][1] == '8')
		{
					grid[2][1] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		case 9: if (grid[2][2] == '9')
		{
					grid[2][2] = player;
		}
				else
				{
					cout << "grid is already used try again";
					move();
				}
				break;

		}
	}

	void change_Player() {
		if (player == 'X')
			player = '0';

		else
			player = 'X';
	}

	char gameover() {
		//player 1 wins
		if (grid[0][0] == 'X'&& grid[0][1] == 'X'&& grid[0][2] == 'X')
			return'X';
		if
			(grid[1][0] == 'X'&& grid[1][1] == 'X'&& grid[1][2] == 'X')
			return'X';
		if
			(grid[2][0] == 'X'&& grid[2][1] == 'X'&& grid[2][2] == 'X')
			return'X';

		if
			(grid[0][0] == 'X'&& grid[1][0] == 'X'&& grid[2][0] == 'X')
			return'X';
		if
			(grid[0][1] == 'X'&& grid[1][1] == 'X'&& grid[2][1] == 'X')
			return'X';
		if
			(grid[0][2] == 'X'&& grid[1][2] == 'X'&& grid[2][2] == 'X')
			return'X';

		if
			(grid[0][0] == 'X'&& grid[2][0] == 'X'&& grid[2][2] == 'X')
			return'X';
		if
			(grid[2][0] == 'X'&& grid[2][1] == 'X'&& grid[0][2] == 'X')
			return'X';

		//player 2 wins  
		if (grid[0][0] == '0'&& grid[0][1] == '0'&& grid[0][2] == '0')
			return'0';
		if
			(grid[1][0] == '0'&& grid[1][1] == '0'&& grid[1][2] == '0')
			return'0';
		if
			(grid[2][0] == '0'&& grid[2][1] == '0'&& grid[2][2] == '0')
			return'0';

		if
			(grid[0][0] == '0'&& grid[1][0] == '0'&& grid[2][0] == '0')
			return'0';
		if
			(grid[0][1] == '0'&& grid[1][1] == '0'&& grid[2][1] == '0')
			return'0';
		if
			(grid[0][2] == '0'&& grid[1][2] == '0'&& grid[2][2] == '0')
			return'0';

		if
			(grid[0][0] == '0'&& grid[2][0] == '0'&& grid[2][2] == '0')
			return'0';
		if
			(grid[2][0] == '0'&& grid[2][1] == '0'&& grid[0][2] == '0')
			return'0';


		return'l';
	}

};

int main()
{
	TicTacToe obj;
	int count = 0;
	obj.reset();
	while (1)
	{
		count++;
		obj.move();
		obj.reset();
		if (obj.gameover() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else
		if (obj.gameover() == '0')
		{
			cout << "0 wins!" << endl;
			break;
		}
		else
		if
			(obj.gameover() == 'l'&& count == 9)
		{
			cout << "It's a draw!" << endl;
			break;
		}
		obj.change_Player();
	}
	
	return 0;
}
