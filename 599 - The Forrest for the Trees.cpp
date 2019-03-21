/*599 - The Forrest for the Trees*/
#include <iostream>
#include <vector>
#include <set>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);
int totalVertices(vector <int>& padre,  int root, int tam);

int main(){

	int casos;
	cin>>casos;
	cin.ignore();

	while(casos--){
		string linea;
		string alfabeto;
		
		vector<int> padre(27);
		vector<int> rango(27);
		set<int> alf;

		for (int i = 0; i < 27; ++i)
		{
			padre[i] = i;
			rango[i] = 0;
		}

		int x, y;		
		
		while(getline(cin, linea) and linea[0] != '*'){

			if(linea[1] != linea[3]){
				
				if(alf.count(linea[1]) == 0)
					alf.insert(linea[1]);

				if(alf.count(linea[3]) == 0)
					alf.insert(linea[3]);
			}

			x = linea[1] - 'A';
			y = linea[3] - 'A';

			if(find(padre, x) != find(padre, y)){
				unionByRank(padre, rango, x, y);
			}

		}

		getline(cin, alfabeto);

		int tam = (alfabeto.size() / 2) + 1;
		int tot = totalArboles(padre, 27);
		tam -=  alf.size();
		
		cout<<"There are "<<tot<<" tree(s) and "<<tam<<" acorn(s)."<<'\n';
		alf.clear();	

	}

	return 0;
}



void makeSet(vector<int>& padre, vector <int>& rango, int tam){

	for (int i = 0; i < tam; ++i)
	{
		padre[i] = i;
		rango[i]= i;
	}

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
	int aux;

	if(rango[rootX] < rango[rootY]){
		aux =  rootX;
		rootX = rootY;
		rootY = aux;
	}


	if(rango[rootX] > rango[rootY]){
		padre[rootY] = rootX;
	}
	else{
				
		if(rango[rootX] == rango[rootY]){
			if(rootX < rootY){
				padre[rootY] = rootX;
				rango[rootX]++;
			}
			else{
				padre[rootX] = rootY;
				rango[rootY]++;
			}
		}

		
	}
}

int totalArboles(vector <int>& padre, int tam){
	int numArb = 0;
	for (int i = 0; i < tam; ++i)
	{
		if(padre[i] == i){
			if(totalVertices(padre, i, tam) > 1)
				numArb++;
		}
	}
	return numArb;
}

/*regresa el total de nodos de una raiz específica*/
int totalVertices(vector <int>& padre,  int root, int tam){
	int tot=0;

	for (int i = 0; i < tam; ++i)
	{
		if(padre[i]==root)
			tot++;
	}

	return tot;
}