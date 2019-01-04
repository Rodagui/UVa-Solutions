/*11713 - Abstract Names*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	int casos;
	cin>>casos;
	cin.ignore();
	while(casos--){
		string word1;
		string word2;
		getline(cin,word1);
		getline(cin, word2);

		if(word2.size()!= word1.size()){
			cout<<"No\n";
			continue;
		}

		int n=0;

		for (int i = 0; i < word1.size(); ++i)
		{
			if(word1[i]!='a' and word1[i]!='e' and word1[i]!='i' and word1[i]!='o' and word1[i]!='u'){
				if(word1[i] != word2[i]){
					n=1;
					break;
				}
			}
			else{
				if(word2[i]!='a' and word2[i]!='e' and word2[i]!='i' and word2[i]!='o' and word2[i]!='u'){
						n=1;
						break;
					
				}
			}
		}

		if(n==1)
			cout<<"No\n";
		else
			cout<<"Yes\n";

	}

	return 0;
}