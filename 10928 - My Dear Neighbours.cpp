/*10928 - My Dear Neighbours*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin>>casos;

	while(casos--){
		
		int vecinos;
		int minimo = 20000;
		string linea;
		
		cin>>vecinos;
		int p = vecinos;
		cin.ignore();

		vector <int> total;
		int cont;
        int nodo = 1;

        while(p--){

        	getline(cin, linea);
        	int numVecinos;
			
        	cont = 0;
			
			istringstream in(linea);
		    
		    while (in >> numVecinos){      
		        cont++;
		    }


		    if(cont < minimo){
				total.clear();		   
		    	total.push_back(nodo);
		    	minimo = cont;
		    }
		    else if( cont == minimo){
		    	total.push_back(nodo);
		    }

		    nodo++;
        }

		sort(total.begin(), total.end());

		for (int i = 0; i < total.size(); ++i)
		{
			if(i > 0)
				cout<<' ';
			cout<<total[i];
		}

		cout<<'\n';

	}

	return 0;
}