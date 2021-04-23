import java.util.ArrayList;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int size;
    ArrayList<Integer> arrayList;
    Scanner scanner = new Scanner(System.in);
    try { size = scanner.nextInt(); }catch (Exception e){ size = 0; }
    arrayList = fillArrayList(scanner,size);
    System.out.print(getMin(arrayList)+" "+getMax(arrayList));
  }

  public static ArrayList<Integer> fillArrayList(Scanner scanner, int size){
    ArrayList<Integer> arrayFill = new ArrayList<>();
    Integer numero;
    for (int i = 0; i < size; i++){
      numero = scanner.nextInt();
      arrayFill.add(numero);
    }
    return arrayFill;
  }

  public static int getMax(ArrayList<Integer> arrayList){
    int max = arrayList.get(0);
    for (int num: arrayList){
      if (num > max){
        max = num;
      }
    }
    return max;
  }

  public static int getMin(ArrayList<Integer> arrayList){
    int min = arrayList.get(0);
    for (int num: arrayList){
      if (num < min){
        min = num;
      }
    }
    return min;
  }
}