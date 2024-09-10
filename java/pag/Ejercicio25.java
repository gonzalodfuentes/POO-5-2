package fuentes;

public class Ejercicio25 {

	public static void main(String[] args) {
		
		String frase = "La lluvia en Sevilla es una maravilla";
		
		int a = 0;
		
		System.out.println("La lluvia en Sevilla es una maravilla.");
		
		for(int i = 0; i < frase.length() /* .length() cuenta letras */ ; i++) 
		{
			switch(frase.charAt(i))
			{
				case 'a':
				{
					// sigue
				}
				
				case 'e':
				{
					// sigue
				}
				
				case 'i':
				{
					// sigue
				}
				
				case 'o':
				{
					// sigue
				}
				
				case 'u':
				{
					a++;
					break;
				}
				
				default:
				{
					// nada
				}
			}
		}
		
		System.out.println("Hay " + a + " vocales.");

	}

}
