const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0d1f", /* black   */
  [1] = "#3D4E64", /* red     */
  [2] = "#43425E", /* green   */
  [3] = "#404060", /* yellow  */
  [4] = "#424867", /* blue    */
  [5] = "#45506B", /* magenta */
  [6] = "#43506D", /* cyan    */
  [7] = "#c2c2c7", /* white   */

  /* 8 bright colors */
  [8]  = "#5c5c71",  /* black   */
  [9]  = "#3D4E64",  /* red     */
  [10] = "#43425E", /* green   */
  [11] = "#404060", /* yellow  */
  [12] = "#424867", /* blue    */
  [13] = "#45506B", /* magenta */
  [14] = "#43506D", /* cyan    */
  [15] = "#c2c2c7", /* white   */

  /* special colors */
  [256] = "#0d0d1f", /* background */
  [257] = "#c2c2c7", /* foreground */
  [258] = "#c2c2c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
