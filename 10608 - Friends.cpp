/*10608 - Friends*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);

int main(){

	int casos, x, y, maximo;
	cin>>casos;

	while(casos--){
		
		maximo = -1;
		
		int person, queries;
		
		cin>>person>>queries;

		vector <int> padre(person);
		vector <int> rango(person);
		
		makeSet(padre, rango, person);
		
		while(queries--){
			cin>>x>>y;
			unionByRank(padre, rango, x-1, y-1);
		}

		for (int i = 0; i < rango.size(); ++i)
		{
			if(rango[i] > maximo)
				maximo = rango[i];
		}

		cout<<maximo<<'\n';
	}
	
}


void makeSet(vector<int>& padre, vector <int>& rango, int tam){

	for (int i = 0; i < tam; ++i)
	{
		padre[i] = i;
		rango[i]= 1;
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

