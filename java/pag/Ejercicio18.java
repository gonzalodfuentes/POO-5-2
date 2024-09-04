import java.util.Scanner;

public class Ejercicio18 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		int a;
		
		do
		{
			System.out.print("Ingresa un numero: ");
			a = teclado.nextInt();
		}
		while(a <= 0);
		
		System.out.println("El numero " + a + " es mayor a 0");

	}

}
