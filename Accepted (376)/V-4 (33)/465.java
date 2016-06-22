//Overflow #465
//Sadeq


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.*;

public class Main {

	public static void main(String[] args) throws IOException {

		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        BigInteger B1,B2,SUM = null,temp;
        while((line = in.readLine()) != null){
        	
        	System.out.println(line);
        	
        	line=line.trim();
            String words[] = line.split(" ");
            
            
            B1=new BigInteger(words[0]);
            B2=new BigInteger(words[2]);
            SUM=new BigInteger(words[0]);
            temp=new BigInteger("2147483647");
            
            if(words[1].equals("+"))
            {
            	SUM=B1.add(B2);
            }
            else if(words[1].equals("*"))
            {
            	SUM=B1.multiply(B2);
            }
            
//            SUM=B1.add(B2);
//            System.out.println(words[1]);
            
            if(B1.compareTo(temp)==1)
            {
            	System.out.println("first number too big");
            }
            
            if(B2.compareTo(temp)==1)
            {
            	System.out.println("second number too big");
            }
            
            if(SUM.compareTo(temp)==1)
            {
            	System.out.println("result too big");
            }
            
//            System.out.println(B1);
//            System.out.println(B2);
//            System.out.println(SUM);
        }
        System.exit(0);
	}
}
