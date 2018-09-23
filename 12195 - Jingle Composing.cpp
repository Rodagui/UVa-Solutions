/*12195 - Jingle Composing*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string cad;

	while(cin>>cad){
		if(cad=="*")
			break;

		int tot=0;
		double one=0.0;
		for(int i=1; i<cad.length(); i++){

			if(cad[i]=='/'){
				if(one==1.0)
					tot++;

				one=0.0;
			}


			if(cad[i]=='W')
				one+= 1.0;

			if(cad[i]=='H')
				one+= 0.5;

			if(cad[i]=='Q')
				one+= 0.25;

			if(cad[i]=='E')
				one+= 0.125;

			if(cad[i]=='S')
				one += 0.0625;

			if(cad[i]=='T')
				one += 0.03125;

			if(cad[i]=='X')
				one+= 0.015625;

		}

		cout<<tot<<'\n';
	}



	return 0;
}