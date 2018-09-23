/*489 - Hangman Judge*/

#include <bits/stdc++.h>
using namespace std;

int main(){


	int caso, i;
	int arr[26];

	while(cin>>caso){

		if(caso==-1){
			break;
		}

		cout<<"Round "<<caso<<'\n';
		for (i = 0; i < 26; i++)
		{
			arr[i]=0;
		}

		int tam=0, t=0, pos, no=0, coin=0, tot=0, ctrl=0;

		string word;
		string answer;

		cin>>word;
		cin>>answer;

		tam = word.length();
		t= answer.length();

		for (i = 0; i < tam; ++i)
		{
			pos= (int)word[i];
			pos-= 97;
			arr[pos]=1;
		}

		for (i = 0; i < 26; ++i)
		{
			if(arr[i]==1){
				tot++;
			}
		}

		for (i = 0; i < t; ++i)
		{

			pos=(int)answer[i];
			pos-=97;
			if(arr[pos]==1 || arr[pos]==2){
				arr[pos]=2;
			}
			if(arr[pos]==0){
				arr[pos]=3;
				ctrl++;
			}
			if(ctrl==7){
				break;
			}
		}

		for (i = 0; i < 26; ++i)
		{
			if(arr[i]==2){
				coin++;
			}
		}

		if(tot==coin){
			cout<<"You win."<<'\n';
		}
		else if(coin<tot and ctrl<7){
			cout<<"You chickened out."<<'\n';
		}
		else if(coin<tot and ctrl >= 7){
			cout<<"You lose."<<'\n';
		}
		
		
	}
	return 0;
}