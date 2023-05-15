package main

import (
	"log"

	"github.com/Godyu97/vegePcre"
)

func main() {
	var src = "Hello (world)(hh)!"
	var replace_str = `sacascascascas<\1>aaa`
	var patten = "\\((.*?)\\)"
	res := vegePcre.PcreppReplaceImpl(patten, replace_str, src, "sig")
	match := vegePcre.PcreppMatchFirstImpl(patten, src, "sig")
	log.Println(res)
	log.Println(match)
}
