package fuentes;

import java.util.Scanner;

public class Ejercicio37 {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Ingresa una frase: ");
        String a = teclado.nextLine();

        String[] separar = a.split(",");

        System.out.println("Las palabras son: ");
        
        for(String b : separar) // Para que 'b' tome el valor de 'separar'
        {
            System.out.println(b);
        }
    }
}
