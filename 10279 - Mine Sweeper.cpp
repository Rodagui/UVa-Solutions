/*10279 - Mine Sweeper*/
#include <iostream>


using namespace std;

int main(){
	
	int tam;
	int casos;
	
	cin>>casos;

	int k= 1;

	while(casos--){

		if(k > 1)
			cout<<'\n';
		
		cin>>tam;
		cin.ignore();

		char bombas[tam][tam];
		char abiertas[tam][tam];
		bool touched = false;

		for (int i = 0; i < tam ; ++i){
			for (int j = 0; j < tam; ++j){

				cin>>bombas[i][j];
				//cout<<bombas[i][j];
			}

			//cout<<'\n';
		}

		for (int i = 0; i < tam; ++i){
			for (int j = 0; j < tam; ++j){
				
				cin>>abiertas[i][j];
				if(abiertas[i][j]== 'x' and bombas[i][j] == '*'){
					touched = true;
					//cout<<touched<<"loser\n";
				}
				//cout<<abiertas[i][j];
			}
			//cout<<'\n';
		}

		int x, y;

		int answer[tam][tam];

		for (int i = 0; i < tam; ++i){

			for (int j = 0; j < tam; ++j){

				answer[i][j] = 0;
			}
		}


		for (int i = 0; i < tam; ++i){

			for (int j = 0; j < tam; ++j){

				if(abiertas[i][j] == 'x'){

					x = i-1;
					y = j-1;

					if(x >= 0 and y >= 0){
						if(bombas[x][y] == '*')
							answer[i][j]++;
					}

					y = j;

					if(x >= 0){
						if(bombas[x][y] == '*')
							answer[i][j]++;
					}

					y = j + 1;

					if(x >= 0 and y < tam)
						if(bombas[x][y] == '*')
							answer[i][j]++;

					x = i;
					y = j - 1;

					if(y >= 0)
						if(bombas[x][y] == '*')
							answer[i][j]++;

					y = j + 1;

					if(y < tam)
						if(bombas[x][y] == '*')
							answer[i][j]++;

					x = i + 1;
					y = j - 1;

					if(x < tam and y >= 0){
						if(bombas[x][y] == '*')
							answer[i][j]++;
					}

					y = j;

					if(x < tam)
						if(bombas[x][y] == '*')
							answer[i][j]++;

					y = j + 1;
					if(y < tam and x < tam)
						if(bombas[x][y] == '*')
							answer[i][j]++;
				}
			}
		}

		if(touched){

			for (int i = 0; i < tam; ++i)
			{
				for (int j = 0; j < tam; ++j)
				{
					if(bombas[i][j] == '*')
						cout<<'*';
					else if(bombas[i][j] == '.' and abiertas[i][j] == 'x')
						cout<<answer[i][j];
					else
						cout<<'.';
				}

				cout<<'\n';
			}

		}
		else{

			for (int i = 0; i < tam; ++i)
			{
				for (int j = 0; j < tam; ++j)
				{
					if(abiertas[i][j] == 'x' )
						cout<<answer[i][j];
					else
						cout<<'.';
				}

				cout<<'\n';
			}

		}
		

		k++;

	}

	return 0;
}