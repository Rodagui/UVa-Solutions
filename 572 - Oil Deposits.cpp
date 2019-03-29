/*572 - Oil Deposits*/

#include <iostream>
#include <vector>

using namespace std;


bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);

int main(){

	int fila, column;

	char mat[101][101];

	while(cin >> fila >> column ){		
		if(fila == 0)
			break;

		vector <int> deposits(column*fila, -1);
		vector <int> rango(column*fila, 1);
		int pos, x, y, aux;

		for (int i = 0; i < fila; ++i){
			for (int j = 0; j < column; ++j){	
				cin >> mat[i][j];

				if(mat[i][j] == '@'){		
					pos = (i*column) + j;
					deposits[pos] = pos;
				}
			}
		}

		for (int i = 0; i < fila; ++i){
			for (int j = 0; j < column; ++j){	
				
				if(mat[i][j] == '@'){

					pos = (i*column) + j;
				
					x = i - 1;
					y = j - 1;
					if(x >= 0 and y >= 0 and mat[x][y] == '@'){
						aux = (x*column) + y;

						unionByRank(deposits, rango, aux, pos);
					}

					x = i - 1;
					y = j;
					if(x >= 0 and mat[x][y] == '@'){
						aux = (x*column) + y;
						unionByRank(deposits, rango, aux, pos);
					}

					x = i - 1;
					y = j + 1;
					if(x >= 0 and y >= 0 and y < column and mat[x][y] == '@'){
						aux = (x*column) + y;
						unionByRank(deposits, rango, aux, pos);
					}

					x = i;
					y = j - 1;
					if(x >= 0 and y >= 0 and mat[x][y] == '@'){
						aux = (x*column) + y;
						unionByRank(deposits, rango, aux, pos);
					}
				}


			}
		}

		cout<<totalArboles(deposits, deposits.size())<<'\n';


	}

	return 0;
}


int find(vector <int>& padre, int x){
	if( x == padre[x])
		return x;
	else
		return padre[x] = find(padre, padre[x]);
}

bool sameArbol(vector <int>& padre, int x, int y){
	
	if(find(padre, x) == find(padre, y))
		return true;
	else
		return false;
}


void unionByRank(vector <int>& padre, vector<int>& rango, int x, int y){

	int rootX = find(padre, x);
	int rootY = find(padre, y);

	if( rootX != rootY){

		if(rango[rootX] > rango[rootY]){
			padre[rootY] = rootX;
			rango[rootX] += rango[rootY];

		}
		else{

			padre[rootX] = rootY;
			rango[rootY] += rango[rootX];

		}
	}
}

int totalArboles(vector <int>& padre, int tam){
	int numArb = 0;
	for (int i = 0; i < tam; ++i)
	{
		if(padre[i] == i)
			numArb++;
	}

	return numArb;
}

