#include "mypcre.h"

const char* Pcrepp_Replace(const char* patten, const char* repl,
                           const char* src, const char* flags) {
  try {
    pcrecpp::RE_Options op = pcrecpp::RE_Options();
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
    pcrecpp::RE re = pcrecpp::RE(patten, op);
    std::string res(src);
    re.GlobalReplace(repl, &res);
    char* result = (char*)malloc(res.size() + 1);
    std::strcpy(result, res.c_str());
    return result;
  } catch (const std::exception& e) {
    return "";
  }
}

const char* Pcrepp_MatchFirst(const char* patten, const char* src,
                              const char* flags) {
  try {
    pcrepp::Pcre re(patten, flags);
    pcre* cre = re.get_pcre();
    int vec[30];
    int len = strlen(src);
    int rc = pcre_exec(cre, NULL, src, len, 0, 0, vec, 30);
    if (rc > 0) {
      const char* tmp;
      pcre_get_substring(src, vec, rc, 0, &tmp);
      char* result = (char*)malloc(strlen(tmp) + 1);
      std::strcpy(result, tmp);
      pcre_free_substring(tmp);
      return result;
    } else {
      return "";
    }
  } catch (const std::exception& e) {
    return "";
  }
}