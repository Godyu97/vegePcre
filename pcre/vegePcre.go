/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.1.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

// source: mypcre.i

package pcre

/*
#cgo LDFLAGS: -lpcre++ -lpcre -lpcrecpp
#cgo CFLAGS: -I/usr/include

#include <stdlib.h>

extern char* Pcrecpp_Replace(char* patten, char* repl, char* src, char* flags);
extern char* Pcrecpp_MatchFirst(char* patten, char* src, char* flags);
*/
import "C"

import "unsafe"
import _ "runtime/cgo"

func Pcrecpp_ReplaceCgo(arg1 string, arg2 string, arg3 string, arg4 string) (_swig_ret string) {
	// 将 Go 字符串转换为 C 字符串
	cArg1 := C.CString(arg1)
	defer C.free(unsafe.Pointer(cArg1))

	cArg2 := C.CString(arg2)
	defer C.free(unsafe.Pointer(cArg2))

	cArg3 := C.CString(arg3)
	defer C.free(unsafe.Pointer(cArg3))

	cArg4 := C.CString(arg4)
	defer C.free(unsafe.Pointer(cArg4))

	// 调用 C 函数并获取返回值
	cRet := C.Pcrecpp_Replace(cArg1, cArg2, cArg3, cArg4)
	defer C.free(unsafe.Pointer(cRet))
	// 将 C 字符串转换为 Go 字符串并返回
	_swig_ret = C.GoString(cRet)
	return
}

func Pcrecpp_MatchFirstCgo(arg1 string, arg2 string, arg3 string) (_swig_ret string) {
	// 将 Go 字符串转换为 C 字符串
	cArg1 := C.CString(arg1)
	defer C.free(unsafe.Pointer(cArg1))

	cArg2 := C.CString(arg2)
	defer C.free(unsafe.Pointer(cArg2))

	cArg3 := C.CString(arg3)
	defer C.free(unsafe.Pointer(cArg3))

	// 调用 C 函数并获取返回值
	cRet := C.Pcrecpp_MatchFirst(cArg1, cArg2, cArg3)
	defer C.free(unsafe.Pointer(cRet))
	// 将 C 字符串转换为 Go 字符串并返回
	_swig_ret = C.GoString(cRet)
	return
}
