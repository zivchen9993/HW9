#include <iostream>
#include <cstring>
#include "field.h"
#include "ip.h"
#include "port.h"
#include "input.h"

#include "Include_string/string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!

using namespace std;
/*
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
  somethingelse2.split(" .*", &arr, &size);
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
*/
  /*
   * field debug
   */
  /*
  String *law_arr;
  size_t size_of_law_arr;
  String *pattern_arr;
  size_t pat_arr_size;
  String law_base_string;
  Field *field_ptr_check;

  //for (int i = 0; i < argc; ++i) {
    law_base_string = "src-ip=253.145.84.201/30";
    String check_packet = "src-ip=253.145.84.201,  dst-ip=189.112.138.228,  "
                   "src-port=53,  dst-port=7339 ";
  String check_val = "src-ip=253.145.84.201";
    law_base_string.split("=", &law_arr, &size_of_law_arr); // src-ip, xxxxxxxx
    law_arr[0].split("-", &pattern_arr, &pat_arr_size); // src, ip
    if ((pattern_arr[1].trim()).equals("ip")) {
      Ip ip_law(law_arr[0].trim());
      ip_law.set_value(law_arr[1].trim());
      field_ptr_check = &ip_law;
      int one = (1+1);
    } else if ((pattern_arr[1].trim()).equals("port")) {
      Port port_law(law_arr[0].trim());
      port_law.set_value(law_arr[1].trim());
      field_ptr_check = &port_law;
    }

    //bool is_lawful = field_ptr_check->match(check_packet)
    bool is_lawful = field_ptr_check->match(check_val);
    delete[] pattern_arr;
    delete[] law_arr;
    cout << "check val 1 parse" << is_lawful << endl;
  return 0;
}


*/