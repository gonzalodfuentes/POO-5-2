import java.util.Scanner;  // Importar la clase Scanner

public class Main
{
    public static void main(String[] args) 
    {
        Scanner teclado = new Scanner(System.in);  // Crear un objeto Scanner
        
        boolean primo = false;  // Iniciar primo en false

        do
        {
            primo = true;  // Asumir que el numero es primo
            
            System.out.print("Introduce un número: ");
            int numero = teclado.nextInt();  // Leer un número

            if (numero <= 1) {
                primo = false;  // Los numeros menores o iguales a 1 no son primos
            } else {
                for (int j = 2; j <= numero / 2; j++) {
                    if (numero % j == 0) {
                        primo = false;  // No es primo si es divisible por j
                        break;  // Salir del bucle si encontramos un divisor
                    }
                }
            }

            if (primo) {
                System.out.println(numero + " es Primo");
            } else {
                System.out.println(numero + " No es Primo");
            }
            
        } while (!primo);  // Repetir si el numero no es primo
        
        teclado.close();  // Cerrar el Scanner
    }
}
