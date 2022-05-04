import java.util.Scanner;
 
 
public class Sordcapitalization {
 
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String wo = sc.nextLine();
        char []w=wo.toCharArray();
        String x = wo.substring(0,1).toUpperCase();
        System.out.print(x);
        
        for (int i = 1 ; i < w.length ; i++){
        
            System.out.print(w[i]);
        }
    }
    
}