//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "date '+%j/365 - %I:%M%p;'",					5,		0},
	{"", "vpn", 										5, 		0},
	{" | ", "btc",										5,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "";
static unsigned int delimLen = 5;
