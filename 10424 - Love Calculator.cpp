/*10424 - Love Calculator*/
#include <bits/stdc++.h>

using namespace std;

inline int obtenerSuma(string s);
inline int calcula(int num);

int main(){
	
	string boy;
	string girl;

	while(getline(cin, boy) and getline(cin, girl))
	{
		transform(boy.begin(), boy.end(), boy.begin(), ::tolower);
		transform(girl.begin(), girl.end(), girl.begin(), ::tolower);
		int i, v=0, suma, sumg, t=0, T=0, mod=0; 
		suma=obtenerSuma(boy);
		sumg=obtenerSuma(girl);
		

		t= calcula(suma);
		T= calcula(sumg);

		int max, min;

		if(t>T){
			max=t;
			min=T;
		}
		else{
			max= T;
			min=t;
		}

		float div, resta=0;
		resta = max - min;
		div = float(resta/max);
		div *= 100;

		div = 100 - div;

		cout<<fixed<<setprecision(2)<<div<<" %"<<endl;

	}

	return 0;
}

inline int obtenerSuma(string s)
{
	int suma = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
			suma += s[i] - 96;
	}

	return suma;
}

inline int calcula(int num){

	int x, suma=0, mod=0;
	x= num;


	while(num>0){
		mod= num%10;
		suma+= mod;
		num/=10;
	}

	if((suma/10)==0){
		return suma;
	}
	else{
		calcula(suma);
	}

}
