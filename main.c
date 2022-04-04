/* Project Description
    - two player game 
    - first to get 4 in a row, (including diagonal) wins

*/

/* Required Functions:
    - draw board
        - define boundaries
    - draw circles red and yellow
    - possible animation (last step)
    - number the columns, use pushbottons to drop in respective column
    - if there's already a token in selected column, new token must be dropped on top
    - if four in row, declare winner
*/

void drawBoard();
void drawToken();
void selectColumn();
void confirmChoice();
void placeToken();
void winner();


