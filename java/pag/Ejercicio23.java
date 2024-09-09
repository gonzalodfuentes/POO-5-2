package fuentes;

import java.util.Scanner;

public class Ejercicio23 {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.print("Ingresa un número: ");
        int n = teclado.nextInt();
        
        if (n <= 1) 
        {
            System.out.println("No es primo");
        } 
        else if (n == 2) 
        {
            System.out.println("Es primo");
        } 
        else if (n % 2 == 0) 
        {
            System.out.println("No es primo");
        } 
        else 
        {
            boolean esPrimo = true;
            
            for (int i = 3; i * i <= n; i += 2) 
            {
                if (n % i == 0) 
                {
                    esPrimo = false;
                    break;
                }
            }
            
            if (esPrimo) 
            {
                System.out.println("Es primo");
            } else {
                System.out.println("No es primo");
            }
        }
    }
}
