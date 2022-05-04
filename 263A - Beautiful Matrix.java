import java.util.Scanner;
public class BeautifulMatrix {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = 5;
        int col = 5;
        int [][]x = new int [row][col];
      
        for (int i = 0; i < row; i++){
          for (int j = 0; j < col; j++){
              x[i][j] = sc.nextInt();
          }
        }
        for (int i = 0; i < row; i++){
          for (int j = 0; j < col; j++){
              if(x[i][j]==1){
                int dif1 = 2-i;
                int abs1= Math.abs(dif1);
                int dif2 = 2-j;
                int abs2= Math.abs(dif2);
                System.out.println(abs1+abs2);
           
              }
          }
        }
    }
    
}