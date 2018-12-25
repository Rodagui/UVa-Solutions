/*10415 - Eb Alto Saxophone Player*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	int casos;

	cin>>casos;

	cin.ignore();

	vector <int> clave(10);
	vector <int> cta(10);
	vector <int> aux(10);

	string notas;
	while(casos--){
		getline(cin,notas);

		for (int i = 0; i < notas.size(); ++i)
		{
			if(notas[i]=='c'){
				clave={0,1,1,1,0,0,1,1,1,1};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}


			if(notas[i]=='d'){
				clave={0,1,1,1,0,0,1,1,1,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}


			if(notas[i]=='e'){
				clave={0,1,1,1,0,0,1,1,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='f'){
				clave={0,1,1,1,0,0,1,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}


			if(notas[i]=='g'){
				clave={0,1,1,1,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}


			if(notas[i]=='a'){
				clave={0,1,1,0,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}


			if(notas[i]=='b'){
				clave={0,1,0,0,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='C'){
				clave={0,0,1,0,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}


			if(notas[i]=='D'){
				clave={1,1,1,1,0,0,1,1,1,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='E'){
				clave={1,1,1,1,0,0,1,1,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='F'){
				clave={1,1,1,1,0,0,1,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='G'){
				clave={1,1,1,1,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='A'){
				clave={1,1,1,0,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}

			if(notas[i]=='B'){
				clave={1,1,0,0,0,0,0,0,0,0};

				for (int i = 0; i < 10; ++i)
				{
					if(aux[i]==0 and clave[i]==1){
						cta[i]++;
						aux[i]=1;
					}	
					if(aux[i]==1 and clave[i]==0)
						aux[i]=0;
				}
			}






		}

		for (int i = 0; i < 10; ++i)
		{
			if (i>0)
				cout<<' ';
			aux[i]=0;
			cout<<cta[i];
			cta[i]=0;
		}


		cout<<endl;
	}

	return 0;
}