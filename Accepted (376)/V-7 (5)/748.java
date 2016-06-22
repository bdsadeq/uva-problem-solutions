//Exponentiation #748
//Sadeq


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigDecimal;
import java.util.Scanner;


public class uva {

	public static void main(String[] args) throws IOException {
		
		Scanner scan = new Scanner(System.in);
        BigDecimal B1,SUM = null,temp;
        int B2;
        while(scan.hasNext()){
        	
            B1=new BigDecimal(scan.next());
            B2=scan.nextInt();
            SUM=B1.pow(B2);
            
            String out=SUM.stripTrailingZeros().toPlainString();
            if(out.charAt(0)=='0')
            {
                out=out.substring(1,out.length());
            }
            
        	System.out.println(out);

        }
        System.exit(0);
	}

}
