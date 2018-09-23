/*11879 - Multiple of 17
Cambiar el nombre del archivo a "Main"*/

import java.util.Scanner;
import java.math.*;

public class Main{
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		BigInteger div, mod, num;
		div = BigInteger.valueOf(17);

		while(in.hasNextBigInteger()){
			num = in.nextBigInteger();
			if(num.equals(BigInteger.ZERO)){
				break;
			}

			mod = num.mod(div);

			if(mod.equals(BigInteger.ZERO)){
				System.out.println("1");
			}
			else{
				System.out.println("0");
			}
		}
		
		
	
	}


}