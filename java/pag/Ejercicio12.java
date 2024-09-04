import java.util.Scanner;

public class Ejercicio12
{

	public static void main(String[] args) 
	{
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Ingresa un caracter: ");
		char caracter = teclado.next().charAt(0);
		
		int ascii = (int) caracter;
		
		System.out.println("El codigo es " + ascii);
	}

}
