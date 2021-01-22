
#ifndef PORT_H
#define PORT_H

#include <cstring>
#include "field.h"

//#include "Include_string/string.h" ///////DONT FORGET TO CHANGE!!!!!!!!!!!
class Port : public Field {
private:
    int range[2];

public:

    Port(String pattern);
    bool set_value(String val);
    bool match_value(String val) const;
};

#endif
