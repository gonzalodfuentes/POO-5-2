package fuentes;

import java.util.Scanner;

public class Ejercicio35 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("NO DIFERENCIO MAYUS Y MINUS.");
		
		System.out.print("Primera palabra: ");
		String a = teclado.nextLine().toLowerCase();
		
		System.out.print("Segunda palabra: ");
		String b = teclado.nextLine().toLowerCase();
		
		if(a.equals(b))
		{
			System.out.println("Son iguales.");
		}
		else
		{
			System.out.println("Son diferentes.");
		}

	}

}
