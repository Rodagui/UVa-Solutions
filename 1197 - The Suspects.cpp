/*1197 - The Suspects*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);

int main(){

	int alumns, groups;

	while( cin >> alumns >> groups){
		
		if(alumns == 0 and groups == 0)
			break;

		int num, x, y;
		
		vector <int> padre(alumns);
		vector <int> rango(alumns);

		makeSet(padre, rango, alumns);


		while(groups--){

			cin >> num;

			if(num == 0)
				continue;
			else if(num == 1)
				cin >> x;
			else
				cin >> x;

				for (int i = 0; i < num - 1; ++i)
				{
					cin>>y;
					unionByRank(padre, rango, x, y);
				}
		}

		
			cout<<rango[0]<<'\n';
		



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

		if(rootX < rootY){
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

