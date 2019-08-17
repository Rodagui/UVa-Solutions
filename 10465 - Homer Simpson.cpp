/*10465 - Homer Simpson*/

#include <bits/stdc++.h>

#define INF 1000000

using namespace std;

int n, m, t;

vector <int> mem;
vector <bool> visited;

void dfs(int currTime){

	visited[currTime] = true;

	if(currTime + n  <= t and visited[currTime + n] == false )
		dfs(currTime + n);

	if(currTime + m <= t and visited[currTime + m] == false )
		dfs(currTime + m);
}

int burger(int currTime){
	if(mem[currTime] == -1)
	{	
		int x = -1;
		int y = -1;

		if(currTime >= n)
			x = burger(currTime - n);

		if(currTime >= m)
			y = burger(currTime - m);

		mem[currTime] = max(x, y);
		
		if (mem[currTime] < 0)
			mem[currTime] = -INF;
		else
			++mem[currTime];
	}

	return mem[currTime];
}

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while(cin >> n >> m >> t){

		visited = vector <bool> (t + 1);
		mem = vector <int> (t + 1, -1);

		dfs(0);
		mem[0] = 0;

		if(visited[t]){

			cout << burger(t) << '\n';
		}
		else{

			for (int i = t - 1; i >= 0 ; --i)
			{
				if(visited[i]){
					cout << burger(i) << ' ' << t-i << '\n';
					break;
				}
			}
		}
	}

	return 0;
}