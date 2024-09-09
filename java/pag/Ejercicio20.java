package fuentes;

import java.util.Scanner;

public class Ejercicio20 {
	
	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		System.out.print("Dia de la semana (mayuscula primer letra, resto minuscula): ");
		String dia = teclado.nextLine();
		
		switch(dia)
		{
			case "Domingo":
			{
				System.out.println("Dia NO Laborable.");
				break;
			}
			
			case "Lunes":
			{
				System.out.println("Dia Laborable.");
				break;
			}
			
			case "Martes":
			{
				System.out.println("Dia Laborable.");
				break;
			}
			
			case "Miercoles":
			{
				System.out.println("Dia Laborable.");
				break;
			}
			
			case "Jueves":
			{
				System.out.println("Dia Laborable.");
				break;
			}
			
			case "Viernes":
			{
				System.out.println("Dia Laborable.");
				break;
			}
			
			case "Sabado":
			{
				System.out.println("Dia NO Laborable.");
				break;
			}
			
			default:
			{
				System.out.println("Mal ingresado");
				break;
			}
		}
	}

}
