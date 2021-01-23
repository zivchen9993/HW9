
TARGET_LIB = firewall
TARGET_APP = firewall.exe
OTHER_LIB = input

LIB_SRCS = string.cpp port.cpp field.cpp ip.cpp
APP_SRCS = main.cpp


CXX = g++
CXXFLAGS = -Wall -Wextra -L. -g 
LDFLAGS = -fPIC -shared 
RM = rm -f 

all:${TARGET_APP}

$(TARGET_LIB):
	$(CXX) ${CXXFLAGS} ${LDFLAGS} ${LIB_SRCS} -o lib${TARGET_LIB}.so 
	
${TARGET_APP}: ${TARGET_LIB}
	$(CXX) ${CXXFLAGS} ${APP_SRCS} -o ${TARGET_APP} -l$(TARGET_LIB) -l$(OTHER_LIB)
	
clean:
	-${RM} ${TARGET_LIB} ${TARGET_APP}
