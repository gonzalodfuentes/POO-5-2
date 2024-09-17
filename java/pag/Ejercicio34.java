package fuentes;

import java.util.Scanner;

public class Ejercicio34 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Ingresa la frase: ");
		String a = teclado.nextLine();
		
		int longitud = a.length(); // Calcula la longitud
		
		System.out.println("La longitud de la frase es: " + longitud);
	}

}
