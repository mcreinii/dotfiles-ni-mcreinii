/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x21250fff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc7c8c3ff, 0x21250fff, 0x70745fff },
	[SchemeSel]  = { 0xc7c8c3ff, 0x6B9064ff, 0x7F945Cff },
	[SchemeUrg]  = { 0xc7c8c3ff, 0x7F945Cff, 0x6B9064ff },
};
