#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string num;
	char c;
	int casos, i, j, tam, a ,b;

	cin>>casos;

	while(casos--)
	{
		cin>>num;
		tam = num.length();
		i=tam-2;
		j=tam-1;

		if(num=="4" or num=="1" or num=="78"){
			c='+';
		}
		else if(num[i]=='3' and num[j]=='5')
		{
			c='-';
		}
		else if(num[0]=='9' and num[j]=='4')
		{
			c= '*';
		}

		else {
			c= '?';
		}

		cout<<c<<'\n';
	}

	return 0;
}