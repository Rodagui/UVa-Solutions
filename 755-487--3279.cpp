/*755-487--3279*/
#include <cstdio>
#include <cstring>
#include <stdlib.h>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int cambia(char letra);

int main()
{
	int casos, z=1;
	cin>>casos;

	while(casos--){

		if(z>1){
				cout<<endl;
		}
		int k, i, t, j, n, suma, coin=0;
		
		cin>>k;

		string arr[k];
		int aux[k];
		int tam[k];
		int div;

		for (i = 0; i < k ; ++i)
		{
			t=0;
			cin>>arr[i];
			j=0;
			t=arr[i].length();
			tam[i]=t;
		}

	
		for (i = 0; i < k ; ++i)
		{
			div = 1000000;
			suma=0;
			for (j = 0; j < tam[i] ; ++j)
			{
				if(arr[i][j]=='-'){
					continue;
				}


				n = cambia(arr[i][j]);
				n = n * div;
				suma += n;
				div /= 10;
				
		

			}
			
			aux[i]=suma;
		}

		sort(aux, aux+k);
		 int num, ctrl=1, puno, pdos;

	for ( i = 0; i < k-1; ++i)
		{
			num=aux[i];

			if(num==aux[i+1]){
				ctrl++;
				coin=1;
			}
			else{
				if(ctrl>1){
					coin=1;
					puno = num / 10000;
					pdos = num % 10000;

					if(puno<100){
						if(puno<10){
							cout<<"00";
						}
						else{
							cout<<"0";
						}

					}
					cout<<puno<<'-';

					if(pdos<1000){
						if(pdos<100){
							if(pdos<10){
								cout<<"000";
							}
							else{
								cout<<"00";
							}

						}
						else{
							cout<<"0";
						}
					}

					cout<<pdos<<' '<<ctrl<<endl;
					ctrl = 1;
				}
				else{
					continue;
				}
			}


		}

		if (i==k-1)
		{
			if(ctrl>1){
					coin=1;
					puno = num / 10000;
					pdos = num % 10000;

					if(puno<100){
						if(puno<10){
							cout<<"00";
						}
						else{
							cout<<"0";
						}

					}
					cout<<puno<<'-';

					if(pdos<1000){
						if(pdos<100){
							if(pdos<10){
								cout<<"000";
							}
							else{
								cout<<"00";
							}

						}
						else{
							cout<<"0";
						}
					}


					cout<<pdos<<' '<<ctrl<<endl;
					ctrl = 1;
				}
		}

		if(coin==0){
			cout<<"No duplicates."<<endl;
		}

		z++;

	}
	return 0;
}

int cambia(char letra){
	char c;
	c=letra;

	if(c=='A' || c=='B' || c=='C'){
		return 2;
	}
	if(c=='D' || c=='E' || c=='F'){
		return 3;
	}
	if(c=='G' || c=='H' || c=='I'){
		return 4;
	}
	if(c=='J' || c=='K' || c=='L'){
		return 5;
	}
	if(c=='M' || c=='N' || c=='O'){
		return 6;
	}
	if(c=='P' || c=='R' || c=='S'){
		return 7;
	}
	if(c=='T' || c=='U' || c=='V'){
		return 8;
	}
	if(c=='W' || c=='X' || c=='Y'){
		return 9;
	}
	if(c=='1'){
		return 1;
	}
	if(c=='2'){
		return 2;
	}
	if(c=='3'){
		return 3;
	}
	if(c=='4'){
		return 4;
	}
	if(c=='5'){
		return 5;
	}
	if(c=='6'){
		return 6;
	}
	if(c=='7'){
		return 7;
	}
	if(c=='8'){
		return 8;
	}
	if(c=='9'){
		return 9;
	}
	if(c=='0'){
		return 0;
	}


	return 0;
	
}