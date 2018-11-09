/*11577 - Letter Frequency*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
	int casos;
	cin>>casos;
	cin.ignore();
	while(casos--){
	string linea;
	vector <int> freq(26);    
		getline(cin, linea);
		for (int i = 0; i < linea.size(); ++i)
		{
			char letra;
			int pos;
			if(isalpha(linea[i])){
				letra=tolower(linea[i]);
				pos=letra-'a';
				freq[pos]++;
			}
		}

		int max=0;
		for (int i = 0; i < 26; ++i)
		{
			if(freq[i]>max)
				max = freq[i];
		}

		for (int i = 0; i < 26; ++i)
		{
			char letra;
			letra = i+'a';
			if(freq[i]==max)
				cout<<letra;
		}
		cout<<'\n';
	}

	return 0;
}