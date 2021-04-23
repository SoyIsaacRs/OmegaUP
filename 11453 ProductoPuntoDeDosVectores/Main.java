import java.util.ArrayList;
import java.util.Scanner;

public class Main{
  public static void main(String[] args) {
    int size;
    ArrayList<Integer> arrayList1,arrayList2;
    Scanner scanner = new Scanner(System.in);
    try {
      size = scanner.nextInt();
    }catch (Exception e){
      size = 0;
    }
    arrayList1 = fillArrayList(scanner,size);
    arrayList2 = fillArrayList(scanner,size);
    System.out.print(getCrossProduct(arrayList1,arrayList2));
  }
  public static ArrayList<Integer> fillArrayList(Scanner scanner,int size){
    ArrayList<Integer> arrayFill = new ArrayList<>();
    Integer numero;
    for (int i = 0; i < size; i++){
      numero = scanner.nextInt();
      arrayFill.add(numero);
    }
    return arrayFill;
  }
  public static Integer getCrossProduct(ArrayList<Integer> arrayList1,ArrayList<Integer> arrayList2){
    Integer suma = 0;
    for (int i = 0; i < arrayList1.size(); i++) {
      suma = suma + (arrayList1.get(i)*arrayList2.get(i));
    }
    return suma;
  }
}