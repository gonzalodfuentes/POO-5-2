import java.util.Scanner;  // Importar la clase Scanner

public class Main
{
    public static void main(String[] args) 
    {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Ingresa el primer numero: ");
        int num1 = teclado.nextInt();
        
        System.out.print("Ingresa el segundo numero: ");
        int num2 = teclado.nextInt();
        
        if(num1 > num2)
        {
            System.out.println(num1 + " es mayor que " + num2);
        }
        else if(num2 > num1)
        {
            System.out.println(num2 + " es mayor que " + num1);
        }
        else
        {
            System.out.println(num1 + " y " + num2 + " son iguales.");
        }
    }
}
