
public class Ejercicio16 {

	public static void main(String[] args) {
			System.out.println("Números del 1 al 100 divisibles por 2 y 3:");
			
			int a;
			
			for(int i = 1; i < 101; i++)
			{
				if(i % 2 == 0 && i % 3 == 0)
				{
					System.out.println(i);
				}
			}

	}

}
