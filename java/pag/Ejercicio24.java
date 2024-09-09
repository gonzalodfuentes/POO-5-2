package fuentes;

public class Ejercicio24 {

    public static void main(String[] args) {
      
        for (int i = 3; i <= 100; i++) 
        {
            boolean a = false;  
            
            for (int j = 2; j < i; j++) 
            {
                if (i % j == 0) 
                { 
                    a = true;
                    break; 
                }
            }
            
            if (!a) 
            {
                System.out.print(i + " / ");
            }
        }
        
        System.out.print("Son primos.");
    }
}
