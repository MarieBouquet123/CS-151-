#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Pair
{
	int p;
	int q;
	bool performed;
};

struct Game
{
	string bd;
	int cp;
	int mvs;
	Pair ps;
	char tkn[2];
};

void Initialize(Game& g)
{
	g.tkn[0] = 'X';
	g.tkn[1] = 'O';
	g.cp = 0;
	g.mvs = 0;
	g.bd = "*********";
	g.ps.p = rand() % 9;
	g.ps.q = (g.ps.p + rand() % 9) % 9;
	g.ps.performed = false;
}

void Display(const Game& g)
{
	cout << "\nCurrent Player: " << (g.cp + 1) << "\n\n";

	for(int i = 0;i < 9;i += 1)
	{
		if(g.bd[i] == '*')
		{
			cout << "   ";
		}
		else 
		{
			cout << " " << g.bd[i] << " ";
		}

		if((i + 1) % 3 == 0) 
		{
			cout << "\n";

			if(i != 8)
			{
				cout << "===========\n";
			}
		}
		else
		{
			cout << "|";
		}
	}
}

bool HasHorizontalWin(const Game& g)
{
	for(int i = 0;i < 3;i += 1)
	{
		if(g.bd[3*i] == g.bd[3*i+1] && g.bd[3*i] == g.bd[3*i+2] && g.bd[3*i] != '*')
		{
			return true;
		}
	}
	return false;
}

bool HasVerticalWin(const Game& g)
{
	for(int i = 0;i < 3;i += 1)
	{
		if(g.bd[i] == g.bd[3+i] && g.bd[i] == g.bd[6+i] && g.bd[i] != '*')
		{
			return true;
		}
	}
	return false;
}

bool HasDiagonalWin(const Game& g)
{
	bool d1 = (g.bd[0] == g.bd[4] && g.bd[0] == g.bd[8] && g.bd[0] != '*');
	bool d2 = (g.bd[2] == g.bd[4] && g.bd[2] == g.bd[6] && g.bd[2] != '*');
	return (d1 || d2);
}

bool HasWin(const Game& g)
{
	return (HasHorizontalWin(g) || HasVerticalWin(g) || HasDiagonalWin(g));
}

bool HasMove(const Game& g)
{
	return (g.mvs < 9);
}

bool CanPlay(const Game& g)
{
	return (HasMove(g) && !HasWin(g));
}

bool Available(const Game& g,int x,int y)
{
	return (g.bd[3*x+y] == '*');
}

bool ValidCoors(const Game& g,int x,int y)
{
	if(x >= 1 && x <= 3 && y >= 1 && y <= 3)
	{
		x -= 1;
		y -= 1;
		return Available(g,x,y);
	}
	return false;
}

void GetCoordinates(const Game& g,int& x,int& y)
{
	while(true)
	{
		cout << "\nEnter a row (1 - 3): ";
		cin >> x;
		cout << "Enter a column (1 - 3): ";
		cin >> y;

		if(ValidCoors(g,x,y))
		{
			break;
		}
	}
}

void IsTriggered(Game& g)
{
	if(!g.ps.performed)
	{
		if(g.bd[g.ps.p] != '*' && g.bd[g.ps.q] != '*')
		{
			char t = g.bd[g.ps.p];
			g.bd[g.ps.p] = g.bd[g.ps.q];
			g.bd[g.ps.q] = t;
			g.ps.performed = true;
		}
	}
}

void MakeMove(Game& g)
{
	int x,y;
	GetCoordinates(g,x,y);
	x -= 1;
	y -= 1;
	g.bd[3*x+y] = g.tkn[g.cp];
	IsTriggered(g);
	g.mvs += 1;
}

void SwitchPlayer(Game& g)
{
	g.cp = (g.cp + 1) % 2;
}

void Result(const Game& g)
{
	bool m = HasMove(g);
	bool w = HasWin(g);

	if(!m && !w)
	{
		cout << "\nDraw\n";
	}
	else if(w)
	{
		cout << "\nPlayer " << (g.cp + 1) << " won\n";
	}
}

void PlayGame()
{
	srand(time(NULL));
	Game game;
	Initialize(game);

	while(true)
	{
		Display(game);
		MakeMove(game);
		
		if(!CanPlay(game))
		{
			Display(game);
			break;
		}
		SwitchPlayer(game);
	}
	Result(game);
}

int main()
{
	PlayGame();
	return 0;
}	 
