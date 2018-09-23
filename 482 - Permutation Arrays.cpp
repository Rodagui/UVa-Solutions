/*482 - Permutation Arrays*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int casos, m=1;
	cin>>casos;
	cin.ignore();
	
	while(casos--){

		if(m>1)
			cout<<'\n';


		cin.ignore();
		string pal;
		int auxt, t, tam;	

		getline(cin, pal);
		tam= pal.length();		
		auxt=tam/2;
		t=tam-auxt;

		int pos[t];

		int i, j=0, p;

		for (i = 0; i < tam; ++i)
		{
			int cod;
			cod=(int)pal[i];
			if(cod!=32){
				cod -= 49;
				pos[j]=cod;
				j++;
			}
		}

		string nums[t];
		

		for (i = 0; i < t; ++i)
		{
			p= pos[i];
			cin>>nums[p];
		}

		for (i = 0; i < t; ++i)
		{
			cout<<nums[i]<<'\n';
		}

		cin.ignore();

		m++;
	}
	return 0;
}