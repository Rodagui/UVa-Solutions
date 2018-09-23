/*10409 - Die Game*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int casos;

	while(cin>>casos){
		int num;
		num=casos;
		if(casos==0)
			break;

		string orden;

		int top=5, down=2, left=4, right=3, actual=1, opuesto=6, aux;
		
		while(num--){
			
		cin>>orden;
			if(orden=="north"){
				aux=top;

				top=opuesto;
				opuesto=down;
				down=actual;
				actual=aux;

			}
			if(orden=="east"){

				aux=opuesto;

				opuesto=left;
				left=actual;
				actual=right;
				right=aux;

			}
			if(orden=="south"){
				aux= opuesto;

				opuesto=top;
				top=actual;
				actual=down;
				down=aux;
			}
			if(orden=="west"){
				aux= actual;

				actual=left;
				left=opuesto;
				opuesto=right;
				right=aux;
			}
		}
		cout<<actual<<'\n';

	}

	return 0;
}