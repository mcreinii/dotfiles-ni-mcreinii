const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#162f33", /* black   */
  [1] = "#4A7888", /* red     */
  [2] = "#5A9298", /* green   */
  [3] = "#4C96AD", /* yellow  */
  [4] = "#76CDDC", /* blue    */
  [5] = "#78C7E2", /* magenta */
  [6] = "#9BAE9F", /* cyan    */
  [7] = "#c4cbcc", /* white   */

  /* 8 bright colors */
  [8]  = "#65787b",  /* black   */
  [9]  = "#4A7888",  /* red     */
  [10] = "#5A9298", /* green   */
  [11] = "#4C96AD", /* yellow  */
  [12] = "#76CDDC", /* blue    */
  [13] = "#78C7E2", /* magenta */
  [14] = "#9BAE9F", /* cyan    */
  [15] = "#c4cbcc", /* white   */

  /* special colors */
  [256] = "#162f33", /* background */
  [257] = "#c4cbcc", /* foreground */
  [258] = "#c4cbcc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
