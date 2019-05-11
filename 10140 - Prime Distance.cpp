/*  10140 - Prime Distance
** Generate primes from 1 to MAX_N.
** Complexity: O(n)
** Status: Tested
*/
#include <bits/stdc++.h>

#define MAX_N 1000001

using namespace std;
using Number = long long;

Number factor[MAX_N];
vector<bool> isNotPrime(MAX_N);
vector<Number> primes;

inline void createSieve();
inline bool esPrimo(Number& n);

/*-------------------Main---------------------*/
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	createSieve();

	Number izq, der;

	while(cin >> izq >> der){

		Number cont = 0;
		Number min = 2147483700;
		Number maxima = -1;
		Number band;
		Number distancia;
		Number left, right;
		Number aMin, bMin;
		Number aMax, bMax;

		for (Number i = izq; i <= der ; ++i){
			if(esPrimo(i)){
				cont++;
				left = i;
				break;
			}
		}

		if(cont == 0){
			cout << "There are no adjacent primes.\n";
		}
		else{
			
			band = left;

			for (Number i = band + 1 ; i <= der ; ++i)
			{
				if(esPrimo(i)){
					cont++;

					right = i;

					distancia = right - left;

					if(distancia < min){
						aMin = left;
						bMin = right;
						min = distancia;
					}

					if(distancia > maxima){
						aMax = left;
						bMax = right;
						maxima = distancia;
					}

					left = right;
				}
			}

			if(cont > 1)
				cout << aMin <<',' << bMin <<" are closest, " << aMax <<',' << bMax << " are most distant.\n";
			else
				cout << "There are no adjacent primes.\n";
			

		}


	}

	return 0;
}

inline bool esPrimo(Number& n){

	bool prime = true;

	if(n == 1)
		return false;

	if(n < MAX_N){
		if(isNotPrime[n] == true)
			prime = false;
	}
	else{

		Number raiz;
		raiz = sqrt(n);

		for (int i = 0; primes[i] <= raiz ; ++i)
		{
			if(n % primes[i] == 0){
				prime = false;
				break;
			}
		}
	}

	return prime;
}



inline void createSieve()
{
	for (Number p = 2; p < MAX_N; ++p)
	{
		if (not isNotPrime[p])
		{	
			factor[p] = p;
			primes.push_back(p);
		}

		for (int j = 0; j < primes.size() and p * primes[j] < MAX_N and primes[j] <= factor[p]; ++j)
		{
			factor[p * primes[j]] = primes[j];
			isNotPrime[p * primes[j]] = true;
		}
	}

	return;
}

