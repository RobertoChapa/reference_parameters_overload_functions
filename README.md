I am going to discuss reference parameters' and a little bit about memory allocation. In a function, the value parameter is copied into the memory cell of the corresponding formal parameter; however, for a reference parameter, the address of the actual parameter passes to the formal parameter.  What this means is that the content of the formal parameter is an address.  During the data manipulation in the function, the address stored in the formal parameter directs the computer to manipulate the data of the memory cell at that address. Both the actual and formal parameters refer to the same memory location.  The result is that the proper parameter permanently changes the value of the actual parameter.

Reference parameters are ideal for certain types of data manipulation.  For example, if you need to return multiple values in a function, change the function to a void function and use reference parameters to return the desired values.  I will code an example demonstrating the process.
