/*11559 Event Planning*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int pers, din, hot, fines, i, j;

	while(cin>>pers>>din>>hot>>fines){
		int precio;
		int gasto=0;
		int minimo;
		vector<int> disp(fines);
		vector<int> pres(hot); /*Pres: presupuesto para el hotel*/

		minimo = din;

		for (j = 0; j < hot; j++){
			
			/*Lee el precio y la disponibilidad
			 de cada fin y los guarda en unvector*/
			int no=0;
			int si=0;

			cin>>precio;

			for (i = 0; i < fines; i++)
			{
				cin>>disp[i];
			}

			/*Checa la disponibilidad de las habitaciones*/

			for (i = 0; i < fines ; i++)
			{
				if(disp[i]>= pers){
					si++;
				}
				else{
					no++;
				}
			}

			if(si>0)
				pres[j] = pers * precio;
			else
				pres[j]=din+5;			

		}

		minimo=pres[0];

		for (j = 1; j < hot ; ++j){

			if(minimo >= pres[j])
				minimo = pres[j];
		}

		if (minimo<= din)
			cout<<minimo<<'\n';
		else
			cout<<"stay home\n";

	}

	return 0;
}