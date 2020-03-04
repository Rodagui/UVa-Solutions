/*924 - Spreading The News*/
#include <bits/stdc++.h>

using namespace std;

pair <int, int> bfs(const vector <vector <int> >& relation, const int& start);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int friends;
	int persons;
	int querys;
	int start;
	int n;

	cin >> persons;

	vector <vector <int> > relation(persons);

	for (int i = 0; i < persons; ++i)
	{
		cin >> friends;

		for (int j = 0; j < friends; ++j)
		{
			cin >> n;

			relation[i].push_back(n);
		}
	}

	cin >> querys;
   
	while(querys--){

		

		cin >> start;
		pair <int, int> ans;

		ans = bfs(relation, start);
		if(relation[start].size() == 0)
			cout << "0\n";
		else
			cout << ans.first << ' ' <<ans.second << '\n';


	}


	return 0;
}


pair <int, int> bfs(const vector <vector <int> >& relation, const int& start){

	vector <bool> status(relation.size());
	vector <int> days(relation.size());

	queue < pair <int, int> > infoNodo;

	status[start] = true;
	infoNodo.push({ start , 0 });

	int currNode;
	int currDay;

	while(! infoNodo.empty()){

		currNode = infoNodo.front().first;
		currDay = infoNodo.front().second;

		infoNodo.pop();
		
		days[currDay]++;

		int newNode;

		for (int i = 0; i < relation[currNode].size(); ++i)
		{
			newNode = relation[currNode][i];

			if(status[newNode] == false){
				status[newNode] = true;

				infoNodo.push({newNode, currDay + 1});
			}
		}

	}

	int maximo = 0;
	int indice;

	for (int i = 1; i < days.size(); ++i)
	{
		if(days[i] > maximo){
			maximo = days[i];
			indice = i;
		}
	}

	return {maximo, indice};

}