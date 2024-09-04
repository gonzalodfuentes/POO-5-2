import java.util.Scanner;

public class Ejercicio13 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Ingresa el precio del producto: ");
		float precio = teclado.nextFloat();
		
		float IVA = 21 * 100 / precio;
		
		float producto = precio + IVA;
		
		System.out.println("El precio con IVA es de $" + producto + " pesos.");
	}

}
