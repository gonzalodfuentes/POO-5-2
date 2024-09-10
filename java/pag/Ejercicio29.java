package fuentes;

import java.util.Scanner;

public class Ejercicio29 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		int a = 0;
		
		while(a < 1)
		{
			System.out.print("Ingresa un numero: ");
			a = teclado.nextInt();
			
			if(a < 1)
			{
				System.out.println("Mal ingresado (menor de 1), vamos de nuevo.");
			}
		}
		
		int b = 0;
		
		System.out.println("");
		System.out.println("Sumando: ");
		
		for(int i = 1; i <= a; i++)
		{
			b = b + i;
			
			if(i == a)
			{
				System.out.print(i);
			}
			else
			{
				System.out.print(i + " + ");
			}
		}
		
		System.out.println("");
		System.out.println("Da = " + b);
	}

}
