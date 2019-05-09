/*583 - Prime Factors*/

#include <bits/stdc++.h>

#define MAX_N 1000001

using namespace std;

using Number = long long;

vector <Number> primes;
vector <bool> isPrime(MAX_N, true);

inline void createSieve();
inline vector <pair <Number, int> > getPrimeFactors(Number num);
inline pair <Number, int> getPower(Number& num, const Number& numPrimo);


/*-----------------"El main---------------"*/
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	createSieve();
	
	Number n;
	
	while(cin >> n and n){
	
		cout << n <<" = ";
		
		if(n < 0 )
		 	cout<<"-1 x ";
		
		n = abs(n);
		
		vector <pair <Number, int > > primeFactors = getPrimeFactors(n);
		
		for(int i = 0; i < primeFactors.size(); i++){
			
			if(i > 0)
				cout << " x ";
				
			for(int j = 0; j < primeFactors[i].second; j++){
				
				if(j > 0)
					cout << " x ";
				
				cout<<primeFactors[i].first;
			}
		}
		
		cout<<'\n';
			 
	}

	return 0;
}


/*-------------------------------------------*/

inline void createSieve(){
	
	isPrime[0] = false;
	isPrime[1] = false;
	
	primes.push_back(2);
	
	for (Number i = 4; i < MAX_N; i += 2)
		isPrime[i] = false;
		
	for( Number i = 3; i < MAX_N; i += 2){
		
		if(isPrime[i]){
			
			primes.push_back(i);
			
			for(Number j = i*i; j < MAX_N; j += i)
				isPrime[j] = false;
		}	
	}
	
	return;
}

inline vector <pair <Number, int> > getPrimeFactors(Number num){
	
	pair <Number, int> numPow;
	vector <pair <Number, int> > primeFactors;
	
	const Number raiz = sqrt(num);
	
	/*n se modifica en la función getPower*/
	for(int i = 0; primes[i] <= raiz and num > 1; i++){
		
		numPow = getPower(num, primes[i]);
		
		if(numPow.second > 0)
			primeFactors.push_back(numPow);
	}
	
	if(num > 1)
		primeFactors.push_back(make_pair(num, 1));
		
	return primeFactors;

}

inline pair <Number, int> getPower(Number& num, const Number& numPrimo){
	pair <Number, int> veces(numPrimo, 0);
	
	while( num % numPrimo == 0){
		veces.second++;
		num /= numPrimo;
	}
	
	return veces;
}

