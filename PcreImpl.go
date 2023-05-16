package vegePcre

import "C"

/* * Constructor.
 * Compile the given pattern. An Pcre object created this way can
 * be used multiple times to do searches.
 *
 * @param "expression"  a string, which must be a valid perl regular expression.
 * @param "flags" can be one or more of the following letters:
 *
 *- <b>i</b>   Search case insensitive.
 *
 *- <b>m</b>   Match on multiple lines, thus ^ and $ are interpreted
 *             as the start and end of the entire string, not of a
 *             single line.
 *
 *- <b>s</b>   A dot in an expression matches newlines too(which is
 *             normally not the case).
 *
 *- <b>x</b>   Whitespace characters will be ignored (except within
 *             character classes or if escaped).
 * @return A new Pcre object, which holds te compiled pattern.
 */
func PcreppReplaceImpl(pattern string, repl string, src string, flags string) string {
	if src == "" {
		return ""
	}
	ret := Pcrecpp_ReplaceCgo(pattern, repl, src, flags)
	return ret
}

func PcreppMatchFirstImpl(pattern, src, flags string) string {
	if src == "" {
		return ""
	}
	return Pcrecpp_MatchFirst(pattern, src, flags)
}
