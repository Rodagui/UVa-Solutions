/*10281 - Average Speed*/

#include <iostream>

using namespace std;

int main(){

	string linea;
	string nvaVel;
	string HH, MM, SS;

	int speed = 0;
	int hra, min, seg, band = 0;
	int totSeg = 0;
	int auxSeg = 0;
	double dist = 0.0;

	int auxh = 0;
	int auxm = 0;
	int auxs = 0;

	while(getline(cin, linea)){
		
		HH = linea[0];
		HH += linea[1];
		MM = linea[3];
		MM += linea[4];
		SS = linea[6];
		SS += linea[7];

		hra = stoi(HH);
		min = stoi(MM);
		seg = stoi(SS);

		totSeg = 0;
		auxSeg = 0;

		auxSeg = auxs + (auxm*60) + (auxh*3600);
		totSeg = seg + (min*60) + (hra*3600);

		totSeg -= auxSeg; 
		
		dist += (double)speed / 3600 * totSeg;

		if(linea.size() > 8){

			nvaVel = "";
			
			for (int i = 9; i < linea.size(); ++i){
				nvaVel += linea[i];
			}
			
			speed = stoi(nvaVel);
		}

		else{
			cout<<HH<<':'<<MM<<':'<<SS<<' ';
			printf("%.2f km\n", dist);
		}
		
		auxh = hra;
		auxm = min;
		auxs = seg;
	}


	return 0;
}