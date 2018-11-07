/*245 - Uncompress*/
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string linea;
	deque <string> dq;

	while(getline(cin,linea))
	{
		if(linea=="0")
			break;

		string palabra="";
		string num="";
		int n;
		string aux;

		for (int i = 0; i < linea.size(); ++i)
		{
			int cod = (int)linea[i];
			if(isalpha(cod)) 
			{
				if(num.size()>0)
				{
					n=stoi(num);
					num="";
					cout<<dq[n-1];
					aux=dq[n-1];
					dq.erase(dq.begin()+n-1);
					dq.push_front(aux);
					
				}

				palabra+=linea[i];
			}
			//  es otra opcion
			else if(isdigit(cod))
			{
				if(palabra.size()>0)
					dq.push_front(palabra);

				cout<<palabra;
				palabra="";
				num+=linea[i];
			}
			else{

				if(num.size()>0){
					n=stoi(num);
					num="";
					cout<<dq[n-1];
					aux=dq[n-1];
						dq.erase(dq.begin()+(n-1));
						dq.push_front(aux);
				}

				if(palabra.size()>0){
					dq.push_front(palabra);
				}					
				cout<<palabra;
				palabra="";
				cout<<linea[i];
			}
		}

		if(num.size()>0){
			n=stoi(num);
			num="";
			cout<<dq[n-1];
			aux=dq[n-1];
			dq.erase(dq.begin()+n-1);
			dq.push_front(aux);
					
		}

		if(palabra.size()>0){
			dq.push_front(palabra);
			cout<<palabra;
			palabra="";
		}

		cout<<'\n';
	}

	return 0;
}