import java.util.Scanner;

public class Ejercicio11 
{

	public static void main(String[] args) 
	{
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Ingresa el codigo ASCII: ");
		int ascii = teclado.nextInt();
		
		char caracter = (char)ascii;
		
		System.out.println("El codigo es " + caracter);
	}

}
