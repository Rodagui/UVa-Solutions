/*459 - Graph Connectivity*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);
int totalVertices(vector <int>& padre,  int root, int tam);

int main(){

	int casos, x, y, k=1;

	cin>>casos;
	char letra;
	string linea;
	
	vector <int> padre;
	vector <int> rango;
	
	while(casos--){
		if(k>1)
			cout<<'\n';

		cin >> letra;
		cin.ignore();

		int tam=0, posX, posY; 
		tam = letra - 'A';
		tam++;

		vector<int> padre(tam);
		vector<int> rango(tam, 0);

		makeSet(padre, rango, tam);

		/*for (int i = 0; i < padre.size(); ++i)
		{
			cout<<padre[i]<<'-';
		}

		cout<<'\n';*/

		while (getline (cin, linea) and linea.length() ){
			posX = linea[0] - 'A';
			posY = linea[1] - 'A';

			if(find(padre, posX) != find(padre, posY)){
				unionByRank(padre, rango, posX, posY);
			}

		}

		int tot = totalArboles(padre, tam);

		cout<<tot<<"\n";
		k++;
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
