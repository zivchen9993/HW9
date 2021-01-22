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
CXXFLAGS = -Wall -g -std=c++11
CCLINK = $(CXX)
OBJS   = ip.o port.o field.o string.o libfirewall.so
EXEC = libfirewall.so
RM = rm -rf *.o *.exe libfirewall.so

ALL: libfirewall.so firewall.exe

libfirewall.so: main.o
	$(CCLINK) -shared main.o -o libfirewall.so -linput -L.	

firewall.exe:	$(OBJS)
	$(CCLINK)	-o firewall.exe $(OBJS)
#Dependencies - 

main.o: string.h input.h ip.h port.h field.h main.cpp
	$(CXX) $(CXXFLAGS) -c -fpic main.cpp

ip.o: string.h field.h ip.h ip.cpp
	$(CXX) $(CXXFLAGS) -c -fpic ip.cpp
	
port.o: string.h field.h port.h port.cpp
	$(CXX) $(CXXFLAGS) -c -fpic port.cpp
	
field.o: string.h field.h port.h ip.h field.cpp
	$(CXX) $(CXXFLAGS) -c -fpic field.cpp
	
string.o: string.h string.cpp
	$(CXX) $(CXXFLAGS) -c -fpic string.cpp
#Clean

clean:
	rm -rf *.o libfirewall.so *.exe
