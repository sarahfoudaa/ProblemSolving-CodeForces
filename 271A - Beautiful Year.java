import java.util.Scanner;
 
 
public class Yearb {
 
    public static void main(String[] args) {
        
         Scanner sc = new Scanner(System.in);
        int year=sc.nextInt();
        int []y = new int [4];
        int flag=0;
        
        year ++;
        
        
        while(flag==0){
            for (int i = 0 ; i<4;i++){
         
            y[i]=(year%10);
            year=(year-y[i])/10;
        }
            
        
            if((y[0]==y[1])||(y[0]==y[2])||(y[0]==y[3])||(y[1]==y[2])||(y[1]==y[3])||(y[2]==y[3])){
            
                 year=(y[0]+y[1]*10+y[2]*100+y[3]*1000)+1;
                flag =0;
            }
            else {
                year=(y[0]+y[1]*10+y[2]*100+y[3]*1000);
                System.out.println(year);
                
            flag =1;}
        }
    }
    
}