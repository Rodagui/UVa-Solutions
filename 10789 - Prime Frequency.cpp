/*10789 - Prime Frequency*/
#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

bool esPrimo(int a);

int main(){
	
	int casos;
	cin>>casos;
	cin.ignore();
	set <int> primos;
	primos.insert(2);
	int k=1;

	while(casos--){
		string linea;
		getline(cin, linea);
		vector <char> res;
		vector <int> freq(124);

		int pos;
		for (int i = 0; i < linea.size(); ++i)
		{

			if(isalpha(linea[i]) or isdigit(linea[i])){
				pos=linea[i];
				freq[pos]++;
			}
		}

		char letra;
		int noPrimo=0;
		for (int i = 0; i < freq.size(); ++i)
		{
			letra=(char)i;
			if(freq[i]!=0 and (freq[i] != 1)){
				if(primos.count(freq[i])){
					res.push_back(letra);
					noPrimo=1;
				}
				else{
					if(esPrimo(freq[i])){
						primos.insert(freq[i]);
						res.push_back(letra);
						noPrimo=1;
					}
				}
			}
		}

		if(noPrimo==0){
			cout<<"Case "<<k<<": empty";
		}
		else {
			cout<<"Case "<<k<<": ";
			for (int i = 0; i < res.size() ; ++i)
			{
				cout<<res[i];
			}
		}

		res.clear();
		freq.clear();

		cout<<'\n';
		k++;
	}
	return 0;
}

bool esPrimo(int a){
	int raiz;
	raiz=sqrt(a);
	
	for (int i = 2; i <= raiz; ++i)
	{
		
		if((a%i)==0)
			return false;
	}

	return true;
}