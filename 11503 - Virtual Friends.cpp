/*11503 - Virtual Friends*/

#include <bits/stdc++.h>

using namespace std;

void makeSet(vector <int>& padre, vector <int>& rango, int tam);
bool sameArbol(vector <int>& padre, int x, int y);
void unionByRank(vector <int>& padre, vector <int>& rango, int x, int y);
int find(vector <int>& padre, int x);
int totalArboles(vector <int>& padre, int tam);

int main(){

	int casos;
	cin >> casos;

	while(casos--){
		int entradas;
		cin>>entradas;

		string name1, name2;

		map <string, int> friends;
		vector <int> padre;
		vector <int> rango;
		vector <int> totFriends(2*entradas);

		int pos = 0;
		int root, x, y, raiz;

		while(entradas--){
			

			cin>>name1>>name2;

			if(friends.count(name1) == 0){
				friends[name1] = pos; //w 0
				padre.push_back(pos); //0
				rango.push_back(1); //0
				pos++; //1
			}

			if(friends.count(name2) == 0){
				friends[name2] = pos; //n 1
				padre.push_back(pos); // 0 1
				rango.push_back(1);//0 0
				pos++; //3
			}

			x = friends[name1];
			y = friends[name2];


			unionByRank(padre, rango, x, y);
			raiz = find(padre, x);
			cout<<rango[raiz]<<'\n';


			

		}

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

