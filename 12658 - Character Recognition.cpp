/*12658 - Character Recognition?*/

/*Para este problema solo consideré los caracteres en las lineas que
 hacen diferente al numero, puse guión bajo para ese carácter:

.*.		***		***.
._.		..*		..*.
.*.		***		***.
.*.		_..		.._.
.*.		***		***.

(es porque el 1 tiene asterisco en esa posicion, pero el 2 y el 3 no
 es porquie el 2 tiene un asterisco en esa posicion pero el 3 y el 1 no
 e´s porque el 3 tiene un asterisco en esa posicion pero el 1 y el 2 no)

*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int numbers;
	cin >> numbers;
	
	string line;
	int aux;
	int j;
	vector <int> ans(numbers,0);  //el resultado lo guardo en un vector

	for (int i = 0; i < 5; ++i)
	{
		cin >> line;

		if(i == 1){ /*la segunda linea que se leé*/
			
			j = 1; //el indice que nos dice si es uno
			
			while(j < numbers * 4){
				
				if(line[j] == '*'){
					aux = j / 4; //para saber en que lugar del vector lo guardo
					ans[aux] = 1;
				}

				j += 4;
			}
		}

		if(i == 3){ //la tercera línea que leé
			
			j = 0;

			while(j < numbers * 4){
				if(line[j] == '*'){
					aux = j / 4;
					ans[aux] = 2;
				}
				j += 4;
			}
		}

		if(i == 3){ //la tercera línea que leé
			
			j = 2;

			while(j < numbers * 4){
				if(line[j] == '*'){
					aux = j / 4;
					ans[aux] = 3;
				}
				j += 4;
			}
		}
	}

	for (int i = 0; i < ans.size(); ++i)
		cout << ans[i] ;
	
	cout <<"\n";
	return 0;
}