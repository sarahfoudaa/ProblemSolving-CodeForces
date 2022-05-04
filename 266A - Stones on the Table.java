import java.util.Scanner;
 
 
public class StonesOnTheTable {
 
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);
       int n=sc.nextInt();;
       String s=sc.next();
       char []b = s.toCharArray();
        int c=0;
        for (int i = 1 ; i < b.length ; i++){
            
            if (b[i-1]==b[i]){
            
                c++;
            }
        }
        System.out.println(c);
    }
}