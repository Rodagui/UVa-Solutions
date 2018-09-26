/*11507 - Bender B. Rodríguez Problem*/
#include <iostream>
#include <vector>

using namespace std;

string coord(string actual, string mov);

int main(){
	
	int casos;
	string orden;
	string actual;

	while(cin>>casos and casos){
		cin.ignore();
		actual="+x";

		for(int i=1; i<casos; i++){
			cin>>orden;
			if(orden!="No")
			actual = coord(actual, orden);
		}
		cout<<actual<<'\n';
	}

	return 0;
}

string coord(string actual, string mov){

	if(actual=="+z" and (mov=="+y" or mov=="-y"))
		return "+z";

	if(actual=="+z" and mov=="+z")
		return "-x";

	if(actual=="+z" and mov=="-z")
		return "+x";

	if(actual=="-x" and mov=="+z")
		return "-z";

	if(actual=="-x" and mov=="-z")
		return "+z";

	if(actual=="-x" and mov=="+y")
		return "-y";
	
	if(actual=="-x" and mov=="-y")
		return "+y";
	
	if(actual=="-z" and mov=="+z")
		return "+x";

	if(actual=="-z" and mov=="-z")
		return "-x";

	if(actual=="-z" and (mov=="+y" or mov=="-y"))
		return "-z";

	if(actual=="+x" and mov=="+z")
		return "+z";

	if(actual=="+x" and mov=="-z")
		return "-z";

	if(actual=="+x" and mov=="+y")
		return "+y";

	if (actual=="+x" and mov=="-y")
		return "-y";

	if (actual=="+y" and (mov=="+z" or mov=="-z"))
		return "+y";

	if (actual=="+y" and mov=="-y")
		return "+x";

	if (actual=="+y" and mov=="+y")
		return "-x";

	if (actual=="-y" and (mov=="+z" or mov=="-z"))
		return "-y";

	if (actual=="-y" and mov=="+y")
		return "+x";
	if (actual=="-y" and mov=="-y")
		return "-x";

}