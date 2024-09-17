package fuentes;

import java.util.Scanner;

public class Ejercicio33 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("Ingresa una frase: ");
		String a = teclado.nextLine();
		
		System.out.println("PASAR A MAYUSCULAS(1) O MINUSCULAS(2)?");
		int b = teclado.nextInt();
		
		if(b == 1)
		{
			System.out.println("La frase quedaria: " + a.toUpperCase()); // Pasa a mayusculas
		}
		else if(b == 2)
		{
			System.out.println("La frase quedaria: " + a.toLowerCase()); // Pasa a minusculas
		}
		else
		{
			System.out.println("Mal ingresado, adios.");
			System.exit(0);
		}
		
		System.out.println("Adios.");
	}

}
