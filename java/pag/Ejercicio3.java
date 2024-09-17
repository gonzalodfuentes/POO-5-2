import java.util.Scanner;  // Importar la clase Scanner

public class Main
{
    public static void main(String[] args) 
    {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Ingresa tu nombre: ");
        String nombre = teclado.nextLine();
        
        System.out.println("Bienvenido " + nombre);
    }
}
