import java.util.Scanner;  // Importar la clase Scanner

public class Main
{
    public static void main(String[] args) 
    {
        Scanner teclado = new Scanner(System.in);
        
        System.out.print("Ingresa el radio del cuadrado: ");
        double radio = teclado.nextDouble();
        
        double area = Math.PI * Math.pow(radio, 2);
        
        System.out.print("El area del circulo es " + area);
    }
}
