/*11945 - Financial Management*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int casos, k=1;

	cin>>casos;

	while(casos--){

		double tot=0.0;
		double aux;
	
		for(int i=0; i<12; i++){
			cin>>aux;
			tot+=aux;
		}

		tot /= 12.00;
		string num, n="";
		num=to_string(tot);

		cout<<k<<" $";

		for (int i = 0; i < num.size(); ++i)
		{

			cout<<num[i];
			if(num[i+4]=='.')
				cout<<',';
			n+=num[i];
			if(num[i+2]=='.')
				break;
		}

		int m;
		m=stoi(n);
		m*=10;
		tot= tot - (double)m;
		cout<<fixed<<setprecision(2)<<tot<<'\n';

		k++;
		
	}

	return 0;
}