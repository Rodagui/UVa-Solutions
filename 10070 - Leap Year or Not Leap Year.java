/*10070 - Leap Year or Not Leap Year and ...r*/

import java.util.Scanner;
import java.math.*;

public class Main{
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		BigInteger cua, cien, quince, cinc, ctro, m, mod, num;
		int leap, hulu, bulu, k=1;

		while(in.hasNextBigInteger()){

			if(k>1){
				System.out.print("\n");
			}

			cua = BigInteger.valueOf(4);
			cien = BigInteger.valueOf(100);
			quince = BigInteger.valueOf(15);
			cinc = BigInteger.valueOf(55);
			ctro = BigInteger.valueOf(400);
			
			num = in.nextBigInteger();

			leap=0;
			hulu=0;
			bulu=0;

			m = num.mod(cua);
			mod = num.mod(cien);

			if(m.equals(BigInteger.ZERO) && !(mod.equals(BigInteger.ZERO))){
				leap=1;
			}
			 mod = num.mod(ctro);

			 if(mod.equals(BigInteger.ZERO)){
			 	leap=1;
			 }

			 mod = num.mod(quince);

			 if(mod.equals(BigInteger.ZERO)){
			 	hulu=1;
			 }

			 mod = num.mod(cinc);

			 if(mod.equals(BigInteger.ZERO) && leap==1){
			 	bulu =1;
			 }

			 if(leap==0 && hulu==0 && bulu==0){
				System.out.println("This is an ordinary year.");
				}

			 if (leap==1) {
			 	System.out.println("This is leap year.");
			 }

			if(hulu==1){
				System.out.println("This is huluculu festival year.");
			}

			if(bulu==1){
				System.out.println("This is bulukulu festival year.");
			}
			k++;
		}
		
		
	
	}


}