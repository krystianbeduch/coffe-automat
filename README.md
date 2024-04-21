# Coffe Automat
This project was implemented during IT studies as part of desktop application programming classes. The project was a summary of the knowledge gained in RAD programming. 
To start with, we used a slightly older but simple and easy-to-use environment - [C++ Builder](https://www.embarcadero.com/products/cbuilder).

## General Info
The application is an implementation of a vending machine for coffee (and other beverages). Choose your drink, set the amount of sugar, insert your coins, collect and enjoy your drink! :coffee:

## Features
- Program is divided into 3 windows: the main window (vendor), the sugar content edition window, and the payment window.
- In the application you won't find a typical nonclient area. The region of the application window has been narrowed down to the area of the machine using WinAPI function _SetWindowRgn_.
- In the client area in the main window, we can distinguish elements such as:
  - beverage selection panel
  - button for information and editing sugar content
  - "screen" displaying the amount to be paid
  - payment button
  - button to start and receive the order
  - order status "light"  
- The program logic is divided into several classes:
  - __BaseProducts__ class storing information about products and their prices in the form of a map
  - __Order__ class responsible for orders and progressive changes on the machine
  - __Sugar__ class responsible for editing sugar content

## Technologies
The project was implemented using :
* C++ Builder 6.0  
  
And the library used in it:
* VCL

## Setup  
We can download the Borland C++ Builder 6 Personal package, which is available for free on the Internet. Programs normally created in the Borland C++ Builder environment use DLL libraries, which the environment installs on the system. The advantage of this solution is that the program code is quite short - several dozen kilobytes. By changing the appropriate project options, we can compile the project so that it is available without these libraries - this is how the `Automat.exe` file located in the repository is compiled.

## Usage
After starting, most of the buttons are locked. First select the appropriate beverage by selecting one of the radio buttons. The `sugar` and `payment` buttons are then unlocked. 
Clicking on them will take us to an appropriately dedicated window:
- In `SugarEditorForm` we can change the sugar content via select list or enter it manually, we can see the current price of the order there.
- In `PaymentForm`, we pay for the order by inserting appropriate coins and monitoring the amount remaining to be paid. After paying in full, we receive the appropriate change and confirm the payment.

When the "screen" displaying the amount already shows __0__, the `start` button is unlocked, clicking which will complete our order - the ability to click or move the window is blocked at this point; we see the order progress through appropriate bars and the appropriate color of the "light".

After a short while, we can collect our order, which is indicated by the light and the available `collect` button.

After clicking on it, we can place another order.
  
