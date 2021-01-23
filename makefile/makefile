# Welcomre to Mamat, 044101
#
# This is the project's Makefile. It contains the instructions for compiling
# the projects C files, and then link the generated objects into an executable.
# This simple file will compile "main.c" to "main.o" and then link it (with C
# runtime library) to the executable "prog.exe".
#
# To compile, open the terminal in the folder that contains
# this file and run "make".
#
# To clean, open the terminal in the folder that contains
# this file and run "make clean".
#
# All eclipse projects in this machine are under /home/mamat/Documents/

#Defenitions

CXX = g++
CXXFLAGS = -Wall -Wextra -L. -g 
RM = rm -f 


all:firewall.exe

firewall.exe: firewall
	$(CXX) ${CXXFLAGS} main.cpp -o firewall.exe -lfirewall -linput
	

#Dependencies - 
firewall:
	$(CXX) ${CXXFLAGS} -fPIC -shared  field.cpp string.cpp port.cpp ip.cpp -o libfirewall.so 
	

#Clean
clean:
	-rm -f firewall firewall.exe
