/*12555 - Baby Me*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int casos, tam, k=1;
	cin>>casos;
	string cad;
	cin.ignore();

	while(casos--){
		
		string cad;
		double tot, a;
		
		cin>>a;
		
		getline(cin, cad);
		
		if(cad.length()>3){
			tot= (a*0.5)+ (cad[3]-'0') * 0.05;
		}
		else{
			tot = a*0.5;
		}
		cout<<"Case "<<k<<": "<<tot<<endl;

		k++;
	}


	return 0;
}
