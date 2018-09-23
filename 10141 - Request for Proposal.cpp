/*10141 - Request for Proposal*/

#include <cstdio>
#include <cstring>
#include <cmath>
#include <string> 
#include <iostream> 
#include <algorithm>

using namespace std;

int main(){

	int r, p, caso=1;
	while(scanf("%d %d\n", &r, &p) != EOF){
		if(r==0 and p==0)
			break;

		if (caso>1){
			cout<<'\n';
		}

		string req[r];
		int i, j, max=0, a=0, b=0, emp=0, c=0, posa;

		for (i = 0; i < r; ++i)
		{
			getline(cin, req[i]);
		}
		string prop[p];
		double prx[p];
		double precio=0.00;
		int opc; 

		for (i = 0; i < p; ++i)
		{
			getline(cin, prop[i]);

		
			scanf("%lf %d\n", &prx[i], &opc);
			

			if(opc>=max and opc >0){
				if(opc==max){
					
					if(emp==1){
						if(prx[i]<prx[b]){
							b=i;
						}
						
					}
					else{
						
						b = i;
						emp = 1;

					}
					
				}
				else{

					max = opc;
					posa=i;
				}

			}


			for (j = 0; j < opc ; ++j)
			{
				string linea;
				getline(cin, linea);
			}
		}
		
		cout<<"RFP #"<<caso<<endl;

		if(emp==1){
			
			if(prx[posa]<prx[b]){
				cout<<prop[posa]<<endl;
			}
			else if(prx[posa]==prx[b]){
				cout<<prop[posa]<<endl;
			}
			else{
				cout<<prop[b]<<endl;
			}

		}
		else{
			cout<<prop[posa]<<endl;
		}

		
		caso++;
	}


	return 0;
}