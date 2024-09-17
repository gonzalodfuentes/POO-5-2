package fuentes;

import java.util.Scanner;

public class Ejercicio30 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Ingresa el numero: ");
		int a = teclado.nextInt();
		
		while(a != -1)
		{
			System.out.println("Muy bien, sigamos...");
			
			System.out.print("Ingresa el numero: ");
			a = teclado.nextInt();
		}
		
		System.out.println("Perfecto, fin.");
	}

}
