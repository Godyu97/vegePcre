package pcre2

import (
	"github.com/Godyu97/vegePcre/pcre2/lib"
	"strings"
)

type CompileOption uint32

// Compile option bits
const (
	Anchored           = CompileOption(lib.DPCRE2_ANCHORED)
	AllowEmptyClass    = CompileOption(lib.DPCRE2_ALLOW_EMPTY_CLASS)
	AltBsux            = CompileOption(lib.DPCRE2_ALT_BSUX)
	AltCircumflex      = CompileOption(lib.DPCRE2_ALT_CIRCUMFLEX)
	AltVerbnames       = CompileOption(lib.DPCRE2_ALT_VERBNAMES)
	AutoCallout        = CompileOption(lib.DPCRE2_AUTO_CALLOUT)
	Caseless           = CompileOption(lib.DPCRE2_CASELESS)
	DollarEndOnly      = CompileOption(lib.DPCRE2_DOLLAR_ENDONLY)
	DotAll             = CompileOption(lib.DPCRE2_DOTALL)
	DupNames           = CompileOption(lib.DPCRE2_DUPNAMES)
	EndAnchored        = CompileOption(lib.DPCRE2_ENDANCHORED)
	Extended           = CompileOption(lib.DPCRE2_EXTENDED)
	FirstLine          = CompileOption(lib.DPCRE2_FIRSTLINE)
	Literal            = CompileOption(lib.DPCRE2_LITERAL)
	MatchInvalidUTF    = CompileOption(lib.DPCRE2_MATCH_INVALID_UTF)
	MactchUnsetBackref = CompileOption(lib.DPCRE2_MATCH_UNSET_BACKREF)
	Multiline          = CompileOption(lib.DPCRE2_MULTILINE)
	NeverBackslashC    = CompileOption(lib.DPCRE2_NEVER_BACKSLASH_C)
	NeverUCP           = CompileOption(lib.DPCRE2_NEVER_UCP)
	NeverUTF           = CompileOption(lib.DPCRE2_NEVER_UTF)
	NoAutoCapture      = CompileOption(lib.DPCRE2_NO_AUTO_CAPTURE)
	NoAutoPossess      = CompileOption(lib.DPCRE2_NO_AUTO_POSSESS)
	NoDotStarAnchor    = CompileOption(lib.DPCRE2_NO_DOTSTAR_ANCHOR)
	NoStartOptimize    = CompileOption(lib.DPCRE2_NO_START_OPTIMIZE)
	NoUTFCheck         = CompileOption(lib.DPCRE2_NO_UTF_CHECK)
	UCP                = CompileOption(lib.DPCRE2_UCP)
	Ungreedy           = CompileOption(lib.DPCRE2_UNGREEDY)
	UseOffsetLimit     = CompileOption(lib.DPCRE2_USE_OFFSET_LIMIT)
	UTF                = CompileOption(lib.DPCRE2_UTF)
)

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
func HandleFlags(flags string) CompileOption {
	var f = CompileOption(0)
	if strings.Contains(flags, "i") {
		f |= Caseless
	}
	if strings.Contains(flags, "s") {
		f |= DotAll
	}
	if strings.Contains(flags, "m") {
		f |= Multiline
	}
	if strings.Contains(flags, "x") {
		f |= Extended
	}
	return f
}
