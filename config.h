/* user and group to drop privileges to */
static const char *user  = "user";
static const char *group = "user";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1d2021",   /* after initialization */
	[INPUT] =  "#282828",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#abb2bf";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
