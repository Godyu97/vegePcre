package main

import (
	"log"

	"fmt"
	"github.com/Godyu97/vegePcre"
	"regexp"
)

type PcreReq struct {
	Pattern    string
	ReplaceStr string
	Src        string
	Flags      string
}

func main() {
	for {
		var src = "Hello (world)(hh)!"
		var replace_str = `sacascascascas<\1>aaa`
		var patten = "\\((.*?)\\)"
		res := vegePcre.PcreppReplaceImpl(patten, replace_str, src, "sig")
		match := vegePcre.PcreppMatchFirstImpl(patten, src, "sig")
		log.Println(res)
		log.Println(match)
	}
}

func gore2() {
	src := `Hello (world)(hh)!`
	repl := `~<$1>~`
	reg, err := regexp.Compile(`\((.*?)\)`)
	if err != nil {
		panic(err)
	}
	res := reg.ReplaceAllString(src, repl)
	log.Println(res)
}

func Re2MatchFirst(req PcreReq) string {
	if req.Src == "" {
		return ""
	}
	re, err := regexp.Compile(req.Pattern)
	if err != nil {
		return ""
	}
	return re.FindString(req.Src)
}
func TranFlagsToPattern(p, flags string) string {
	return fmt.Sprintf("(?%s)%s", flags, p)
}
