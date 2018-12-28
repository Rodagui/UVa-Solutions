/*665 - False coin*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	int casos, k=1;
	cin>>casos;

	while(casos--){
		if(k>1)
			cout<<'\n';
		int monedas, pesajes, lado, ctrl=0;
		char signo;
		vector <int> lista;
		cin>>monedas>>pesajes;
		vector <char> peso(monedas, 'X');

		for (int i = 0; i < pesajes; ++i)
		{
			cin>>lado;


			for (int i = 0; i < 2*lado; ++i)
			{
				int num;
				cin>>num;
				lista.push_back(num);
			}
			cin.ignore();
			cin>>signo;

			int pos;

			if(signo=='='){
				
				for (int i = 0; i < lista.size() ; ++i)
				{
					peso[lista[i]-1]='M';
				}
			}

			if(signo=='>'){
				for (int i = 0; i < lista.size(); ++i)
				{
					pos = lista[i]-1;
					
					if(i<lado){

						if(peso[pos]=='X')
							peso[pos]='P';
						else if(peso[pos]=='L' or peso[pos]=='l')
							peso[pos]='M';
						else if(peso[pos]=='P')
							peso[pos]='p';
					}
					else{
						if(peso[pos]=='X'){
							peso[pos]='L';
						}
						else if(peso[pos]=='P' or peso[pos]=='p')
							peso[pos]='M';
						else if(peso[pos]=='L')
							peso[pos]='l';
					}
				}
			}

			if(signo=='<'){
				for (int i = 0; i < lista.size(); ++i)
				{
					pos = lista[i]-1;

					if(i<lado){
						if(peso[pos]=='X')
							peso[pos]='L';
						else if(peso[pos]=='P' or peso[pos]=='p')
							peso[pos]='M';
						else if(peso[pos]=='L')
							peso[pos]='l';
					}
					else{

						if(peso[pos]=='X')
							peso[pos]='P';
						else if(peso[pos]=='L' or peso[pos]=='l')
							peso[pos]='M';
						else if(peso[pos]=='P')
							peso[pos]='p';
					}
				}


			}

			int mod;
			if(pesajes==1){
				mod=monedas%2;
				if(mod==1){
					if((monedas/2)==lado){
						if(signo=='='){
							for (int i = 0; i < peso.size(); ++i)
							{
								if(peso[i]=='X'){
									cout<<i+1<<'\n';
								}
							}
						}
						else{
							cout<<"0\n";
						}
					}
					else{
						cout<<"0\n";
					}
				}
				else{
					cout<<"0\n";
				}

				ctrl=1;
			}

			lista.clear();
		} 

		int c=0, cont=0;

		if(ctrl==0){
				for (int i = 0; i < monedas; ++i)
				{
					if(peso[i]=='p' or peso[i]=='l')
					cont++;
				}

			if (cont>1)
			{
				cout<<"0\n";
			}
			else{
				for (int i = 0; i < monedas; ++i)
				{
					if(peso[i]=='p' or peso[i]=='l'){
						cout<<i+1<<'\n';
						c=1;
						break;
					}

				}

				if(c==0){

					for (int i = 0; i < monedas; ++i)
					{
						if(peso[i]!='M' and peso[i]!='X'){
							cout<<i+1<<'\n';
						c=1;
						break;
						}
					}
				}
				
			}
		}

		k++;
	}

	return 0;
}