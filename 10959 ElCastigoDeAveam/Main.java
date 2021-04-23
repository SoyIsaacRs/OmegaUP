import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int size1, size2;
    int [][] array;
    Scanner scanner = new Scanner(System.in);
    try { size1 = scanner.nextInt();size2 = scanner.nextInt(); }catch (Exception e){ size1 = 0;size2 = 0;}
    array = fillArray(scanner,size1,size2);

    for (int n: getFrecuency(array)) {
      if (n!=0){
        System.out.print(n + " ");
      }
    }
    System.out.print("\n");
  }

  public static int[] getFrecuency(int[][] array){
    int[] frecuency = new int[getMax(array)+1];
    for (int[] number1: array) {
      for (int number2:number1) {
        frecuency[number2] += 1;
      }
    }
    return frecuency;
  }

  public static int[][] fillArray(Scanner scanner, int size1,int size2){
    int [][] array = new int[size1][size2];
    for (int i = 0; i < array.length; i++) {
      for (int j = 0; j < array[i].length; j++) {
        int numero = scanner.nextInt();
        array[i][j] = numero;
      }
    }
    return array;
  }

  public static int getMax(int[][] array){
    int max = array[0][0];
    for (int[] number1: array) {
      for (int number2:number1){
        if (number2 > max){
          max = number2;
        }
      }
    }
    return max;
  }
}