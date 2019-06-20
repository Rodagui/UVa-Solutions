/*B. Present from Lena*/

#include <bits/stdc++.h>

using namespace std;

int main(){


	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int center = 0;
	int cont = 0;
	int num;

	cin >> num;

	int space = num;

	for (int i = 0; i <= num*2 ; ++i){
		
		for (int j = 0; j < space; ++j)	
			cout << "  ";
		
		
		if(i < num){

			while(cont <= center){


				for (int j = 0; j <= cont ; ++j){
					cout << j;
					if(center != 0)
						cout << ' ';
				}
				
				int band = 0;
				
				for (int j = cont-1; j >= 0 ; --j){
					if(band)
						cout << ' ';
					
					cout << j;
					
					band=1;
				}
				
				cont++;
			}
			cout << "\n";


			center++;
			space--;

		}
		else{
			
			while(cont >= center){
				
				for (int j = 0; j <= cont ; ++j){

					cout << j;

					if(center != 0)
						cout << ' ';
				}

				int band = 0;
				for (int j = cont-1; j >= 0 ; --j){

					if(band)
						cout << ' ';
					
					cout << j;
					
					band=1;
				}
				cont--;
			}
			
			cout << "\n";

			center--;
			space++;
		}

	}

	return 0;
}