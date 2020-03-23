# NJ-Project4
Nolan Jimmo Project 4

Water_Monster_Main.cpp Answers:

-Calling eat_person on each of the objects in the vector called friends is not polymorphism because the eat_person method is implemented for the Water_Monster superclass,
it is not a pure virtual method because it is defined in the same way for each of the subclasses below with Water_Monster as the super class.

-Calling scare on each of the objects in the vector called friends IS an example of polymorphism because the scare function is overridden, and implemented differently in 
each of the subclasses (namely Sea_Monster and Lake_Monster), meaning that calling the method with the same name on two different subclasses of the same superclass
will do different things depending on the subclass instance of the objects that the method is being called on. 

Darkness_Monster_Main.cpp

-Calling the scare() method on the different types of Darkness_Monster instances IS polymorphism because the scare() methods are overridden and defined differently within each
each of the subclasses, so the actual method that is being called when scare() is called is different depending on which subclass is having the method called on it.

-Calling the poke_eye() method on the different types of Darkness_Monster instances is NOT polymorphism because the method that is being called is the method defined in the superclass
of the subclasses, which by definition of superclass and subclass will do the exact some thing for each of the subclasses, regardless of which subclass they are. 