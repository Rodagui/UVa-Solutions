/*444 - Encoder and Decoder*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string linea;
	while(getline(cin,linea)){

		if(linea[0]>47 and linea[0]<58){
			
			string n="";
			int c;

			for (int i = linea.size()-1; i >0 ; i--)
			{
				n+=linea[i];
				n+=linea[i-1];
				c=stoi(n);

				if(c<=12){
					n+=linea[i-2];
					i--;
					c=stoi(n);

				}
				i--;
				cout<<(char)c;
				n="";
			}
			cout<<endl;

		}
		else{
			for (int i = linea.size()-1; i >=0 ; i--)
			{
				char c=linea[i];
				int ascii = (int)c;
				string num;
				num=to_string(ascii);

				for (int j= num.size()-1; j>=0 ; j--)
				{
					cout<<num[j];
				}

			}
			cout<<endl;
		}

	}
	return 0;
}