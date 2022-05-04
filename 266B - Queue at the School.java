import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
 
        int n= sc.nextInt();
        int t =sc.nextInt();
        String s= sc.next();
        char []a = s.toCharArray();
 
        for(int j = 0 ; j < t ; j++){
            for(int i =1 ;i < n ; i++){
 
                if(a[i]=='G' && a[i-1]=='B'){
 
                    char temp;
                    temp = a[i];
                    a[i]=a[i-1];
                    a[i-1]=temp;
                    i++;
 
                }
 
            }
        }
        System.out.println(a);
    }
}