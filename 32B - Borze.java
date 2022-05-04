import java.util.Scanner;
public class Bronze {
 
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       String s ;
        s = sc.next();
        char []a = s.toCharArray();
        for( int i = 0 ; i< a.length;i++){
         
            if(a[i]=='.'){
            
               System.out.print("0");
               
            }
            else  if (a[i]=='-'){
                
                if(a[i+1]=='.'){
                
                   System.out.print("1");
                } 
                else {
                System.out.print("2");
                }
                i++;
            }
            
        }
    }
}
 