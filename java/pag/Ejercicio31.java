package fuentes;

import java.util.Scanner;

public class Ejercicio31 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);

        System.out.println("Por favor, ingresa una frase:");
        String a = teclado.nextLine();

        String sinEspacios = a.replaceAll("\\s+", "");

        System.out.println("Frase sin espacios: " + a);
    }
}