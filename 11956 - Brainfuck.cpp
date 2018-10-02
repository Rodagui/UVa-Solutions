/*11956 - Brainfuck*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int casos, k=1;

	cin>>casos;

	while(casos--){

		string ord;
		cin>>ord;

		vector<int> decimal(100, 0);
		int i, pos=0;

		for (i = 0; i < ord.length(); ++i)
		{
			if(ord[i]=='<'){
				pos--;
				if(pos<0)
					pos=99;
			}

			if(ord[i]=='>'){
				pos++;
				if(pos>99)
					pos=0;
			}

			if(ord[i]=='+'){
				decimal[pos]++;
				if(decimal[pos]>255)
					decimal[pos]=0;
			}
			
			if(ord[i]=='-'){
				decimal[pos]--;
				if(decimal[pos]<0)
					decimal[pos]=255;
			}


		}

		cout.unsetf(ios::hex | ios::uppercase);
		cout<<"Case "<<k<<":";
		cout.setf(ios::hex, ios::basefield);
		for (i = 0; i < 100; i++)
		{
			cout<<' ';
			if(decimal[i]<16)
				cout<<0;
			
			/*setw(2) es para decirle que el tamaño del numero debera usar 2 digitos y
			en caso de que no sea de 2 digitos se llenará de 0's con setfill('0')

			cout << setw(2) << setfill('0') << uppercase << decimal[i];*/
			
			cout<<uppercase<<hex<<decimal[i];
		}

		cout<<'\n';


		k++;
	}


	return 0;
}