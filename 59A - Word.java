import java.util.Scanner;
 
public class Word {
 
  
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String w = sc.nextLine();
        String wor;
        char []wo = w.toCharArray();
        int u=0 , l =0;
          //if(wo[0].isLowerCase){}
       for (int i = 0 ; i < wo.length; i++){
       
           if(Character.isLowerCase(wo[i])){
               l++;
           }
           else if (Character.isUpperCase(wo[i])){
       
               u++;
            }
       
        }
       if (l<u){
           w=w.toUpperCase();
       
       }
       else if (u<l){
       
           w=w.toLowerCase();
       }
       else if (u==l){
            w=w.toLowerCase();
       
       }
        System.out.println(w);
       
    
}
}