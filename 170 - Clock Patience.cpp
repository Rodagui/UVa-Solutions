/*170 - Clock Patience*/
#include <cstdio>
#include <algorithm>
#include <utility>
#include <iostream>

using namespace std;

int determina(char c);


int main(){

	string arr[8][13];

	int i, j, k, cont=0;

	int pos;

	
	string carta;

	string pal;
	

	while(cin>>pal){

		for (i = 0; i < 8 ; ++i)
		{
			for (j = 0; j < 13 ; ++j)
			{
				arr[i][j] = "**";
			}
		}
		
		j=0; k=1;
		cont=0;

		if(pal=="#"){
			break;
		}

		/*-----Lee las cartas y las guarda en el arreglo--------*/

		arr[0][0]=pal;

		for (i = 1; i < 52; ++i)
		{
			cin>>arr[j][k];
			k++;

			if(k==13){
				k=0;
				j++;
			}
			if(j==8){
				break;
			}
		}



		/*-----Empieza a hacer los movimientos--------*/

		i=0;
		j=0;

		int q;
		int suma=4;

		while(suma != 0){
			suma=4;

			pos = determina(arr[i][j][0]);

			for ( q = 4; q < 8 ; ++q )
				{
					if(arr[q][pos]=="**"){
						arr[q][pos]=arr[i][j];
						break;
					}
				}

			arr[i][j]="++";

			for ( q = 0; q < 4 ; ++q )
				{
					if(arr[q][pos]!="++"){
						carta= arr[q][pos];
						i = q;
						j= pos;

						break;
					}
					if(arr[q][pos]=="++"){
						suma--;
					}
					if(suma==0){

						break;
					}

				}
				cont++;

				
		}

		if(cont<10){
			cout<<'0'<<cont<<","<<carta<<endl;	
		}
		else{

		cout<<cont<<","<<carta<<endl;
		}


	}



	return 0;
}

int determina(char c){

	char letra;
	letra = c;

	if(letra == 'K'){
		return 0;
	}
	if(letra == 'Q'){
		return 1;
	}
	if(letra == 'J'){
		return 2;
	}
	if(letra == 'T'){
		return 3;
	}
	if(letra == '9'){
		return 4;
	}
	if(letra == '8'){
		return 5;
	}
	if(letra == '7'){
		return 6;
	}
	if(letra == '6'){
		return 7;
	}
	if(letra == '5'){
		return 8;
	}
	if(letra == '4'){
		return 9;
	}
	if(letra == '3'){
		return 10;
	}
	if(letra == '2'){
		return 11;
	}
	if(letra == 'A'){
		return 12;
	}

	return 0;

}