# Bank

```console
example@example:~$ python3 bank.py
This program manages your money
Enter each deposit and withdrawal
To indicate a withdrawal, use a minus sign
Signal the end by entering a 0
Enter initial balance: 5
Enter withdrawal (-) or deposit: 50
Current balance: 55
Enter withdrawal (-) or deposit: -60
This withdrawal bounces. $10 fee deducted. 
Current balance: -15
You are in debt
Enter withdrawal (-) or deposit: 0
Final balance: -15
example@example:~$
```

In Bank, you will write a program that manages a user's funds for them.

## Getting Started

1. Download the distribution code by executing `wget https://daltongit.github.io/problems/bank/bank.zip`
2. Unzip it `unzip bank.zip`

## Program Specifications

* Print the followint instructions:
* > This program manages your money  
  > Enter each deposit and withdrawal  
  > To indicate a withdrawal, use a minus sign  
  > Signal the end by entering a 0  

* Prompt the user for an initial balance. You may find the function `get_int()` useful.
* If the initial balance is less than 0, reprompt.
* Prompt the user to make a deposit or withdrawal. Again, you may find the function `get_int` useful.
* If the user withdraws more money than is in the account, notify the user in red text that the check bounced and a &dollar;10 fee is deducted from the account.
* Display the current balance. If the current balance is less than 0, display the balance in red. Otherwise, display the balance in green.
* Continue prompting the user and displaying the balance until the user types 0.
* Once the user types 0, print out the final balance. If the final balance is under 0, display the balance in red. Otherwise display the balance in green.

## Hints

To print red text, you may find the function `print_red()` useful. `print_red()` takes 1 argument: the string to print.

To print green text, you may find the function `print_green()` useful. Similar to `print_red()`, `print_green()` takes 1 argument: the string to print.


## Understanding

Let's look in `bank.py`.

