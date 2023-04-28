#ifndef MYPCRE_H
#define MYPCRE_H
#include <pcre++.h>
#include <pcrecpp.h>

#include <cstring>
#include <exception>
#include <iostream>

extern "C" {
const char* Pcrepp_Replace(const char* patten, const char* repl,
                           const char* src, const char* flags);
const char* Pcrepp_MatchFirst(const char* patten, const char* src,
                              const char* flags);
}

#endif