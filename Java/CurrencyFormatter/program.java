import java.util.*;
import java.text.*;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        // Write your code here.
        NumberFormat nf_us = NumberFormat.getInstance(Locale.US);
        NumberFormat nf_india = NumberFormat.getInstance(Locale.IN);
        NumberFormat nf_china = NumberFormat.getInstance(Locale.CH);
        NumberFormat nf_france = NumberFormat.getInstance(Locale.FR);
        
        double us = nf_us.format(payment);
        double india = nf_india.format(payment);
        double china = nf_china.format(payment);
        double france = nf_france.format(payment);
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}
