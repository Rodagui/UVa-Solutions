/*11984 - A Change in Thermal Unit*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int casos, k=1;

	cin>>casos;

	while(casos--){

		int c, f;
		double cel, fah;

		cin>>c>>f;

		fah = (double)c;
		fah = ((9.0*fah)/5.0)+32;
		fah += (double)f;
		cel = ((fah-32)*5)/9;

		cout<<"Case "<<k<<": "<<setprecision(2)<<fixed<<cel<<endl;


		k++;
	}
	
	return 0;
}