/*458 - The Decoder*/
#include <iostream>
using namespace std;

int main(){

	string linea;

	while(getline(cin, linea)){
		int cod;
		for (int i = 0; i < linea.size(); ++i)
		{
			cod=(int) linea[i];
			cod-=7;
			cout<<(char)cod;
		}
		cout<<"\n";

	}

	return 0;
}