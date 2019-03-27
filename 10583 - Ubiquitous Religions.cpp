/*10583 - Ubiquitous Religions*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);

int main(){

	int alumns, queries;
	int x, y, k = 1;

	while(cin>>alumns>>queries and alumns and queries){

		vector <int> padre(alumns+1);
		
		for (int i = 0; i < padre.size(); ++i)
		{
			padre[i] = i;
		}

		vector <int> rango(alumns+1, 1);
		
		while(queries--){
			cin>>x>>y;
			unionByRank(padre, rango, x, y);
		}


			
		cout<<"Case "<<k<<": "<<totalArboles(padre, padre.size())-1<<'\n';
		k++;
	}
	
	
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

