import java.util.Scanner;
public class NearlyLuckyNumber {
 
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String x = sc.nextLine();
        char []y = x.toCharArray();
        int s=0 ,m=0 ,t=0,b=0;
        for (int i = 0 ;i <y.length;i++){
         
             if(y[i]=='4' || y[i]=='7'){
                 s++;
                //break;
             }
             else if(y[i]!='4'){
                 t++;
             
             }
             else if (y[i]!='7'){
             b++;
             }
                 
             else {
                 m++;
             }
             
             
       
          }
        if (s==4 || s==7 ){
             System.out.println("YES");
             
        }
        else  {
              System.out.println("NO");
        }
}
}