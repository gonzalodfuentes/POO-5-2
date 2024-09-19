package fuentes;

import java.util.Scanner;

public class Ejercicio38 {

	public enum semana 
	{
	    LUNES,
	    MARTES,
	    MIERCOLES,
	    JUEVES,
	    VIERNES,
	    SABADO,
	    DOMINGO;
	}
	
	public static void main(String[] args){
    Scanner teclado = new Scanner(System.in);
    
    System.out.println("Ingresa un dia de la semana: ");
    String dia = teclado.nextLine().toUpperCase();
        
    semana a = semana.valueOf(dia); // "valueOf" Agarra los valores de la otra clase
    
    boolean b = false;
    
    switch(a)
    {
    	case LUNES:
    	
        case MARTES:
        	
        case MIERCOLES:
        	
        case JUEVES:
        
        case VIERNES:
        {
        	b = true;
        	System.out.println("Los " + dia + " son laborables.");
        	break;
        }
        
        case SABADO:
        	
        case DOMINGO:
        {
        	b = true;
        	System.out.println("Los " + dia + " no son laborables.");
        	break;
            
        }
    }
}
}
