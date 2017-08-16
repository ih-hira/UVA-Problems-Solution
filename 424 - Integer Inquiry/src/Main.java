import java.util.Scanner;
import java.math.BigInteger;
class Main {
    public static void main(String args[]){
        BigInteger n;
	BigInteger sum = new BigInteger("0");
	Scanner sc = new Scanner(System.in);
        while(true)
        {
            n=sc.nextBigInteger();
            if(n.compareTo(BigInteger.valueOf(0))==0)break;
            sum=sum.add(n);
        }
        System.out.println(sum);
    }
}
