# Sample-Prototype
Sample prototype pattern in c++ is a little application in c++ to demonstrate the prototype pattern. It consist of a class with a clone function. This function when called returns an exact replica of the current object.
The test is made of a sample object produced from the class. The parameters of the object and prototype or clone of the object are tested against each other using google test framework.
# procedure (linux)
- clone project
- in project directory, run make -f Makefile to compile and build the application
- make -f Makefile Run to execute the application
- make -f Makefile clean to remove all object files and executables.
# test
Requires google test and mock framework development packages.
- in test directory, run make -f Makefile to compile and build test application.
- make -f Makefile Run to execute test application.
- navigate to ./output directory to view coverage information.
Test out:
![image](https://github.com/O-Cube/Sample-Prototype/assets/65163799/64cb95e8-bd83-4fa3-9f11-e117c09bd16b)
Coverage data:
![image](https://github.com/O-Cube/Sample-Prototype/assets/65163799/93ab32ef-520d-4ca6-98a2-ac437f2e3ad2)
![image](https://github.com/O-Cube/Sample-Prototype/assets/65163799/c63c8ba3-a40c-43fc-82e2-52ff48c0482d)


