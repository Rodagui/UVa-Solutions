/*10530 - Guessing Game*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int num, lie=0, down=0, top=11;

	while(cin>>num){

		if(num==0)
			break;
		

		cin.ignore();
		string instruccion;
		getline(cin, instruccion);
		
		if(instruccion=="too high"){
			if(num<top)
				top=num;
		}
		if(instruccion=="too low"){
			if(num>down)
				down=num;
		}

		if(instruccion=="right on"){
			if(down>=num or top<=num){
				lie=1;
			}
			if(lie==0){
				cout<<"Stan may be honest"<<'\n';
			}
			else{
				cout<<"Stan is dishonest"<<'\n';
			}

			lie=0;
			down=0;
			top=11;
		}

		
	}

	return 0;
}