# Class Composition Design process

1. Use the Class Design Process to identify and design your classes.
1. When identifying data types for your class' states, check if it only stores one kind of information or multiple types. Use the appropriate primitive data type if it stores one kind of information.
1. If the state stores multiple information, consider using a class for its data type. If there is an existing class to store the data, use that class. 
1. If no existing classes can store your data, design your class. Apply the class design process for your class.
1. Repeat the class composition design process for each new class you create and use as a state type.

We can use the Class Diagram Creation and Class Definition Processes to turn our class designs into C++ code. 

# Instructions

Create a class to represent a `Schedule`. It includes a day of the week (e.g., Monday, Tuesday, Wednesday), a start time, and an end time. `Time` is represented by hours, minutes, and if it is in am or pm.

Provide a default constructor to set the day of the week to Monday, start times to 8:00 am, and end times to 9:00 am. Provide a constructor overload that accepts values for all member variables.

Provide accessors and mutators for all member variables in all classes you created. Provide `ToString` member function for your classes. They should return a `std::string` that contains information stored in the class. For example, a schedule can be represented by a `std::string` such as "Monday 8:00 am - 9:00 am". 

Create a `Schedule` representing "Monday 10:30 - 11:30 am". Use its `ToString` member function to display information on the screen.