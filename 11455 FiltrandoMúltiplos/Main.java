import java.util.ArrayList;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int size,multiple;
    ArrayList<Integer> arrayList1;
    Scanner scanner = new Scanner(System.in);
    try { size = scanner.nextInt(); }catch (Exception e){ size = 0; }
    arrayList1 = fillArrayList(scanner,size);
    try { multiple = scanner.nextInt(); }catch (Exception e){ multiple = 0; }
    System.out.println(getMultiple(arrayList1,multiple));
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

  public static String getMultiple(ArrayList<Integer> arrayList,Integer multiple){
    String result = "";
    for (int num: arrayList) {
      if (num % multiple == 0){
        result += num;
      }else {
        result += "X";
      }
      result += " ";
    }
    return result;
  }
}
