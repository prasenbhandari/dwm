/**
 * config.h 
 * ALT + F11 | F12 
 */

static const char *upvol[]   = { "amixer", "set", "Master", "3+",     NULL };
static const char *downvol[] = { "amixer", "set", "Master", "3-",     NULL };
static const char *mutevol[] = { "amixer", "set", "Master", "toggle", NULL };

static Key keys[] = {
	{ MODKEY,                       XK_F8,    spawn,          {.v = upvol   } },
	{ MODKEY,                       XK_F7,    spawn,          {.v = downvol } },
	{ MODKEY,                       XK_F6,     spawn,          {.v = mutevol } },
};
