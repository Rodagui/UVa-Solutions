/*10004 - Bicoloring*/

#include <bits/stdc++.h>

using namespace std;

bool coloring(const vector <vector <int> >& friends);
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int nodes, edges;

	while(cin >> nodes >> edges){

		int u, v;
		bool can;

		vector <vector <int> > friends(nodes);

		for (int i = 0; i < edges; ++i)
		{
			cin >> u >> v;
			friends[u].push_back(v);
			friends[v].push_back(u);
		}

		can = coloring(friends);

		if(can)
			cout << "BICOLORABLE.\n";
		else 
			cout << "NOT BICOLORABLE.\n";
	}
	return 0;
}


bool coloring(const vector <vector <int> >& friends){

	 queue <int> colored;
	 vector <int> color(friends.size(), -1); //1 black 0 white

	 int currColor = 0;
	 int currNode = 0;
	 bool ans = true;
	 int newNode;

	 color[currNode] = currColor;
	 colored.push(currNode);
	 
	 while(! colored.empty()){

	 	currNode = colored.front();
	 	currColor = color[currNode];
	 	colored.pop();
	 
	 	if(currColor == 1)
	 		currColor = 0;
	 	else
	 		currColor = 1;

	 	for (int i = 0; i < friends[currNode].size(); ++i)
	 	{
	 		newNode = friends[currNode][i];
	 		if((color[newNode] == 1 and currColor == 0) or (color[newNode] == 0 and currColor == 1) ){
	 			ans = false;
	 			break;
	 		}
	 		else{
	 			
	 			if(color[newNode] == -1 )
	 				colored.push(newNode);

	 			color[newNode] = currColor;
	 		
	 		}

	 	}

	 	if(ans == false)
	 		break;
	 }

	 return ans;

}