/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#F8F8F2",   /* after initialization */
	[INPUT] =  "#BD93F9",   /* during input */
	[FAILED] = "#FF5555",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
