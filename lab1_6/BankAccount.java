package lab1_6;

public class BankAccount {
	private	long ID;
	private double balance;
	public BankAccount(long newID)
	{
		ID = newID;
		balance = 0;
	}
	public void withdraw(double amount)
	{
		if(balance > 0)
			balance -= amount;
	}
	public void deposit(double amount)
	{
		balance += amount;
	}
}
