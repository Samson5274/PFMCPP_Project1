#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: dog
//  action 1: the dog barks
dog.bark();

//  action 2: the dog sits
dog.sit();

//  action 3: the dog fetches
 dog.fetch();
 
//  2)
//  Noun: boat
//  action 1: the boat sails
boat.sail();

//  action 2: the boat docks 
boat.dock();

//  action 3: the boat honks its horn
boat.honkHorn();
 
//  3)
//  Noun: door
//  action 1: the door opens
door.open();

//  action 2: the door closes 
door.close();

//  action 3: the door locks 
door.lock();
 
//  4)
//  Noun: snake
//  action 1: the snake sheds its skin
snake.shedSkin();

//  action 2: the snake  eats
snake.eat();

//  action 3: the snake  hisses
snake.hiss();
 
//  5)
//  Noun: cloud
//  action 1: the cloud rains
cloud.rain();

//  action 2: the cloud moves 
cloud.move();

//  action 3: the cloud forms
cloud.form();
 
//  6)
//  Noun: carTire
//  action 1: the car tire spins
carTire.spin();

//  action 2: the car tire inflates
carTire.inflate();

//  action 3: the car tire deflates
carTire.deflate();
 
//  7)
//  Noun: mechanic
//  action 1: the mechanic changes oil 
mechanic.changeOil();

//  action 2: the mechanic fixes a transmission 
mechanic.fixTransmission();

//  action 3: the mechanic bills a customer
 mechanic.billCustomer();
 
//  8)
//  Noun: cableTester
//  action 1: the cable tester turns on
cableTester.turnOn();

//  action 2: the cable tester turns off
cableTester.turnOff();

//  action 3: the cable tester tests a cable
cableTester.testCable();
 
//  9)
//  Noun: nurse
//  action 1: the nurse fills an IV bag 
nurse.fillIVBag();

//  action 2: the nurse administers a shot 
nurse.administerShot();

//  action 3: the nurse delivers a baby 
 nurse.deliverBaby();
 
//  10)
//  Noun: baker
//  action 1: the baker kneeds dough 
 baker.kneedDough();

//  action 2: the baker turns on the oven 
 baker.turnOnOven();

//  action 3: the baker cuts a loaf 
baker.cutLoaf();
 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review. 
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
