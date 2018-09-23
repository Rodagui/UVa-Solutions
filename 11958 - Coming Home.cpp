/*11958 - Coming Home*/
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main(){

	int casos, k=1;
	cin>>casos;

	while(casos--){
		int numBus, H, M, i, harr, marr, min, tot=0, minimo=200000, ax;

		cin>>numBus;
		scanf("%d:%d", &H, &M);

		for (i = 0; i < numBus ; ++i)
		{
			scanf("%d:%d %d", &harr, &marr, &min);
			if(harr>H){
				tot = 60 - M;
				ax = H+1;
				tot += ((harr - ax)*60);
				tot+=marr + min;
			}
			else if(harr==H){
				if(M<=marr){
					tot= marr-M + min;
				}
				else{
					tot = (1440-(M-marr))+min;
				}

			}
			else{
				tot = 60-M;
				ax = H+1;
				tot += ((24-ax)*60);
				tot+= (harr*60)+marr;
				tot+= min;
			}

			if(tot<minimo){
				minimo = tot;
			}


		}
		cout<<"Case "<<k<<": "<<minimo<<endl;
		k++;
	}

	return 0;
}