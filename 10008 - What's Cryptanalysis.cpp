/*10008 - What's Cryptanalysis?*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ordena(pair<int, char> a, pair<int,char> b);
int main(){

	int casos;
	cin>>casos;
	cin.ignore();
	vector <int> freq(26, 0);
	vector <pair <int, char>> f;
	while(casos--){
		string linea;
		getline(cin,linea);

		for (int i = 0; i < linea.size(); ++i)
		{
			char letra;
			int pos;
			if(isalpha(linea[i])){
				letra=toupper(linea[i]);
				pos=letra-'A';
				freq[pos]++;
			}

		}
	}

	for (int i = 0; i < 26; ++i)
	{
		int fr = freq[i];
		char letra;
		letra= i + 'A';

		f.push_back(make_pair( fr, letra));
	}

	sort(f.begin(), f.end(), ordena);



	for (int i = 0; i < f.size(); ++i)
	{
		if(f[i].first==0)
			break;
		cout<<f[i].second<<' '<<f[i].first<<'\n';
	}



	return 0;
}



bool ordena(pair<int,char> a, pair<int,char> b){
	if (a.first == b.first)
		return a.second < b.second;
	
	return a.first> b.first;
}