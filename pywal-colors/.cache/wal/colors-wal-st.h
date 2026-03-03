const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101010", /* black   */
  [1] = "#586DAE", /* red     */
  [2] = "#647AB6", /* green   */
  [3] = "#6376D1", /* yellow  */
  [4] = "#6981BC", /* blue    */
  [5] = "#6E88CE", /* magenta */
  [6] = "#7891E2", /* cyan    */
  [7] = "#c3c3c3", /* white   */

  /* 8 bright colors */
  [8]  = "#6c5959",  /* black   */
  [9]  = "#586DAE",  /* red     */
  [10] = "#647AB6", /* green   */
  [11] = "#6376D1", /* yellow  */
  [12] = "#6981BC", /* blue    */
  [13] = "#6E88CE", /* magenta */
  [14] = "#7891E2", /* cyan    */
  [15] = "#c3c3c3", /* white   */

  /* special colors */
  [256] = "#101010", /* background */
  [257] = "#c3c3c3", /* foreground */
  [258] = "#c3c3c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
