/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282A36",   /* after initialization */
	[INPUT] =  "#BD93F9",   /* during input */
	[FAILED] = "#FF5555",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
