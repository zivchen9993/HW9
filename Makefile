# Welcome to Mamat, 044101
#
#
# To compile, open the terminal in the folder that contains
# this file and run "make".
#
# To clean, open the terminal in the folder that contains
# this file and run "make clean".
#
# All eclipse projects in this machine are under /home/mamat/Documents/

#Defenitions

CXX     = g++
CXXFLAGS = -Wall -g -std=c11
CXXLINK = $(CXX)
OBJS   = ip.o port.o field.o string.o libfirewall.so
EXEC = libfirewall.so
RM = rm -rf *.o *.exe libfirewall.so

libfirewall.so: grades.o
	$(CXXLINK) -shared grades.o -o libfirewall.so -linput -L.	

#Dependencies - 

main.o: strings.h input.h ip.h port.h field.h main.cpp
	$(CXX) $(CXXFLAGS) -c -fpic main.cpp

ip.o: strings.h field.h ip.h ip.cpp
	$(CXX) $(CXXFLAGS) -c -fpic ip.cpp
	
port.o: strings.h field.h port.h port.cpp
	$(CXX) $(CXXFLAGS) -c -fpic port.cpp
	
field.o: strings.h field.h port.h ip.h field.cpp
	$(CXX) $(CXXFLAGS) -c -fpic field.cpp
	
string.o: strings.h strings.cpp
	$(CXX) $(CXXFLAGS) -c -fpic strings.cpp
#Clean

clean:
	rm -rf *.o libfirewall.so 
