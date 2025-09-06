#  Split-Wise System  

A **bill-splitting system** implemented in **C** using a **Greedy Algorithm**.  
This project helps divide expenses among a group of people in the most efficient way, minimizing the number of transactions required.  

## Project Overview  

- Uses a **Greedy Algorithm** to compute settlements.  
- Helps in **splitting bills** fairly among multiple people.  
- Minimizes the **total number of transactions** required to settle debts.  
- Implemented in **C language** for efficiency and simplicity.  


## Greedy Algorithm Logic  

The algorithm follows these steps:  

1. **Calculate net balance** of each person:  
   - Positive = the person should **receive money**.  
   - Negative = the person should **pay money**.  

2. Find the person with maximum credit and the person with maximum debit.  

3. Settle the smaller amount between them in one transaction.  

4. Update their balances.  

5. Repeat until all balances become zero.  

This ensures the **minimum number of transactions** while settling all debts.


## Example

Suppose 3 friends go out for dinner:

Person A paid ₹1200

Person B paid ₹800

Person C paid ₹0

The system will calculate how much each person owes and generate the minimal set of transactions needed to settle the balances.


## Future Enhancements

- Add support for reading input from a file.

- Extend functionality to multiple currencies.

- Provide a Graphical User Interface (GUI) for ease of use.

- Implement in other languages like Python/Java.

- Add option to save settlements to a file.
