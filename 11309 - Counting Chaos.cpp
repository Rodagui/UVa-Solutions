/*11309 - Counting Chaos*/

#include <bits/stdc++.h>
 using namespace std;

 int main(){

 	int casos;
 	cin>>casos;

 	while(casos--)
 	{
 		int H, M, hra, min, mod, div, aux;
 		scanf("%d:%d", &H, &M);
 		
 		if(H==0 and M<9)
 		{
 			hra=0;
 			min=M+1;
 		}
 		else if(H==0 and M<55)
 		{
 			hra=0;
 			mod=M%10;
 			div=M/10;

 			if(mod<div)
 				min=M-mod+div;
 			else
 				min=M-mod+div+11;
 		}
 		else if(H==0 and M>=55){
 			hra=1;
 			min=1;
 		}

 		if(H!=0 and H<=9)
 		{
 			mod=M%10;
 			if(mod<H)
 			{
 				hra=H;
 				min=M-mod+H;
 			}
 			else
 			{
 				div=M/10;
 				min=((div+1)*10)+H;
 				if(min>59)
 				{
 					hra=H+1;
 					if(hra<10){
 						min=hra;
 					}
 					else{

 					min =((hra%10)*10)+(hra/10);
 					}
 				}
 			}

 		}
 		else if(H>=10 and H<15)
 		{
 			div=H/10;
 			mod=H%10;
 			aux= (mod*10)+div;

 			if(M<aux and aux<59){
 				hra=H;
 				min=aux;
 			}
 			else{
 				hra=H+1;
 				mod=hra%10;
 				div=hra/10;
 				min= (mod*10)+div;
 			}
 		}
 		else if((H>=10 and H<=15 and M<51))
 		{
 			div=H/10;
 			mod=H%10;
 			aux= (mod*10)+div;

 			if(M<aux and aux<59){
 				hra=H;
 				min=aux;
 			}
 			else{
 				hra=H+1;
 				mod=hra%10;
 				div=hra/10;
 				min= (mod*10)+div;
 			}

 		}
 		else if(H==15 and M>=51){
 			hra=20;
 			min=2;
 		}
 		else if(H>15 and H<20){
 			min=2;
 			hra=20;
 		}
 		else if(H>=20 and H<23){
 			div=H/10;
 			mod=H%10;
 			aux= (mod*10)+div;

 			if(M<aux and aux<59){
 				hra=H;
 				min=aux;
 			}
 			else{
 				hra=H+1;
 				mod=hra%10;
 				div=hra/10;
 				min= (mod*10)+div;
 			}
 		}

 		else if(H==23 and M<32)
 		{
 			hra=23;
 			min=32;
 		}
 		else if(H==23 and M>=32)
 		{
 			hra=0;
 			min=0;
 		}


 		if(hra<10)
 		{
 			cout<<'0'<<hra<<':';
 		}
 		else
 		{
 			cout<<hra<<':';
 		}

 		if(min<10){
 			cout<<'0'<<min<<'\n';
 		}
 		else{
 			cout<<min<<'\n';
 		}

 	}


 return 0;
 }