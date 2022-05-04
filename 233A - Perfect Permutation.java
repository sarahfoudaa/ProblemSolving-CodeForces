import java.util.Scanner;
 
public class PerfectPermutation {
 
    public static void main(String[] args) {
       Scanner sc= new Scanner(System.in);
       int x= sc.nextInt();
       boolean c=true;
       int []y= new int [x];
      // int []z = new int [x];
       int temp;
       if (x%2!=0){
       
           c=false;
           
       }
       if(c==false){
       
           System.out.println(-1);
       }
       else {
        
           for(int i = 0 ; i <x;i++){
           
               y[i]=i+1;
           }
           for(int i =0 ; i < x ;i++){
           
               temp=y[i];//z[i]=y[i+1]
               y[i]=y[i+1];//z[i+1]=y[i]
               y[i+1]=temp;//
               i++;
               
           }
           for (int i = 0 ; i<x;i++){
       
           System.out.print(y[i]+" ");
       }
       }
    }
    
}