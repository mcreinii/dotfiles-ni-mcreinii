static const char norm_fg[] = "#c5c1c1";
static const char norm_bg[] = "#170909";
static const char norm_border[] = "#6d5959";

static const char sel_fg[] = "#c5c1c1";
static const char sel_bg[] = "#BB8566";
static const char sel_border[] = "#c5c1c1";

static const char urg_fg[] = "#c5c1c1";
static const char urg_bg[] = "#C15846";
static const char urg_border[] = "#C15846";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
