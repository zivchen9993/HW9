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
  String something2("1+2    ");
  String somethingelse("   1234    ");
  String somethingelse2("  ... ziv    ");
  String *arr;
  size_t size;
  somethingelse2.split(" .*/", &arr, &size);
  cout << something.to_integer() << endl;
  cout << somethingelse.equals(something) << endl;
  String ST = somethingelse.trim();
  cout << ST.equals(something) << endl;

  String s;
  String s1("\0");
  bool isEqual = s.equals(s1);
  cout << isEqual << endl;

  bool isEqual_arr = arr[0].equals(sec_s);
  cout << isEqual_arr << endl;//expected 1
  bool isEqual_arr2 = arr[2].equals(something2);
  cout << isEqual_arr2 << endl;//expected 1
  bool isEqual_size = (size == 3);
  cout << isEqual_size << endl;//expected 1
  //cout << arr[] << endl;
  //cout <<  << endl;//expected 1

  /*Ip my_ip("1.2.3");
  my_ip.get_type();

  String* splited_strings_array;
  size_t array_size;
  somethingelse.split("./+", &splited_strings_array, &array_size);
*/
  return 0;
}