package fuentes;

public class Ejercicio42 {

	public static void main(String[] args) throws InterruptedException /* Hacer funcionar el sleep */ {
		int horas = 0;
		int minutos = 0;
		int segundos = 0;
		
		int a = 1;
		int b = 0;
		
		while(a > b) // Bucle infinito
		{	
			while(horas < 24)
			{
				while(minutos < 60)
				{
					while(segundos < 60)
					{
						System.out.println(horas + " : " + minutos + " : " + segundos);
						segundos += 1;		
						Thread.sleep(1000);
					}
					
					System.out.println(horas + " : " + minutos + " : " + segundos);			
					minutos += 1;
					Thread.sleep(1000);
				}
				
				System.out.println(horas + " : " + minutos + " : " + segundos);	
				horas += 1;
				Thread.sleep(1000);
			}
		}
	}

}
