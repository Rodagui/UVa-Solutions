/*10106 - Product
Cambiart el nombre del archivo a "Main"*/
import java.util.Scanner;
import java.math.*;

public class Main{

	public static void main(String[] args){

		Scanner in=new Scanner(System.in);
		BigInteger x, y, multi;
		
		while(in.hasNextBigInteger()){
			x=in.nextBigInteger();
			y=in.nextBigInteger();
			multi = x.multiply(y);
			System.out.println(multi);
		}
	}


}