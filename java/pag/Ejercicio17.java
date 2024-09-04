import java.util.Scanner;

public class Ejercicio17 {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Número de ventas a ingresar: ");
        int ventas = teclado.nextInt();
        
        int[] valor = new int[ventas];
        
        System.out.println();
        
        for (int i = 0; i < ventas; i++) {
            System.out.print("Valor de la venta " + (i + 1) + ": ");
            valor[i] = teclado.nextInt();
        }
 
    }
}
