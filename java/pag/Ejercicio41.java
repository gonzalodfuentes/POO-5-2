package fuentes;

import java.util.Scanner;

public class Ejercicio41 {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        int n = 0;
        int mayor = Integer.MIN_VALUE; // Empieza con el maximo
        int menor = Integer.MAX_VALUE; // Empieza con el minimo
        int suma = 0;
        int pos = 0;
        int neg = 0;
        int a = 0;
        int prom = 0;

        do 
        {
            System.out.print("Ingresa numero: ");
            n = teclado.nextInt();
            
            if (n != -1) 
            {
                a++;
                suma += n;

                if (n > mayor) 
                {
                    mayor = n;
                }
                
                if (n < menor) 
                {
                    menor = n;
                }
                
                if (n >= 0) 
                {
                    pos += n;
                } 
                else 
                {
                    neg += n;
                }
                
                
            }
        } 
        while (n != -1);
        
        if(suma != 0 || a != 0)
        {
        	prom = suma / a;
        }
        
        System.out.println("EL NÚMERO MÁS GRANDE ES: " + mayor);
        System.out.println("EL NÚMERO MÁS BAJO ES: " + menor);
        System.out.println("LA SUMA DE TODOS LOS NÚMEROS ES: " + suma);
        System.out.println("LA SUMA DE TODOS LOS POSITIVOS ES: " + pos);
        System.out.println("LA SUMA DE TODOS LOS NEGATIVOS ES: " + neg);
        System.out.println("EL PROMEDIO ES: " + prom);
    }
}
