package main

import (
	"github.com/Godyu97/vegePcre"
	"log"
)

func main() {
	var src = "Hello (world)(hh)!"
	var replace_str = "sacascascascas<$1>aaa"
	var patten = "\\((.*?)\\)"
	var res = ""
	res = vegePcre.PcreppReplaceImpl(patten, replace_str, src, "sig")
	log.Println(res)
}
