/*10252 - Common Permutation*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	string linea1;
	string linea2;


	while(getline(cin, linea1)){

		getline(cin, linea2);
		vector <int> freq1(28);
		vector <int> freq2(28);

		int pos;
		for (int i = 0; i < linea1.size(); ++i)
		{
			pos=linea1[i]-'a';
			freq1[pos]++;
		}

		for (int i = 0; i < linea2.size(); ++i)
		{
			pos=linea2[i]-'a';
			freq2[pos]++;
		}

		int min;
		char letra;
		for (int i = 0; i < freq1.size(); ++i)
		{
			if(freq1[i]>0 and freq2[i]>0){
				if(freq2[i]<freq1[i])
					min=freq2[i];
				else
					min=freq1[i];
				for (int j = 0; j < min; j++)
				{
					letra=i+'a';
					cout<<letra;
				}

			}
		}


		cout<<'\n';
		
	}


	return 0;
}