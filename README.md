# NJ-Project5
Nolan Jimmo Project 5

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

Sky_Monster_Main.cpp

-Similar to the other main functions, I used the scare() method to showcase the polymorphism in the program. Again, this is polymorphism because the scare method is declared in both
of the subclasses, when the same method name is called on two different subclass instances, two different scare methods with be called, and therefore calling the same method will produce
different results based on the object it is being called on.
-growth_spurt() is not polymorphism because growth_spurt is only defined in the superclass, so calling growth_spurt() on an object of either of the subclasses will result in the same
method being used both times, and ultimately resulting in the some output/return.