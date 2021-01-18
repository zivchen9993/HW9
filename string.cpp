#include <iostream>
#include "string.h"

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

static int string_length(const char *src) {
  int count = 0;
  while (src[count] != '\0') {
    count++;
  }
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

bool does_exist(const char data, const char *delimiter) {
  if (delimiter == NULL) {
    return false;
  }
  int count = 0;
  while (delimiter[count] != '\0') {
    if (data == delimiter[count]) {
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
  length = string_length(str);
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
  length = string_length(str);
  /*if (data != NULL) {
    delete[] data;
  } check if necessary in the course!!!!*/
  delete[] data;
  data = create_new_copy(str, length);
  return *this;
}

bool String::equals(const char *rhs) const {
  return string_compare(data, rhs);
}

bool String::equals(const String &rhs) const {
  return equals(rhs.data);
}

/**
 * @brief Splits this to several sub-strings according to delimiters.
 * Allocates memory for output that the user must delete (using delete[]).
 * @note Does not affect this.
 * @note If "output" is set to NULL, do not allocated memory, only
 * compute "size".
 */
void String::split(const char *delimiters,
                   String **output,
                   size_t *size) const {
  if (size == NULL) {
    return;
  }
  *size = 0;
  bool output_is_null = false;
  if (*output == NULL) {
    output_is_null = true;
  }
  if (delimiters == NULL) {
    String new_str(*this);
    *size = 1;
    if (!output_is_null) {
      *output = &new_str;
    }
    return;
  }
  int begin_count = 0;
  int end_count = 0;
  while (data[end_count] != '\0') {
    if (!does_exist(data[end_count], delimiters)) {
      end_count++;
    } else {
      *size++;
    }

  }
  char *sub_data = create_new_copy(data + begin_count, end_count -
      begin_count);
  String sub_string(sub_data);
  if (!output_is_null) {

  }
}

int String::to_integer() const {
  int integer = 0;
  for (int i = 0; i < length; ++i) {
    if (!is_integer(data[i])) {
      return 0;
    }
    integer *= 10;
    integer += (data[i] - '0');
  }
  return integer;
}

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
