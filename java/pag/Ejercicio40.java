package fuentes;

import java.util.Scanner;

public class Ejercicio40 {
	
	
	public enum mes 
	{
		ENERO(1, 31),
		FEBRERO(2, 28),
		MARZO(3, 31),
		ABRIL(4, 30),
		MAYO(5, 31),
		JUNIO(6, 30),
		JULIO(7, 31),
		AGOSTO(8, 31),
		SEPTIEMBRE(9, 30),
		OCTUBRE(10, 31),
		NOVIEMBRE(11, 30),
		DICIEMBRE(12, 31);
		
		int a;
		int dias;
		
		mes(int a, int dias)
		{
			this.a = a;
			this.dias = dias;
		}

	
	
	public int getA()
	{
		return a;
	}
	
	public int getDias()
	{
		return dias;
	}
	
	public String toString()
	{
		return "El mes " + this.name() + " es el mes " + a + " y tiene " + dias + " dias ";
	}
	
}
	
	public static void main(String[] args) {
    Scanner teclado = new Scanner(System.in);
        
    mes[] meses = mes.values();
        
    System.out.println("Ingresa cantidad de dias: ");
    int dias = teclado.nextInt();
        
    for(int i=0; i < meses.length; i++)
    {
            
    	if(meses[i].getDias() == dias)
    	{
            System.out.println(meses[i].toString());
    	}      
    }
}
}
