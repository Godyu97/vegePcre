#ifndef MYPCRE_H
#define MYPCRE_H
#include <pcre++.h>
#include <pcrecpp.h>

#include <cstring>
#include <exception>
#include <iostream>

extern "C" {
char* Pcrecpp_Replace(char* patten, char* repl, char* src, char* flags);
char* Pcrecpp_MatchFirst(char* patten, char* src, char* flags);
}

#endif