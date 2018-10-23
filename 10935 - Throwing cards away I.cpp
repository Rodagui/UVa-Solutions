#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(){
	
	int num;
		while(cin>>num and num){

		queue <int> cola;

			for(int i=1; i<=num; i++){
				cola.push(i);
			}

			if(cola.size()==1){
				
				cout<<"Discarded cards:\n";
				cout<<"Remaining card: "<<cola.front()<<"\n";
			}
			else{

				cout<<"Discarded cards: ";
				
				int band=1;

				while(cola.size()>1){
					int x=cola.front();
					if(band>1)
						cout<<", ";
					cout<<x;
					cola.pop();
					x=cola.front();
					cola.pop();
					cola.push(x);
					band++;
				}

				cout<<"\n";
				cout<<"Remaining card: "<<cola.front()<<"\n";
			}
			

		}
	return 0;
}