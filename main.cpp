#include <iostream>
#include <cstring>
#include "field.h"
#include "ip.h"
#include "port.h"

#include "Include_string/string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!

using namespace std;

int main () {
  String first_s("natali");
  String sec_s("ziv");
  String def_s;
  String third_s(first_s);
  bool one = first_s.equals(third_s);
  bool two = sec_s.equals(third_s);
  std::cout<< sec_s.equals("ziv")<< std::endl;
  String something("1234");
  String somethingelse("   1234    ");
  cout << something.to_integer() << endl;
  cout << somethingelse.equals(something) << endl;
  String ST = somethingelse.trim();
  cout << ST.equals(something) << endl;

  String s;
  String s1("\0");
  bool isEqual = s.equals(s1);
  cout << isEqual << endl;

  /*Ip my_ip("1.2.3");
  my_ip.get_type();

  String* splited_strings_array;
  size_t array_size;
  somethingelse.split("./+", &splited_strings_array, &array_size);
*/
  return 0;
}