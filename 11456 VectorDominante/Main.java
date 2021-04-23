import java.util.ArrayList;
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    int size;
    Scanner scanner = new Scanner(System.in);
    try { size = scanner.nextInt(); }catch (Exception e){size = 0;}
    System.out.print(isDominantVector(fillArrayList(scanner,size),fillArrayList(scanner,size)));
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

  public static Integer isDominantVector(ArrayList<Integer> arrayList1, ArrayList<Integer> arrayList2){
    int resultado = 0;

    for (int i = 0; i < arrayList1.size(); i++) {
      if (arrayList1.get(i) > arrayList2.get(i)){
        resultado = 1;
      }else {
        resultado = 0;
        break;
      }
    }
    return resultado;
  }
}