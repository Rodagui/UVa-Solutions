/*11734 - Big Number of Teams will Solve This*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	int casos, k=1;
	cin>>casos;
	cin.ignore();

	while(casos--){
		string frase1;
		string frase2;
		string copia1="";
		string copia2="";

		getline(cin,frase1);
		getline(cin, frase2);

		if(frase1==frase2){
			cout<<"Case "<<k<<": Yes\n";
			k++;
			continue;

		}

		int band=0;

		for (int i = 0; i < frase1.size(); ++i)
		{
			if(frase1[i]!=' '){
				copia1 += frase1[i];

			}
		}

		for (int i = 0; i < frase2.size(); ++i)
		{
			if(frase2[i]!=' ')
				copia2 += frase2[i];
		}

		if(copia1==copia2)
			cout<<"Case "<<k<<": Output Format Error\n";
		
		else
			cout<<"Case "<<k<<": Wrong Answer\n";



		k++;
	}


	return 0;
}