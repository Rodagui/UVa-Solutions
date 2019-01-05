/*499 - What's The Frequency, Kenneth?*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	string linea;

	while(getline(cin,linea)){

		vector <int> mayus(27, 0);
		vector <int> minus(27, 0);
		int cod;
		
		for (int i = 0; i < linea.size(); ++i)
		{
			if(isalpha(linea[i])){
				
				cod = (int)linea[i];

				if(cod > 64 and cod < 91){
					cod-=65;
					mayus[cod]++;
				}
				else{
					cod-=97;
					minus[cod]++;

				}
			}
		}

		int maxMayus=0, maxMinus=0, MAX=0;

		for (int i = 0; i <27; ++i)
		{
			if(mayus[i]>maxMayus)
				maxMayus=mayus[i];
		}

		for (int i = 0; i <27; ++i)
		{
			if(minus[i]>maxMinus)
				maxMinus=minus[i];
		}

		if(maxMayus>=maxMinus)
			MAX=maxMayus;
		else
			MAX=maxMinus;

		char letra;

		for (int i = 0; i < 27; ++i)
		{
			if(mayus[i]==MAX){
				letra = (char)(i+65);
				cout<<letra;
			}

		}

		for (int i = 0; i < 27; ++i)
		{
			if(minus[i]==MAX){
				letra = (char)(i+97);
				cout<<letra;
			}

		}

		cout<<' '<<MAX<<'\n';
	}

	return 0;
}