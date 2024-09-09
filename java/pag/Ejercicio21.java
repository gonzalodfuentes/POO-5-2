package fuentes;

import java.util.Scanner;

public class Ejercicio21 {

	public static void main(String[] args) {
		 
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Ingresa el primero numero: ");
        int n1 = teclado.nextInt();
 
        System.out.print("Ingresa el segundo numero: ");
        int n2 = teclado.nextInt();
 
        for (int i = 0; i < 10; i++)
        {
            int nRandom = (int) Math.floor(Math.random() * (n1 - n2) + n2);
            System.out.println(nRandom);
        }
    }

}
