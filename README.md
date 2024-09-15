# Matrix Guessing Game 🎮

A console-based Matrix Guessing Game implemented in C. The game involves revealing characters in a matrix and attempting to match them in consecutive guesses to clear stages.

## Features

- **Matrix Setup**: The game initializes a 6x6 matrix with random characters 'A', 'B', or 'C'. Another matrix, hidden from the player, stores these characters.
- **User Interaction**: Players can reveal characters by entering the coordinates of a matrix cell.
- **Match Checking**: If a player guesses a cell with the same character as their previous guess, they clear the stage. If not, the game displays a loss message.
- **Game Progress**: Players can continue guessing until they choose to exit, with their progress tracked by the number of cleared stages.

## How It Works

1. **Initialization**: A 6x6 matrix is displayed with all cells initialized to `*`, and another matrix is populated with random characters ('A', 'B', or 'C').
2. **Gameplay**:
    - The player is prompted to enter coordinates to reveal a character.
    - The revealed character is compared with the previously revealed character.
    - If the characters match, the player clears the stage.
    - If they do not match and it's not the first guess, the player loses.
3. **Exit**: The player can choose to exit the game at any time, and their progress is displayed.

## Code Overview

- **Matrix Setup**: Initializes two 6x6 matrices, one for player display and one for storing random characters.
- **User Interaction**: Allows the player to input coordinates and reveals characters from the hidden matrix.
- **Match Logic**: Compares the current guess with the previous one to determine if the stage is cleared or if the player loses.

## Future Improvements

- Add difficulty levels with different matrix sizes or character sets.
- Implement a scoring system to track player performance over multiple sessions.
- Enhance the user interface with graphical representation.

