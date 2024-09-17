package fuentes;

import java.util.Scanner;

public class Ejercicio36 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Ingresa la frase: ");
		String a = teclado.nextLine();
		
		String b = a.substring(3, 4 + 1); // empieza desde el 0, y tenes que sumar uno a la 2da
		
		System.out.println("Es: " + b);
	}

}
