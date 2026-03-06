const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#21250f", /* black   */
  [1] = "#7F945C", /* red     */
  [2] = "#6B9064", /* green   */
  [3] = "#99933E", /* yellow  */
  [4] = "#9DA65E", /* blue    */
  [5] = "#CCB755", /* magenta */
  [6] = "#E5CC6E", /* cyan    */
  [7] = "#c7c8c3", /* white   */

  /* 8 bright colors */
  [8]  = "#70745f",  /* black   */
  [9]  = "#7F945C",  /* red     */
  [10] = "#6B9064", /* green   */
  [11] = "#99933E", /* yellow  */
  [12] = "#9DA65E", /* blue    */
  [13] = "#CCB755", /* magenta */
  [14] = "#E5CC6E", /* cyan    */
  [15] = "#c7c8c3", /* white   */

  /* special colors */
  [256] = "#21250f", /* background */
  [257] = "#c7c8c3", /* foreground */
  [258] = "#c7c8c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
