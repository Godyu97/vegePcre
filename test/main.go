package main

import (
	"log"

	"fmt"
	"github.com/Godyu97/vegePcre/pcre2"
	"regexp"
)

type PcreReq struct {
	Pattern    string
	ReplaceStr string
	Src        string
	Flags      string
}

func main() {
	//for i := 0; i < 1000; i++ {
	//	go func() {
	//		for i := 0; i < 1000; i++ {
	//			var src = fmt.Sprintf("Hello (%s)(%s)!", vegeTools.RandStringMask(256), vegeTools.RandStringMask(256))
	//			var replace_str = `sacascascascas<\1>aaa`
	//			var patten = "\\((.*?)\\)"
	//			res := pcre.PcreppReplaceImpl(patten, replace_str, src, "sig")
	//			match := pcre.PcreppMatchFirstImpl(patten, src, "sig")
	//			log.Println(res)
	//			log.Println(match)
	//		}
	//	}()
	//}
	//for {
	//	time.Sleep(time.Millisecond)
	//}
	TestPcre2()
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

func TestPcre2() {
	var src = fmt.Sprintf("Hello (%s)(%s)!", "世界", "鸿宇")
	var replace_str = `x`
	//var patten = "\\((.*?)\\)"
	var patten = "[\u4e00-\u9fa5]"
	re := pcre2.MustCompileOpts(patten, pcre2.HandleFlags("si"))
	res := re.ReplaceAllString(src, replace_str)
	log.Println(res)
}
