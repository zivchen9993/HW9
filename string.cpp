#include <iostream>
#include <cstring>

#include "Include_string/string.h"///////DONT FORGET TO CHANGE!!!!!!!!!!!

String::String() {
  data = new char[1];
  *data = '\0';
  length = 0;
}

/*
class String {
    char *data;
    size_t length;
*/

static char *create_new_copy(const char *src, size_t len) {
  char *dst;
  if (src == NULL) {
    return NULL;
  }
  dst = new char[len + 1];
  for (int i = 0; i <= len; i++) {
    dst[i] = src[i];
  }
  return dst;
}
/* delete if compiled fine with <cstring>
static int string_length(const char *src) {
  int count = 0;
  while (src[count] != '\0') {
    count++;
  }
  strlen(src);
  return count;
}

static bool string_compare(const char *str1, const char *str2) {
  if (str1 == NULL) {
    if (str2 == NULL) {
      return true;
    } else {
      return false;
    }
  }
  if (str2 == NULL) {
    return false;
  }
  int i = 0;
  while (str1[i] != '\0') {
    if (str1[i] != str2[i]) {
      return false;
    }
    i++;
  }
  if (str2[i] == '\0') {
    return true;
  }
  return false;
}
*/

bool does_exist(const char data, const char *array_deli) {
  if (array_deli == NULL) {
    return false;
  }
  int count = 0;
  while (array_deli[count] != '\0') {
    if (data == array_deli[count]) {
      return true;
    }
    count++;
  }
  return false;
}

bool is_integer(char check_char) {
  if (('0' <= check_char) && (check_char <= '9')) { //check implicit
    // convertion of char
    return true;
  }
  return false;
}

/////////////////////////////////////////////////////
////////////////////functions from string.h//////////
/////////////////////////////////////////////////////

String::String(const String &str)
    : length(str.length), data(create_new_copy(str.data, str.length)) {}

String::String(const char *str) {
  length = strlen(str);
  data = create_new_copy(str, length);
}

String::~String() {
  if (data != NULL) {
    delete[] data;
  }
}

String &String::operator=(const String &rhs) {
  if (this != &rhs) {
    length = rhs.length;
    /*if (data != NULL) {
      delete[] data;
    } check if necessary in the course!!!!*/
    delete[] data;
    data = create_new_copy(rhs.data, rhs.length);
  }
  return *this;
}

String &String::operator=(const char *str) {
  length = strlen(str);
  /*if (data != NULL) {
    delete[] data;
  } check if necessary in the course!!!!*/
  delete[] data;
  data = create_new_copy(str, length);
  return *this;
}

bool String::equals(const char *rhs) const {
  return !strcmp(data, rhs);
}

bool String::equals(const String &rhs) const {
  return equals(rhs.data);
}

void String::split(const char *delimiters,
                   String **output,
                   size_t *size) const {
  if (size == NULL) {
    return;
  }
  bool output_is_null = false;
  if (*output == NULL) {
    output_is_null = true;
  }
  if (delimiters == NULL || (*data == '\0')) {
    *size = 1;
    if (!output_is_null) {
      String new_str(*this);
      *output = &new_str;
    }
    return;
  }
  size_t size_of_arr = 0;
  int begin_count = 0;
  int end_count = 0;
  bool prev_is_deli = does_exist(data[end_count], delimiters);
  bool end_of_data = false;
  if (prev_is_deli) {
    end_count++;
    begin_count++;
  }
  int *array = new int[2*length + 1];
  int a_i = 0;
  while (!end_of_data) {
    bool curr_is_deli = ((*(data + end_count) == '\0') ||
                          (does_exist(data[end_count], delimiters)));
    // maybe add '\0' to check
    if (curr_is_deli) {
      if (!prev_is_deli) {
        //save end and begin to array - check if end or (end -1)
        array[a_i++] = begin_count;
        array[a_i++] = end_count;
        size_of_arr++;
      }
      begin_count = end_count + 1;
      if (*(data + end_count) == '\0') {
      end_of_data = true;
      }
    }
    prev_is_deli = curr_is_deli;
    end_count++;
  }
  if (output_is_null) {
    *size = size_of_arr;
    return;
  }
  String *output_arr = new String[size_of_arr];
  for (int i = 0; i < (size_of_arr*2); i += 2) {
    char *sub_data = create_new_copy((data + array[i]), (array[i + 1] -
    array[i]));//check if -1 is necessary
    String sub_string(sub_data);
    output_arr[i] = sub_string;
  }
  *output = output_arr;
  delete[] array;
}

int String::to_integer() const {
  return atoi(data);
  /* int integer = 0;
  for (int i = 0; i < length; ++i) {
    if (!is_integer(data[i])) {
      return 0;
    }
    integer *= 10;
    integer += (data[i] - '0');
  }
  return integer;
*/}

String String::trim() const {
  if (data == NULL) {
    return String();
  }
  if (data[0] == '\0') {
    String empty_String = *this;
    return empty_String;
  }
  int trim_begin = 0;
  int trim_end = length;
  while (data[trim_begin] == ' ') {
    if (data[trim_begin + 1] == '\0') {
      String empty_String = (data + trim_begin + 1);
      return empty_String;
    }
    trim_begin++;
  }
  while (data[trim_end - 1] == ' ') {
    trim_end--;
  }
  String trimmed_String = create_new_copy((data + trim_begin), (trim_end -
      trim_begin - 1));
  return trimmed_String;
}
