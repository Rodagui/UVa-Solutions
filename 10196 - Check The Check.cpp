/*10196 - Check The Check*/

#include <iostream>

using namespace std;

int main(){
	
	string linea;
	char board[8][8];
	char aux[8][8];
	int i = 0, j = 0, row = 0, col = 0, x, y;
	int ctrl = 0;
	int blanco = 0;
	int negro = 0;
	int band = 0;
	int caso = 1;

	for ( i = 0; i < 8 ; ++i){
		for (j = 0; j <8 ; ++j){
			aux[i][j] = '.';
		}
	}


	while(getline(cin, linea)){

		//cout<<linea<<' '<<linea.size()<<'\n';

		if(linea.size() == 0){
			
			if(ctrl == 64)
				break;

			for ( i = 0; i < 8; ++i){
				for (j = 0; j < 8 ; ++j){

					/*---------------peones negros-----------*/
					if(board[i][j] == 'p'){
						
						x = i+1;
						y = j-1;
						if(x < 8 and y >= 0 and board[x][y]== 'K'){
							band = 1;
							blanco = 1;
							break;
						}

						x = i+1;
						y = j+1;

						if(x < 8 and y <8 and board[x][y] == 'K'){
							band = 1;
							blanco = 1;
							break;
						}
						
					}


					/*---------------peones blancos-----------*/

					if(board[i][j] == 'P'){

						x = i-1;
						y = j-1;
						if(x >= 0 and y >= 0 and board[x][y] == 'k'){
							band = 1;
							negro = 1;
							break;
						}

						y = j+1;
						if(x >= 0 and y < 8 and board[x][y] == 'k'){
							band = 1;
							negro = 1;
							break;
						}
							


					}

					/*---------------Torres-----------*/

					if( board[i][j] == 'r'){

						/*movimiento horizontal a la izq y a la derecha*/
						
						x = i;
						for (y = j-1 ; y >= 0 ; --y)
						{
							if(board[x][y] != '.'){
								
								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}

						}

						for (y = j + 1; y < 8; ++y){
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}
								
						}

						y = j;

						for (x = i-1 ; x >= 0 ; --x){
							
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}
						}

						for (x = i + 1; x < 8; ++x){

							if(board[x][y] !=  '.'){

								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}
						}


					}



					if( board[i][j] == 'R'){

						/*movimiento horizontal a la izq y a la derecha*/
						
						x = i;
						for (y = j-1 ; y >= 0 ; --y)
						{
							if(board[x][y] != '.'){
								
								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}

						}

						for (y = j + 1; y < 8; ++y){
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}
								
						}

						y = j;

						for (x = i-1 ; x >= 0 ; --x){
							
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}
						}

						for (x = i + 1; x < 8; ++x){

							if(board[x][y] !=  '.'){

								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}
						}


					}

					/*--------------------------------------Caso para los alfiles------------------------------------*/
					
					if( board[i][j] == 'b'){
					

						for (x = i-1, y = j-1; x >= 0 and y >= 0; x--, y--){
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}

						for (x = i-1, y = j+1; x >= 0 and y < 8; x--, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j-1; x < 8 and y >= 0; x++, y--)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j+1; x < 8 and y < 8; x++, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}


					}

					if( board[i][j] == 'B'){
					

						for (x = i-1, y = j-1; x >= 0 and y >= 0; x--, y--){
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}

						for (x = i-1, y = j+1; x >= 0 and y < 8; x--, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j-1; x < 8 and y >= 0; x++, y--)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j+1; x < 8 and y < 8; x++, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}


					}

					/*------------------------------caso para los caballos--------------------------------*/

					if( board[i][j] == 'n'){
						x = i -2;
						y = j -1;

						if(x >= 0 and y >= 0 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i-1;
						y = j-2;

						if(x >= 0 and y >= 0 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i +1;

						if(x < 8 and y >= 0 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i +2;
						y = j-1;

						if(x < 8 and y >= 0 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i -2;
						y = j+1;

						if(x >= 0 and y < 8 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i -1;
						y = j +2;

						if(x >= 0 and y < 8 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i+1;
						y = j +2;

						if(x < 8 and y < 8 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

						x = i+2;
						y = j+1;

						if(x < 8 and y < 8 and board[x][y] == 'K'){
							blanco = 1;
							band = 1;
							break;
						}

					}

					if( board[i][j] == 'N'){
						x = i -2;
						y = j -1;

						if(x >= 0 and y >= 0 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i-1;
						y = j-2;

						if(x >= 0 and y >= 0 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i +1;

						if(x < 8 and y >= 0 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i +2;
						y = j-1;

						if(x < 8 and y >= 0 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i -2;
						y = j+1;

						if(x >= 0 and y < 8 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i -1;
						y = j +2;

						if(x >= 0 and y < 8 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i+1;
						y = j +2;

						if(x < 8 and y < 8 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

						x = i+2;
						y = j+1;

						if(x < 8 and y < 8 and board[x][y] == 'k'){
							negro = 1;
							band = 1;
							break;
						}

					}

					/*------------------------------caso para las reinitas q-------------------------------*/

					if(board[i][j] == 'q'){

						x = i;
						for (y = j-1 ; y >= 0 ; --y)
						{
							if(board[x][y] != '.'){
								
								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}

						}

						for (y = j + 1; y < 8; ++y){
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}
								
						}

						y = j;

						for (x = i-1 ; x >= 0 ; --x){
							
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}
						}

						for (x = i + 1; x < 8; ++x){

							if(board[x][y] !=  '.'){

								if(board[x][y] == 'K'){
									blanco = 1;
									band =1;
								}
								
								break;
							}
						}

						for (x = i-1, y = j-1; x >= 0 and y >= 0; x--, y--){
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}

						for (x = i-1, y = j+1; x >= 0 and y < 8; x--, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j-1; x < 8 and y >= 0; x++, y--)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j+1; x < 8 and y < 8; x++, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'K'){
									band =  1;
									blanco = 1;
								}
								break;
							}
						}
					}

					/*------------------------------caso para las reinitas Q-------------------------------*/

					if(board[i][j] == 'Q'){

						x = i;
						for (y = j-1 ; y >= 0 ; --y)
						{
							if(board[x][y] != '.'){
								
								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}

						}

						for (y = j + 1; y < 8; ++y){
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}
								
						}

						y = j;

						for (x = i-1 ; x >= 0 ; --x){
							
							if(board[x][y] !=  '.'){

								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}
						}

						for (x = i + 1; x < 8; ++x){

							if(board[x][y] !=  '.'){

								if(board[x][y] == 'k'){
									negro = 1;
									band =1;
								}
								
								break;
							}
						}


						for (x = i-1, y = j-1; x >= 0 and y >= 0; x--, y--){
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}

						for (x = i-1, y = j+1; x >= 0 and y < 8; x--, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j-1; x < 8 and y >= 0; x++, y--)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}

						for (x = i+1, y = j+1; x < 8 and y < 8; x++, y++)
						{
							if(board[x][y] !=  '.'){
								if(board[x][y] == 'k'){
									band =  1;
									negro = 1;
								}
								break;
							}
						}





					}

				}

				if(band == 1)
					break;
			}

			if(blanco == 1){
				blanco = 0;
				cout<<"Game #"<<caso<<": white king is in check.\n";
			}
			else if(negro == 1){
				negro = 0;
				cout<<"Game #"<<caso<<": black king is in check.\n";
			}
			else{
				cout<<"Game #"<<caso<<": no king is in check.\n";
			}
			row = 0;

			for ( i = 0; i < 8 ; ++i){
				for (j = 0; j < 8 ; ++j){
					
					aux[i][j] = '.';
				}
			}

			ctrl = 0;
			blanco = 0;
			negro = 0;
			band = 0;
			caso++;
		}
		else{
			for (col = 0; col < linea.size(); ++col){
				
				board[row][col] = linea[col];
				
				if(linea[col] == '.')
					ctrl++;
			}
			
			row++;

		}
	}

	return 0;
}