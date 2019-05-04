/*673 - Parentheses Balance*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin >> casos;

	string linea;
	cin.ignore();

	while(casos--){

		getline(cin, linea);

		stack <char> parsers;
		
		bool answer = true;

		for (int i = 0; i < linea.size(); ++i)
		{
			if(linea[i] == '(' or linea[i] == '[')
				parsers.push(linea[i]);
			else{

				if(linea[i] == ')'){
					if( ! parsers.empty()){
						
						if(parsers.top() == '(')
							parsers.pop();

						else{
							answer = false;
							break;
						}
					}
					else{
						answer = false;
						break;
					}
				}

				if(linea[i] == ']'){
					if( ! parsers.empty()){
						
						if(parsers.top() == '[')
							parsers.pop();

						else{
							answer = false;
							break;
						}
					}
					else{
						answer = false;
						break;
					}
				}		

			}
		}

		if(!parsers.empty())
			answer = false;

		if(answer)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		
	}

	return 0;
}