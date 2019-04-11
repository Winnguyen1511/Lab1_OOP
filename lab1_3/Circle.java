package lab1_3;

public class Circle {
	public static final double PI = Math.PI;
private double radius;
public Circle(double value)
{
	radius = value;
}
public double perimeter()
{
	return 2*(PI)*radius;
}
public double area()
{
	return PI*Math.pow(radius, 2);
}
}
