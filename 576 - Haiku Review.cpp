/*576 - Haiku Review*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	string linea;

	

	while(getline(cin, linea)){

		if(linea == "e/o/i")
			break;

		vector <int> ans(3, 0);
		int syllables = 0;
		int line = 0;
		bool antVowel = false;

		for (int i = 0; i < linea.size(); ++i)
		{
			
			if(linea[i] == 'a' or linea[i] == 'e' or linea[i] == 'i' or linea[i] == 'o' or linea[i] == 'u' or linea[i] == 'y'){
				
				if(!antVowel)
					syllables++;
				antVowel = true;

			}else{
				antVowel = false;
			}

			if(linea[i] == '/'){
				ans[line] = syllables;
				syllables = 0;
				line++;
			}

		}

		ans[line] = syllables;


		if(ans[0] == 5 and ans[1] == 7 and ans[2] == 5)
			cout << "Y\n";
		else if(ans[0] != 5)
			cout << "1\n";
		else if(ans[1] != 7)
			cout << "2\n";
		else if(ans[2] != 5)
			cout << "3\n";
		
	}
	
	return 0;
}