package fuentes;

import java.util.Scanner;

public class Ejercicio22 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
			
		int n;
		int i;
		int a = 0;
		
		do
		{
			System.out.print("Ingresa un numero: ");
			n = teclado.nextInt();
		
			if(n < 0)
			{
				System.out.println("Es negativo, vamos de nuevo.");
			}
		}
		while(n < 0);
		
		for(i = 0; n > 0; i++)
		{
			n = n / 10;
		}
		
		System.out.println("Este numero tiene " + i + " cifras");
	}

}
