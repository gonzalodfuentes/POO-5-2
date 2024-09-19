package fuentes;

public class Ejercicio39 {
	
	public enum semana 
	{
	    LUNES (true),
	    MARTES (true),
	    MIERCOLES (true),
	    JUEVES (true),
	    VIERNES (true),
	    SABADO (false),
	    DOMINGO (false);
	    
	    boolean laborable;
	    
	    private semana(boolean laborable)
	    {
	        this.laborable = laborable;
	    }

	    public String toString() 
	    {
	        
	        if(laborable)
	        {
	            return "El dia "+ this.name() +" es laborable";
	        }
	        else
	        {
	            return "El dia "+  this.name() +" no es laborable";
	        }
	        
	    }
	    
	    
	    
	} // En este caso el enum debe abarcar todo
}