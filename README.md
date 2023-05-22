# pcre
* libpcre++-dev 的 cgo实现
* note：该实现捕获组使用`\1`；`$1`不生效需要自行转换
```go
go get -u github.com/Godyu97/vegePcre@latest
```
### lay lib
* apt install gcc
* apt install g++
* apt install libpcre++-dev

### cgo
* `#cgo LDFLAGS: -lpcre++ -lpcre -lpcrecpp`
* `#cgo CFLAGS: -I/usr/include`

# pcre2
* 针对pcre2 c++库的纯go实现
* https://github.com/PCRE2Project/pcre2