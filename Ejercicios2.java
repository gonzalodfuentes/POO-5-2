// FUENTES_Punto2

public class Main
{
    public static void main(String[] args) 
    {
        int i;
        int j;
        boolean div;
        boolean primo;
        
        // Bucle
        for(i = 50; i <= 100; i++)
        {
            div = false;
            primo = true; // El numero es primo
            
            // Para saber si tiene divisores
            for(j = 2; j <= i / 2; j++)
            {
                // Si se encuentra un divisor
                if(i % j == 0)
                {
                    primo = false; // Es falsa
                    if(!div)
                    {
                        System.out.printf("%d no es PRIMO. Sus divisores son: ", i);
                        div = true; // Para mostrarlo una vez
                    }
                    System.out.printf("%d ", j);
                }
            }
            
            // Si primo permanecio en 'true' es primo
            if(primo)
            {
                System.out.printf("%d es PRIMO\n", i);
            }
            else if(div) // Si hay divisores
            {
                System.out.println();
            }
        }
    }
}
