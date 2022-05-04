import java.util.Scanner;
 
public class Drinks {
 
    public static void main(String[] args) { 
        Scanner sc =  new Scanner (System.in);
        int x = sc.nextInt();
        int []y = new int [x];
        double sum = 0 ; 
        for (int i = 0 ; i < x ; i ++){
        
            y[i]=sc.nextInt();
            sum=sum+y[i];
        }
        System.out.println(sum/x);
    }
    
}