/*10685 - Nature*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);

int main(){

	int animals, queries;
	
	while(cin>>animals>>queries ){

		if(animals == 0 and queries == 0)
			break;

		cin.ignore();

		string name, nom;
		int max = -1;
		
		int indice = 0;

		map <string, int> zoo;
		
		vector <int> padre(animals);
		vector <int> rango(animals);

		makeSet(padre, rango, animals);

		while(animals--){
			
			cin>>name;
			
			if(zoo.count(name) == 0){
				zoo[name] = indice;
				indice++;
			}


		}

		int x, y;

		while(queries--){
			
			cin>>name>>nom;
			x = zoo[name];
			y = zoo[nom];

			unionByRank(padre, rango, x, y);

		}

		for (int i = 0; i < rango.size(); ++i)
		{
			if(rango[i] > max)
				max = rango[i];
		}

		cout<<max<<'\n';
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

