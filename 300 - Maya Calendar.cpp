/*300 - Maya Calendar*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main(){

	string Haab[20]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};

	string Tzolkin[21]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};

	int casos;

	scanf("%d", &casos);
	cout<<casos<<endl;
	while(casos--){
		int dias=0, d, a, i, pos, anioT, r, periodos, Tmes, Tdias;
		string mes;

		scanf("%d. ", &d);
		cin>>mes;
		cin>>a;

		dias+= a*365;

		for (i = 0; i < 19; ++i)
		{
			if(mes==Haab[i]){
				dias+= (20*i);
				break;
			}
		}

		dias+=d;
		anioT = dias/260;
		r= dias%260;
		periodos = r%20;
		Tdias = (r%13) +1;
	
		cout<<Tdias<<' '<<Tzolkin[periodos]<<' '<<anioT<<endl;

	}
	
	return 0;
}