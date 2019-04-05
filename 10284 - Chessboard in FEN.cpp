/*10284 - Chessboard in FEN*/
#include <iostream>
#include <string>

using namespace std;

int main(){

	string linea;
	char board[8][8];
	char aux[8][8];

	while(getline(cin, linea)){
		
		int row = 0, col = 0;
		int i, j;
		
		for ( i = 0; i < 8; ++i)
		{
			for (j = 0; j < 8; ++j)
			{
				aux[i][j] = '.';
				board[i][j] = '*';
			}
		}


		//cout<<linea<<'\n';

		for (i = 0; i < linea.size(); ++i)
		{
			int num;

			if(linea[i] == '/'){
				row++;
				col = 0;
			}
			if(isalpha(linea[i])){
				board[row][col] = linea[i];
				col++;
			}
			if(isdigit(linea[i])){

				num = linea[i] - '0';
				for ( j = 0; j < num; ++j)
				{
					board[row][col] = '*';
					col++;
				}

			}

		}

		int x, y;

		for (i = 0; i < 8; ++i)
		{
			for (j = 0; j < 8; ++j)
			{
				/*caso para los peones*/
				if(board[i][j] == 'p'){
					x = i+1;
					y = j-1;

					if(x < 8 and y >= 0 and board[x][y] != 'p' and board[x][y] != 'r' and board[x][y] != 'q' and board[x][y] != 'b' and board[x][y] != 'k' and board[x][y] != 'n')
						aux[x][y] = 'x';

					x = i+1;
					y = j+1;

					if(x < 8 and y <8 and board[x][y] != 'p' and board[x][y] != 'r' and board[x][y] != 'q' and board[x][y] != 'b' and board[x][y] != 'k' and board[x][y] != 'n')
						aux[x][y] = 'x';
				}

				if(board[i][j] == 'P' ){
					
					x = i-1;
					y = j-1;
					if(x >= 0 and y >= 0 and board[x][y] != 'P' and board[x][y] != 'R' and board[x][y] != 'Q' and board[x][y] != 'B' and board[x][y] != 'K' and board[x][y] != 'N')
						aux[x][y] = 'x';


					y = j+1;
					if(x >= 0 and y < 8 and board[x][y] != 'P' and board[x][y] != 'R' and board[x][y] != 'Q' and board[x][y] != 'B' and board[x][y] != 'K' and board[x][y] != 'N')
						aux[x][y] = 'x';
				}

				/*caso para las torres*/

				if( board[i][j] == 'r'  or board[i][j] == 'R'){

					x = i;

					for (y = j-1 ; y >= 0 ; --y)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (y = j + 1; y < 8; ++y)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					y = j;

					for (x = i-1 ; x >= 0 ; --x)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i + 1; x < 8; ++x)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}


				}

				/*Caso para los alfiles*/
				if( board[i][j] == 'b'  or board[i][j] == 'B'){
					
					

					for (x = i-1, y = j-1; x >= 0 and y >= 0; x--, y--)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i-1, y = j+1; x >= 0 and y < 8; x--, y++)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i+1, y = j-1; x < 8 and y >= 0; x++, y--)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i+1, y = j+1; x < 8 and y < 8; x++, y++)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}


				}



				/*Caso para los caballos*/
				if( board[i][j] == 'n'  or board[i][j] == 'N'){
					x = i -2;
					y = j -1;

					if(x >= 0 and y >= 0)
						aux[x][y] = 'x';

					x = i-1;
					y = j-2;

					if(x >= 0 and y >= 0)
						aux[x][y] = 'x';

					x = i +1;

					if(x < 8 and y >= 0)
						aux[x][y] = 'x';

					x = i +2;
					y = j-1;

					if(x < 8 and y >= 0)
						aux[x][y] = 'x';

					x = i -2;
					y = j+1;

					if(x >= 0 and y < 8)
						aux[x][y] = 'x';

					x = i -1;
					y = j +2;

					if(x >= 0 and y < 8)
						aux[x][y] = 'x';

					x = i+1;
					y = j +2;

					if(x < 8 and y < 8)
						aux[x][y] = 'x';

					x = i+2;
					y = j+1;

					if(x < 8 and y < 8)
						aux[x][y] = 'x';

				}


				/*Caso para los reyes*/
				if( board[i][j] == 'k'  or board[i][j] == 'K'){
					
					x = i-1;
					y = j-1;
					if(x >= 0 and y >= 0)
						aux[x][y] = 'x';

					y = j;
					if(x >= 0)
						aux[x][y] = 'x';

					y = j+1;
					if(x >= 0 and y < 8)
						aux[x][y] = 'x';

					x = i;
					y = j-1;
					if(y >= 0)
						aux[x][y] = 'x';

					y = j+1;
					if(y < 8)
						aux[x][y] = 'x';

					x = i+1;
					y = j-1;

					if(x < 8 and y >= 0)
						aux[x][y] = 'x';

					y = j;

					if(x < 8)
						aux[x][y] = 'x';

					x = i+1;
					y = j+1;

					if(x <8 and y <8)
						aux[x][y] = 'x';

				}

				/*Caso para las reinas*/
				if( board[i][j] == 'q'  or board[i][j] == 'Q'){

					x = i;

					for (y = j-1 ; y >= 0 ; --y)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (y = j + 1; y < 8; ++y)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					y = j;

					for (x = i-1 ; x >= 0 ; --x)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i + 1; x < 8; ++x)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i-1, y = j-1; x >= 0 and y >= 0; x--, y--)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i-1, y = j+1; x >= 0 and y < 8; x--, y++)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i+1, y = j-1; x < 8 and y >= 0; x++, y--)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

					for (x = i+1, y = j+1; x < 8 and y < 8; x++, y++)
					{
						if(board[x][y] !=  '*')
							break;
						else
							aux[x][y] = 'x';
					}

				}




			}
		}

		int total = 0;

		for ( i = 0; i < 8; ++i)
		{
			for (j = 0; j < 8; ++j)
			{
				if(aux[i][j] == '.' and board[i][j] == '*')
					total++;
			}
		}

		cout<<total<<'\n';
	}

	return 0;
}