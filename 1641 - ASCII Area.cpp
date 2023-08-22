/*1641 - ASCII Area*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int height, width;
	char caracter;
	bool abertura = false;
	float ans = 0.0;

	while(cin >> height >> width){

		ans = 0.0;

		abertura = false;

		for (int i = 0; i < height; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				cin >> caracter;

				if( caracter != '.' and abertura == false){
					abertura = true;
					ans += 0.5;
				} 
				
				else if(caracter != '.' and abertura == true){
					abertura = false;
					ans += 0.5;
				}
				
				else if(caracter == '.' and abertura == true)
					ans += 1.0;
				
			}
		}

		cout << ans << '\n';

	}

	return 0;
}