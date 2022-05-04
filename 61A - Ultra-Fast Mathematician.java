import java.util.Scanner;
 
 
public class UltraFastMathematician {
 
    public static void main(String[] args) {
        
        Scanner sc = new Scanner (System.in);
        String x = sc.next();
        String y = sc.next();
        char []xx= x.toCharArray();
        char []yy= y.toCharArray();
        char []zz = new char [xx.length];
        for(int i =0 ; i < xx.length ; i++){
        
            if (xx[i]=='0' && yy[i]=='0'){
                zz[i]='0';
                //System.out.println("0");
            }
            else if (xx[i]=='1' && yy[i]=='1'){
            
                zz[i]='0';
                //System.out.println("0");
            }
            
            else if (xx[i]=='1' && yy[i]=='0'){
            
                zz[i]='1';
                //System.out.println("1");
            }
            else if (xx[i]=='0' && yy[i]=='1'){
            
                zz[i]='1';
               // System.out.println("1");
            }
        }
    
        for(int i =0 ; i < xx.length ; i++){
        
            System.out.print(zz[i]);
        }
        
    }
    
}