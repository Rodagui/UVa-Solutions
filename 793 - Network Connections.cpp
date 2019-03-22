/*793 - Network Connections*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);
int totalVertices(vector <int>& padre,  int root, int tam);
int arbolesConMasDeUnVertice(vector <int>& padre, int tam);

int main(){

	int cases;
	int k = 1;
	cin>>cases;

	while(cases--){
		if(k>1)
			cout<<'\n';
		
		int computers;
		cin>>computers;
		
		string line;
		cin.ignore();
		int good = 0;
		int bad = 0;
		vector <int> padre;
		vector <int> rango;

		for (int i = 0; i < computers; ++i)
		{
			padre.push_back(i);
			rango.push_back(0);
		}

		while(getline(cin, line) and line.size() > 0){
			istringstream in(line);
			char letra;
			int x, y;
			in>>letra>>x>>y;
			x--;
			y--;

			if(letra == 'c')
				if(x != y){
					unionByRank(padre, rango, x, y);

				}
			
			if(letra == 'q'){
				if(find(padre, x) == find(padre, y))
					good++;
				else
					bad++;
			}

		}

		padre.clear();
		rango.clear();

		cout<<good<<','<<bad<<'\n';

		k++;
		
	}
	

	return 0;
}



void makeSet(vector <int>& padre, vector <int>& rango, int tam){

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

	if(rango[rootX] > rango[rootY]){
		padre[rootY] = rootX;
	}
	else{
		padre[rootY] = rootX;

		if(rango[rootX] == rango[rootY])
			rango[rootX]++;
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

int arbolesConMasDeUnVertice(vector <int>& padre, int tam){
	int numArb = 0;
	for (int i = 0; i < tam; ++i)
	{
		if(padre[i] == i){
			if(totalVertices(padre, i, tam) > 1){
				numArb++;
			}
		}
	}

	return numArb;
}


/* original, modifiqué la de arriba para que solo diera arboles con mas de un vertice
*/


/*regresa el total de nodos de una raiz específica*/
int totalVertices(vector <int>& padre,  int root, int tam){
	int tot;

	for (int i = 0; i < tam; ++i)
	{
		if(find(padre, padre[i]) == root)
			tot++;
	}

	return tot;
}
