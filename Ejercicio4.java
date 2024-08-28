import java.util.Scanner;  // Importar la clase Scanner

public class Main
{
    public static void main(String[] args) 
    {
        int resultado;
        
        Scanner teclado = new Scanner(System.in);  // Crear un objeto Scanner
        System.out.print("Introduci la operacion ([1] + | [2] - | [3] * | [4] /): ");
        int opera = teclado.nextInt();  // Lee operacion
        
        System.out.print("Introduci el primer numero ");
        int numero = teclado.nextInt();  // 1er numero
        
        System.out.print("Introduci el segundo numero ");
        int numero2 = teclado.nextInt();  //  2do numero
        
        if(opera == 1) // Suma
        {
            resultado = numero + numero2;
            System.out.println(numero + " + " + numero2 + " = " + resultado);
        }
        else if(opera == 2) // Resta
        {
            resultado = numero - numero2;
            System.out.println(numero + " - " + numero2 + " = " + resultado);
        }
        else if(opera == 3) // Multiplicacion
        {
            resultado = numero * numero2;
            System.out.println(numero + " * " + numero2 + " = " + resultado);
        }
        else if(opera == 4) // Division
        {
            resultado = numero / numero2;
            System.out.println(numero + " / " + numero2 + " = " + resultado);
        }
        else if(opera < 1 || opera > 4) // Nada
        {
            System.out.println("Mal ingresado, fin");
        }
        
        teclado.close();  // Cerrar el Scanner
    }
}
