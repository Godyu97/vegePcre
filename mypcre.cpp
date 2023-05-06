#include "mypcre.h"

const char* Pcrepp_Replace(const char* patten, const char* repl,
                           const char* src, const char* flags) {
  try {
    pcrepp::Pcre re(patten, flags);
    std::string res = re.replace(src, repl);
    char* result = new char[res.size() + 1];
    std::strcpy(result, res.c_str());
    return result;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
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
      char* result = new char[strlen(tmp) + 1];
      std::strcpy(result, tmp);
      pcre_free_substring(tmp);
      return result;
    } else {
      return "";
    }

  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
    return "";
  }
}