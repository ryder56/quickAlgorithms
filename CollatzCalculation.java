//import java.math.*;

public class CollatzCalculation {
	private int initialValue;
	private int currentValue;
	
	
	public CollatzCalculation(int number){
		this.initialValue = number;
		this.currentValue = number;
	}
	
	private int calculation(){
		if(currentValue % 2 == 1) {
			currentValue = 3*currentValue + 1;
			currentValue = currentValue/2;
		}
		else
			currentValue = currentValue/2;
		return currentValue;
	}
	
	public String printCalculation(){
		String output = "Value: " + currentValue;
		while(currentValue != 1) {
			calculation();
			if(currentValue % 2 == 1)
				output += "\n Applying (3n+1)/2:" + currentValue;
			else if(isAPowerOfTwo()) {
				output += "\n" + currentValue + "Current Value is a power of 2, so the sequence converges to 1";
				output += "\n Starting Value: " + initialValue + "\t\tEnding Value: " + currentValue;
				return output;
			}
			else
				output += "\n Applying n/2:" + currentValue;
		}
		output += "\n Starting Value: " + initialValue + "\t\tEnding Value: " + currentValue;
		return output;
	}
		
	private boolean isAPowerOfTwo() {
		double x = Math.log((double)currentValue)/Math.log(2.00);
		if(Math.floor(x) == Math.ceil(x)) 
			return true;
		else 
			return false;
	}
}

