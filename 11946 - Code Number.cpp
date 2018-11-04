/*11946 - Code Number*/
#include <iostream>
using namespace std;

int main(){
	int casos;
	cin>>casos;
	cin.ignore();
	while(casos--){
		string linea;
		while(getline(cin, linea)){
			for (int i = 0; i < linea.size(); ++i)
			{
				if(linea[i]=='1')
					cout<<'I';
				else if(linea[i]=='2')
					cout<<'Z';
				else if(linea[i]=='0')
					cout<<'O';
				else if(linea[i]=='3')
					cout<<'E';
				else if(linea[i]=='4')
					cout<<'A';
				else if(linea[i]=='5')
					cout<<'S';
				else if(linea[i]=='6')
					cout<<'G';
				else if(linea[i]=='7')
					cout<<'T';
				else if(linea[i]=='8')
					cout<<'B';
				else if(linea[i]=='9')
					cout<<'P';
				else
					cout<<linea[i];
			}
			cout<<'\n';
		}
	}

	return 0;
}