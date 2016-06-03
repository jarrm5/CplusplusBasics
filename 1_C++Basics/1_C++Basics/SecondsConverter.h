int get_seconds();
/* Prompt for an integer that is the number of seconds.
   If the value entered is less than 1, keep prompting until something valid is entered.
   Return the valid number in seconds if succesful.
*/

void print(int,int,int,int);
/* print accepts the original number of seconds entered by the user,
   the computed hours, minutes and seconds.
   Display these computations using ternary operators.
   If any of the computed values are 0, do not display them (IE if 0 hours are computed, don't show 0 hours to the console).
   Also, if only a single unit of time is computed, display the singular unit of time
   (IE if 1 hour is computed, display "1 hour" instead of "1 hours").
*/