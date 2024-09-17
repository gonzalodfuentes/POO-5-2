package fuentes;

import java.util.Scanner;

public class Ejercicio32 {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        StringBuilder b = new StringBuilder(); // almacena todas las frases ingresadas
        
        while (true) 
        {
            System.out.println("Ingresa la frase (ENTER vacío para terminar): ");
            String a = teclado.nextLine();
            
            if (a.isEmpty()) 
            {
                break;
            }
                
            b.append(a).append("\n"); // añade la frase al resultado con un cambio de linea
            System.out.println("Recibido, sigue...");
        }

        System.out.println("Finalizado. Todo esto escribiste:");
        System.out.println(b.toString());
    }
}