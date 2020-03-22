# NJ-Project4
Nolan Jimmo Project 4

Water_Monster_Main.cpp Answers:

-Calling eat_person on each of the objects in the vector called friends is not polymorphism because the eat_person method is implemented for the Water_Monster superclass,
it is not a pure virtual method because it is defined in the same way for each of the subclasses below with Water_Monster as the super class.

-Calling scare on each of the objects in the vector called friends IS an example of polymorphism because the scare function is overridden, and implemented differently in 
each of the subclasses (namely Sea_Monster and Lake_Monster), meaning that calling the method with the same name on two different subclasses of the same superclass
will do different things depending on the subclass instance of the objects that the method is being called on. 
