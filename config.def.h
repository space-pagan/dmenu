/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "monospace:size=13",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_gray1[]   = "#222222";
static const char col_gray2[]   = "#444444";
static const char col_gray3[]   = "#bbbbbb";
static const char col_gray4[]   = "#eeeeee";
static const char col_cyan[]    = "#005577";
static const char col_1[]       = "#252a35";
static const char col_2[]       = "#ffbaff";
static const char col_3[]       = "#606087";
static const char col_4[]       = "#ff87d7";
static const char col_5[]       = "#765abf";
static const char col_6[]       = "#bd93f9";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { col_2,     col_5 },
	[SchemeSel] =  { col_gray4, col_6 },
	[SchemeOut] =  { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
