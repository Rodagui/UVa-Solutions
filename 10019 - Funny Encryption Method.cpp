/*10019 - Funny Encryption Method*/
#include <iostream>
using namespace std;

int main(){
	
	int casos;
	cin>>casos;

	while(casos--){
		int num, n, b1=0, b2=0, mod;
		cin>>num;
		n=num;
		string hexa;
		hexa=to_string(n);

		while(num>0){
			mod = num%2;
			if(mod==1){
				b1++;
			}
			num/=2;
		}

		for (int i = 0; i < hexa.size(); ++i)
		{
			if(hexa[i]=='0')
				continue;

			if(hexa[i]=='1' or hexa[i]=='2' or hexa[i]=='4' or hexa[i]=='8')
				b2++;
			
			if(hexa[i]=='3' or hexa[i]=='5' or hexa[i]=='6' or hexa[i]=='9')
				b2+=2;

			if(hexa[i]=='7')
				b2+=3;
		}


		cout<<b1<<' '<<b2<<'\n';
	}


	return 0;
}