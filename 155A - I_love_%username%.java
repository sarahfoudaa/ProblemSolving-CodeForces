import java.util.Scanner;
 
public class I_love_Username {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int x =sc.nextInt();
        int []y= new int [x];
        
        for (int i = 0 ; i < x ;i++){
        
            y[i]= sc.nextInt();
        }
        int max= y[0] , min = y[0] , c = 0 ;
        for (int i= 0 ; i < x ; i++){
        
            if (y[i]<min){min=y[i]; c++;}
            else if(y[i]>max){max=y[i]; c++;}
        }
        System.out.println(c);
    }
    
}