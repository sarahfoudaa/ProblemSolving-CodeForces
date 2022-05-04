import java.util.Scanner;
 
 
public class PanoramixSPrediction {
 
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
      int []p ={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51};
      int x = sc.nextInt();
      int y = sc.nextInt();
      boolean c=false ;
      for(int i = 0 ; i <p.length ; i ++){
      
          if (x==p[i]){
          
              if(y==p[i+1]){
              
                  c= true;
              }
          }
          
          
      }
      if(c==true){
        System.out.println("YES");
    }
      else{
      
          System.out.println("NO");
      }
    }
    
}