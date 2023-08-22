/*12545 - Bits Equalizer*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	string cadS, cadT;
	
	int ceros;
	int unos;
	int signo;
	int signoUno;
	int ans;

	int cont = 1;
	while(cases--){

		signoUno = 0;
		signo = 0;
		ceros = 0;
		unos = 0;
		ans = 0;

		cin >> cadS >> cadT;

		if(cadS.size() != cadT.size()){		//si la cadena no tiene el mismo tamaño, no se pueden hacer iguales
			ans = -1;
		}
		else{

			/*Para ese problema al recorrer la primer cadena llevo la cuenta de cuantos ceros deberían ser unos
				de cuantos unos deberías ser ceros
				de cuantos signos de interrogación hay
				y de cuántos signos de interrogación hay que deberían ser unos (esto es por si me faltan unos por convertir a cero, solo intercambiar con otro que ya es 1)*/
			
			for (int i = 0; i < cadS.size(); ++i)
			{
				
				if(cadS[i] == '0' and cadT[i] == '1')
					ceros++;
				if(cadS[i] == '1' and cadT[i] == '0')
					unos++;
				if(cadS[i] == '?')
					signo++;
				if(cadS[i] == '?' and cadT[i] == '1')
					signoUno++;

			}

			/*si tengo más ceros que unos para intercambiar, la respuesta es sumar todos esos ceros y los signos que tenga*/
			/*esto porque si hago swap de ceros con unos, me sobran ceros que puedo modificar a 1's y de todos modos son la misma cantidad de ceros
			las que debo cambiar. Como me sobran signos, puedo ponerlos en uno o cero, por eso solo se suman*/
			
			if(ceros >= unos){
				ans = ceros + signo;
			}
			else{

				/*si tengo mas unos que ceros, primero "swap" de ceros y unos que tenga y le resto esos movimientyos a mi total de unos*/
				ans = ceros;
				unos -= ceros;

				/*si aun me sobran unos, tengo que ver que pueda cambiarlos con los signos de interrogacion*/

				if(signo >= unos){

					/*como no podemos cambiar de 1 a 0, debemos cambiar algun signo de interrogacion a 0 para poder hacer swap
					y conviene cambiar un signo de interrogación que deba ser 1, asi, lo cambio a 0, puedo hacer el swap que mencioné*/

					/*tenemos		cambiamos 	  	hacemos
									   signo     	 swap
					   ?  1   -->      0  1   -->    1  0
					   1  0            1  0          1  0   */

					/*es por esto que llevamos la cuenta de cuantos signos que deberian ser 1 tenemos*/
					/*si nos alcanza para hacer esos cambios entonces proseguimos*/
					if (signoUno >= unos)
					{
						ans += (unos*2);	//a la respuesta le sumamos los unos * 2 por el cambio y el swap
						signo -= unos;		// restamos al total de los signos que tenemos los 1's que modificamos
						ans += signo;		// a la respuesta le sumamos esos signos
					}
					else{
						ans = -1;			//si no tenemos suficientes signos que deberían ser 1's, entonces nopodemos hacer iguales la cadena
					}
				}
				else{

					/*de igual forma si no tenemos sificientes signos para cambiar a unos, no se pueden hacer iguales las cadenas*/
					ans = -1;
				}
			}  

			
		}

		cout << "Case " << cont << ": " << ans << '\n';
		cont++;
	}

	return 0;
}