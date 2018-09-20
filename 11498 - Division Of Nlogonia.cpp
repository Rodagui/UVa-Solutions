/*11498 - Division of Nlogonia*/

#include <iostream>

using namespace std;

int main(){
	
	int n;
	while(cin>>n){
		
		if(n==0)
			break;

		int xo, yo, i, x, y;
			cin>>xo>>yo;

			for (i = 0; i <n; ++i)
			{
				cin>>x>>y;

				if(x>=xo){
					if(x==xo)
						cout<<"divisa\n";
					else{
						if(y>=yo){
							if(y==yo)
								cout<<"divisa\n";
							else
								cout<<"NE\n";
						}
						else
							cout<<"SE\n";
					}

				}
				else{
					if(y>=yo){
						if(y==yo)
							cout<<"divisa\n";
						else
							cout<<"NO\n";
					}
					else{
						cout<<"SO\n";
					}

				}
			}



	}


	return 0;
}