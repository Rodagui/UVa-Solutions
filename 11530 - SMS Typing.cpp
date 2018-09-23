/*11530 - SMS Typing*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int casos, k=1, clic, suma;

	cin>>casos;
	cin.ignore();

	while(casos--){
		int tam, i, ascii;
		string txt;
		clic=0;
		getline(cin, txt);
		tam = txt.length();
		
		for (i = 0; i < tam ; ++i)
		{
			ascii=(int)txt[i];

			if(ascii== 97 || ascii== 100 || ascii== 103 || ascii== 106 || ascii== 109|| ascii== 112 || ascii== 116 || ascii== 119 || ascii == 32){
				suma = 1;		
			}
			if(ascii== 98 || ascii== 101 || ascii== 104 || ascii==  107 || ascii== 110 || ascii==  113 || ascii==  117 || ascii== 120){
				suma = 2;
			}
			if(ascii== 99|| ascii== 102 || ascii==  105 || ascii==  108 || ascii== 111 || ascii==  114 || ascii==  118 || ascii==  121){
				suma = 3;
			}
			if(ascii== 115 || ascii== 122){
				suma = 4;
			}
			
			clic+=suma;
		}

		cout<<"Case #"<<k<<": "<<clic<<endl;
		k++;
	}
	
	return 0;
}
