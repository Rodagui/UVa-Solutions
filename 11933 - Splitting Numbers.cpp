/*11933 - Splitting Numbers*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int num;

	while(cin>>num){

		if(num==0)
			break;

		string a;
		int flag, i, tam=0, n, mod, decia=0, b;
		n=num;
		flag=1;
		a="";
		string biin="";

		while(n>0){
			mod=n%2;
			biin+=to_string(mod);
			tam++;
			n /=2;
		}

		reverse(biin.begin(), biin.end());		

		for(i = tam-1; i>=0; i--){
			if(biin[i]=='1' and (flag%2)==1){
				a+='1'; 
				flag++;
			}
			else if(biin[i]=='1' and (flag%2)==0){
				a+='0';
				flag++;
			}
			else{
			 a+='0';
			}

		}

		int p=0;


		for(i=0; i<tam; i++){

			if(a[i]=='1'){
				p= pow(2, i);
				decia += p;
			}

		}


		b = num - decia;
		cout<<decia<<' '<<b<<'\n';


	}


	return 0;
}