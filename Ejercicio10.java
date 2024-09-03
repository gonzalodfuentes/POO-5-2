import java.util.Scanner;  // Importar la clase Scanner

public class Main
{
    public static void main(String[] args) 
    {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Ingresa el numero: ");
        int num = teclado.nextInt();
        
        if(num % 2 == 0)
        {
            System.out.print(num + " Es divisible entre Dos");
        }
        else
        {
            System.out.print(num + " No es divisible entre Dos");
        }
    }
}
