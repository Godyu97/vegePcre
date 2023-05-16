#include "mypcre.h"

char* Pcrecpp_Replace(char* patten, char* repl, char* src, char* flags) {
  char* result = NULL;
  try {
    pcrecpp::RE_Options op;
    if (strstr(flags, "s") != NULL) {
      op.set_dotall(true);
    }
    if (strstr(flags, "i") != NULL) {
      op.set_caseless(true);
    }
    if (strstr(flags, "m") != NULL) {
      op.set_multiline(true);
    }
    if (strstr(flags, "x") != NULL) {
      op.set_extended(true);
    }
    pcrecpp::RE re(patten, op);
    std::string res = src;
    re.GlobalReplace(repl, &res);
    result = (char*)malloc(res.size() + 1);
    std::strcpy(result, res.c_str());
    return result;
  } catch (const std::exception& e) {
    result = (char*)malloc(1);
    std::strcpy(result, "");
    return result;
  }
}

char* Pcrecpp_MatchFirst(char* patten, char* src, char* flags) {
  char* result = NULL;
  try {
    pcrepp::Pcre re = pcrepp::Pcre(patten, flags);
    pcre* cre = re.get_pcre();
    int vec[30];
    int len = strlen(src);
    int rc = pcre_exec(cre, NULL, src, len, 0, 0, vec, 30);
    if (rc > 0) {
      const char* tmp;
      pcre_get_substring(src, vec, rc, 0, &tmp);
      result = (char*)malloc(strlen(tmp) + 1);
      std::strcpy(result, tmp);
      pcre_free_substring(tmp);
      return result;
    } else {
      result = (char*)malloc(1);
      std::strcpy(result, "");
      return result;
    }
  } catch (const std::exception& e) {
    result = (char*)malloc(1);
    std::strcpy(result, "");
    return result;
  }
}