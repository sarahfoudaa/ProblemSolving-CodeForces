import java.util.Scanner;
 
public class Cupboards {
 
   
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        int []x = new int [n];
        int []y = new int [n];
        int cx = 0 ,ox=0, cy=0, oy=0;
        int fx=0 ,fy=0;
        for (int i = 0 ; i < n ; i++){
        
            x[i]=sc.nextInt();
            y[i]=sc.nextInt();
            
        }
        for (int i = 0 ; i < n ; i++){
        
            if (x[i]==0){cx++;}
            else if (x[i]==1){ox++;}
            
            if (y[i]==0){cy++;}
            else if (y[i]==1){oy++;}
        }
        if (cx<ox){fx=cx;}
        else if (ox<=cx){fx=ox;}
        
         if (cy<oy){fy=cy;}
        else if (oy<=cy){fy=oy;}
        
        System.out.println(fx+fy);
    
    
    }
    
}