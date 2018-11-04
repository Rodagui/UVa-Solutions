/*11541 - Decoding*/
#include <iostream>

using namespace std;

int main(){
	
	int casos, k=1;
	cin>>casos;
	cin.ignore();
	string linea;
	string num;
	char letra;
	int n;

	while(casos--){
		cin>>linea;
		letra=linea[0];
		num="";
		int cod;
		int n;
		cout<<"Case "<<k<<": ";
		for (int i = 1; i < linea.size(); i++)
		{
			cod=(int)linea[i];
			if(cod>64 and cod<91){
				n=stoi(num);
				for (int j = 0; j <n ; j++)
				{
					cout<<letra;
				}
				letra=linea[i];
				num="";

			}
			else{
				num+=linea[i];
			}
		}

		n=stoi(num);
		for (int j = 0; j <n ; j++)
		{
			cout<<letra;
		}
		num="";

		cout<<'\n';
		k++;
	}
	

	return 0;
}
