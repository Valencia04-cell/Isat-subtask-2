## SUBTASK 2 REFLECTION ON CHANGES AND CHALLENGES ENCOUNTERED.
I modified the existing C++ converter program by adding four functions for decimal-to-binary, binary-to-decimal, decimal-to-hexadecimal, and hexadecimal-to-decimal conversions.
I also updated the menu to allow the user to select each conversion and connected each option to the correct function.

The main challenges I encountered were understanding the conversion calculations and making sure the functions used the correct parameters and return types.
I resolved these challenges by testing the program with different values, checking my calculations, and correcting errors in the code. 
This helped me improve my understanding of functions, loops, strings, and number conversions.

## SUBTASK 3 FUNTIONALITY EXPLAINED.
### Explanation of the Program Functionality

The Magwinya Magic Order Management System is a C++ program designed to store and manage customer orders. 
The program uses four one-dimensional parallel arrays, functions, loops, and a menu-driven interface. The arrays can store information for up to 50 orders.

### Structure of the Parallel Arrays

The program uses four parallel arrays:

* **`orderIDs[]`** – stores the unique Order ID for each order.
* **`customerNames[]`** – stores the name of the customer.
* **`numberOfMagwinyas[]`** – stores the number of magwinyas ordered.
* **`totalCosts[]`** – stores the total cost of each order.

The arrays are called **parallel arrays** because the same index in each array represents the same customer order. For example, index `0` contains Order ID 101, customer THABO, 3 magwinyas, and a total cost of R15.75.
This allows the program to keep all information belonging to an order connected.

The arrays are created with a maximum size of 50 elements. The first 10 elements are initialized with the sample orders from 101 to 110. 
The remaining elements are initialized with `"0"` for Order IDs and empty or zero values for the other arrays.

### How the Program Operates

When the program starts, the arrays are initialized and the sample order information is loaded. The variable `orderCount` keeps track of how many orders currently exist.
Since there are initially 10 sample orders, `orderCount` starts at 10.

The program then displays the main menu:

1. Add a New Order
2. Display All Orders
3. Find an Order by Order ID
4. Calculate Total Revenue
5. Exit

A `do-while` loop keeps displaying the menu until the user selects option 5. A `switch` statement is used to determine which function should run based on the user's choice.

### Adding a New Order

When the user selects option 1, the `addOrder()` function is called. The program automatically creates the next Order ID based on the current number of orders.
The user then enters the customer's name, number of magwinyas ordered, and total cost.

The information is stored at the same array index in all four parallel arrays. The `orderCount` is then increased by one so that the next order can be stored in the next available position.

### Displaying All Orders

When option 2 is selected, the `displayAllOrders()` function is called. A `for` loop goes through all the orders from index 0 up to `orderCount - 1`.
The program displays the Order ID, customer name, number of magwinyas, and total cost for every order.

If there are no orders, the program displays a message saying that there are no orders to display.

### Finding an Order

Option 3 allows the user to search for a particular order. The `findOrder()` function asks the user to enter an Order ID. 
A `for` loop searches through the `orderIDs[]` array. When a matching ID is found, the program uses the same index to retrieve the customer's name, number of magwinyas, and total cost from the other parallel arrays.

If the Order ID does not exist, the program displays an "Order not found" message.

### Calculating Total Revenue

When option 4 is selected, the `calculateTotalRevenue()` function is called. A `for` loop goes through the `totalCosts[]` array and adds all the order costs together. 
The final amount represents the total revenue generated from all the stored orders.

### Exiting the Program

When the user selects option 5, the program displays an exit message. The `do-while` loop then stops because the selected choice is 5, and the program ends.

### Instructions for Using the Program

To use the program:

1. Run the C++ program.
2. The Order Management System menu will appear.
3. Enter a number from **1 to 5**.
4. Select **1** to add a new customer order.
5. Select **2** to display all stored orders.
6. Select **3** and enter an Order ID to search for a specific order.
7. Select **4** to calculate and display the total revenue.
8. Select **5** to exit the program.
9. After completing options 1–4, the menu will appear again, allowing the user to perform another operation.

Overall, the program provides a simple way for Magwinya Magic to store, search, display, and calculate information about customer orders.
The use of parallel arrays keeps related order information organised, while functions divide the program into smaller sections that are easier to understand, test, and maintain.
