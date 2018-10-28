#include <cmath>
#include <iostream>

using namespace std;

int main(){
	
	int casos, k=1;
	
	cin>>casos;

	while(casos--){

		int total;
		int tax=0;
		double aux;

		cin>>total;
		total -= 180000;

		if(total>0){
			if(total>= 300000){
				total-=300000;
				tax+=30000;
			}
			else{
				aux=ceil((double)total * 0.1);
				tax+= (int)aux;
				total=-1;
				
			}
		}

		if(total>0){
			if(total>= 400000){
				total-=400000;
				tax+=60000;
			}
			else{
				aux=ceil((double)total * 0.15);
				tax+= (int)aux;
				total=-1;
			}
		}

		if(total>0){
			if(total>= 300000){
				total-=300000;
				tax+=60000;
			}
			else{
				aux=ceil((double)total * 0.20);
				tax+= (int)aux;
				total=-1;
			}
		}

		if(total>0){
				aux=ceil((double)total * 0.25);
				tax+= (int)aux;
				total=-1;
				
		}

		if(tax<2000 and tax>0){
			tax=2000;
		}

		cout<<"Case "<<k<<": "<<tax<<'\n';
		k++;



	}

		

	return 0;
}