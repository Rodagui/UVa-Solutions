/*424-Integer Inquiry
Cambiar el nombre del archivo a "Main"*/

import java.util.Scanner;
import java.math.*;

public class Main{
	public static void main(String[] args){
	
		Scanner in= new Scanner(System.in);
		BigInteger x, tot;
		tot = BigInteger.ZERO;

		while(in.hasNextBigInteger()){
			x=in.nextBigInteger();
			/*if(x.equals(BigInteger.valueOf(5))*/
			
			if(x.equals(BigInteger.ZERO)){
				break;
			}

			tot = tot.add(x);		
		}

		System.out.println(tot);

	}


}