import java.util.Scanner;
import java.math.BigInteger;
class Main {
    public static void main(String args[]){
        BigInteger n1,n2;
	Scanner sc = new Scanner(System.in);
        BigInteger m = BigInteger.valueOf(2);
        while(sc.hasNext())
        {
            n1=sc.nextBigInteger();
            BigInteger length = BigInteger.valueOf(String.valueOf(n1).length());
            System.out.println((length));
            BigInteger rem = length.mod(m);
            System.out.println(rem);
            n1 = n1.add(m);
             System.out.println(n1);
        }
    }
}
