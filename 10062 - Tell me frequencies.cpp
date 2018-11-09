/*10062 - Tell me frequencies!*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ordena(pair<int,int> a, pair<int,int> b);
int main(){
	
	string linea;
	int k=1;
	while(getline(cin,linea)){
		if(k>1)
			cout<<'\n';
		vector <int> freq(129, 0);
		vector <pair<int, int>> FR;
		for (int i = 0; i < linea.size(); ++i)
		{
			int pos;
			pos=linea[i];
			freq[pos]++;

		}

		for (int i = 32; i < 129; ++i)
		{
			FR.push_back(make_pair( freq[i], i));
		}

		sort(FR.begin(), FR.end(), ordena);

		for (int i = 0; i < FR.size(); ++i)
		{
			if(FR[i].first!=0)
				cout<<FR[i].second<<' '<<FR[i].first<<'\n';
		}

		FR.clear();
		k++;
		
	}

	return 0;
}

bool ordena(pair<int,int> a, pair<int,int> b){
	if (a.first== b.first){
		return a.second> b.second;
	}
	return a.first < b.first;
}