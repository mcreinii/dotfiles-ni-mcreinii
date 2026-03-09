static const char norm_fg[] = "#c4cbcc";
static const char norm_bg[] = "#162f33";
static const char norm_border[] = "#65787b";

static const char sel_fg[] = "#c4cbcc";
static const char sel_bg[] = "#5A9298";
static const char sel_border[] = "#c4cbcc";

static const char urg_fg[] = "#c4cbcc";
static const char urg_bg[] = "#4A7888";
static const char urg_border[] = "#4A7888";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
