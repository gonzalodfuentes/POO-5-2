package fuentes;

import java.util.Scanner;

public class Ejercicio28 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.println("CalculadoraPolacaInversaApp");
		System.out.println("");
		
		System.out.println("|1 | 2 | 3|");
		System.out.println("|--|---|--|");
		System.out.println("|4 | 5 | 6|");
		System.out.println("|--|---|--|");
		System.out.println("|7 | 8 | 9|");
		
		System.out.println("");
		
		System.out.print("N: ");
		int a = teclado.nextInt();
		teclado.nextLine();
		
		System.out.println("");
		
		System.out.print("O: ");
		String o = teclado.nextLine();
		
		System.out.println("");
		
		System.out.print("N: ");
		int b = teclado.nextInt();
		
		System.out.println("");
		
		int c = 0;
		
		switch(o)
		{
			case "+":
			{
				c = a + b;
				break;
			}
			
			case "-":
			{
				c = a - b;
				break;
			}
			
			case "*":
			{
				c = a * b;
				break;
			}
			
			case "/":
			{
				c = a / b;
				break;
			}
			
			case "^":
			{
				c = a * a;

				for(int i = 0; i < b - 2; i++)
				{
						c *= a;
				}
				break;
			}
			
			case "%":
			{
				c = a % b;
			}
			
			default:
			{
				System.out.println("Operacion mal ingresada. Adios.");
				System.exit(0);
			}
		}
		
		System.out.println("=");
		System.out.println("");
		System.out.println(c);
	}

}
