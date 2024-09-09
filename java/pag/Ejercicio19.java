package fuentes;

import java.util.Scanner;

public class Ejercicio19 {

	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		String clave = "abecedario";
		
		boolean c = false;
		int a = 0;
		
		while(c == false)
		{
			a++;
			
			System.out.print("Ingresa la contrasena: ");
			String contra = teclado.nextLine();
				
			if(contra.equals(clave)) // Se usa .equals para saber si 2 strings son iguales
			{
				c = true;
			}
			
			if(a == 3 && c == false)
			{
				System.out.println("Perdon. No podes ingresar");
				System.exit(0);
			}
			else if(a < 3 && c == false)
			{
				System.out.println("Intenta de nuevo.");
			}
		}
		
		System.out.println("Contrasena correcta. Enhorabuena!");
	}

}
