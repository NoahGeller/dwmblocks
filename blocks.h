// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
// If the $BUTTON variable is exported to the commands as either 1, 2, or 3,
// then there was a click event on that block.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"🔗",      "bluetooth.sh", 5,                  7},
    {"",        "update.sh",    30,                 6},
    {"",        "network.sh",   5,                  5},
    {"",        "volume.sh",    0,                  2},
    {"",        "battery.sh",   5,                  4},
    {"",        "clock.sh",     1,                  1},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
