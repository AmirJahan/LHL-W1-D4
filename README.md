This morning we did a quick recap of all the OOP concepts so far. We discussed the use of OOP and inheritance between classes as well as the notions of Declaration and Definition in variables and classes. We then talked about the Methods and the use of the bracket ([ ]) operation in Objective-C and quickly went through refactoring and code modularization. 

We then discussed how properties help producing iVar that automatically produce setts / getters and the dot operation. When using properties, keep in mind that you can always override the setter and getter. In declaring properties, keep an eye on options:

     strong - default
     weak 
     assign
     copy
     atomic - default
     nonatomic
     readonly
     readwrite - default
     nullable
     nonnull
 

We then talked about the protocols. These allow us to define an interface or a set a methods that a class should implement, without having to subclass.  Protocols contain no logic, only the methods. So protocols are always defined in the header file.

We then spoke about the Delegation. The delegate design pattern is a design pattern that uses protocols. Delegation is when an object delegates some of its behavior or control to another object using a protocol. We use the delegate pattern when an object needs to communicate information or request information from another object.

Today's word Cloud is:
![alt text](https://github.com/AmirJahan/LHL-W1-D4/blob/master/Week%201%20day%204.png)

