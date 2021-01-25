CXX:=g++
EXE:=firewall
CXXFLAGS:=-Wall -Wextra -L. -g
OBJS:=ip.o port.o field.o string.o main.o
CXXLINK = $(CXX)
RM = rm -f 
#all: libfirewall.so firewall.exe

%.o: %.c
	$(CXX) $(CXXFLAGS) -MD -MP $< -c -o $@

#libfirewall.so: ip.o port.o field.o string.o
#	$(CXXLINK) -shared -o libfirewall.so -linput -L.

#$(EXE): $(OBJS)
#	$(CXX) $^ -o $@

firewall.exe: firewall
	$(CXX) ${CXXFLAGS} main.cpp -o firewall.exe -lfirewall -linput

#firewall.exe: $(OBJS)
#	$(CXXLINK) $(OBJS) -o firewall.exe -libfirewall.so -libinput.so
	
clean:
	rm -f $(OBJS) $(EXE)

-include $(OBJS:.o=.d)
