import java.io.*;
//import java.util.*;


public class Output {
	public static void main(String[] args) throws FileNotFoundException{
		File output = new File("out.txt");
		PrintWriter out = new PrintWriter(output);
		//Scanner in = new Scanner(System.in);
		//System.out.println("Enter an int to test the collatz conjecture with, and the whole process will be ouputted to a file");
		for(int i = 3; i < 10000; i++) {
			CollatzCalculation test = new CollatzCalculation(i);
			out.println(test.printCalculation());
			out.println("\n\nNEXT VALUE\n\n");
		}
		//int x = in.nextInt();
		//in.close();
		//CollatzCalculation test = new CollatzCalculation(x);
		//out.println(test.printCalculation());
		out.close();
		System.out.println("Completed!");
	}
}