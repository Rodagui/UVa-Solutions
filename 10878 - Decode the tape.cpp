/*10878 - Decode the tape*/
#include <iostream>

using namespace std;

int main(){
	
	string linea;

	while(getline(cin, linea)){
		int tot=0;
		for (int i = 0; i < linea.size(); i++)
		{
			if(linea[i]=='o'){

				if(i==1)
					tot+=128;
				if(i==2)
					tot+=64;
				if(i==3)
					tot+=32;
				if(i==4)
					tot+=16;
				if(i==5)
					tot+=8;
				if(i==7)
					tot+=4;
				if(i==8)
					tot+=2;
				if(i==9)
					tot+=1;
			}
		}

		if(tot>0)
			cout<<(char)tot;

	}


	return 0;
}