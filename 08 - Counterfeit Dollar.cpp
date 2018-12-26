/*608 - Counterfeit Dollar*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	int casos;
	cin>>casos;
	cin.ignore();

	while(casos--){
		vector <char> cambio(12, 'X');
		string linea;
		char accion;
		int ctrl=0;
		int pos;
		int donde;

		for (int i = 0; i < 3; ++i)
		{
			getline(cin,linea);
			
			for (int i = 0; i < linea.size(); ++i)
			{
				if(linea[i]==' ')
					ctrl++;

				if(ctrl==2){
					accion= linea[i+1];
					ctrl=0;
					donde=i;
					break;
				}

			}


			for (int i = 0; i < donde; ++i)
			{
				pos = linea[i]-'A';
				
				if(accion=='e'){

					if(linea[i]!=' ')
						cambio[pos]='M';
					
				}

				if(accion=='u'){

					if(linea[i]==' '){
						ctrl++;
						continue;
					}

					if(ctrl==0){
						if(cambio[pos]=='X')
							cambio[pos]='P';
						else if(cambio[pos]=='L' or cambio[pos]=='l')
							cambio[pos]='M';
						else if(cambio[pos]=='P')
							cambio[pos]='p';
					}
					else{

						if(cambio[pos]=='X'){
							cambio[pos]='L';
						}
						else if(cambio[pos]=='P' or cambio[pos]=='p')
							cambio[pos]='M';
						else if(cambio[pos]=='L')
							cambio[pos]='l';
						
					}
				}



				if(accion=='d'){

					if(linea[i]==' '){
						ctrl++;
						continue;
					}


					if(ctrl==0){
						if(cambio[pos]=='X')
							cambio[pos]='L';
						else if(cambio[pos]=='P' or cambio[pos]=='p')
							cambio[pos]='M';
						else if(cambio[pos]=='L')
							cambio[pos]='l';
					}
					else{

						if(cambio[pos]=='X')
							cambio[pos]='P';
						else if(cambio[pos]=='L' or cambio[pos]=='l')
							cambio[pos]='M';
						else if(cambio[pos]=='P')
							cambio[pos]='p';
					}
				}
			}

			ctrl=0;			
		}

		char letra;
		int c=0;

		for (int i = 0; i < 12; ++i)
		{
			if(cambio[i]=='p' or cambio[i]=='l'){
				letra = i+'A';
				
					if(cambio[i]=='p')
						cout<<letra<<" is the counterfeit coin and it is heavy."<<endl;
					else
						cout<<letra<<" is the counterfeit coin and it is light."<<endl;
					c=1;
				break;
			}

		}

		if(c==0){

			for (int i = 0; i < 12; ++i)
			{
				if(cambio[i]!='M' and cambio[i]!='X'){
					letra = i+'A';
				
					if(cambio[i]=='P')
						cout<<letra<<" is the counterfeit coin and it is heavy."<<endl;
					else
						cout<<letra<<" is the counterfeit coin and it is light."<<endl;
					break;
				}
			}
			
		}

	}

	return 0;
}
