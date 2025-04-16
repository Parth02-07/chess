# chess

# C++ Chess Game Engine

This is a fully-featured **C++ Chess Game Engine** that supports all the official rules of chess, including:

- 🏰 **Castling** (both king-side and queen-side)
- 🐾 **En Passant**
- 👑 **Pawn Promotion**
- ☠️ **Check, Checkmate, and Stalemate Detection**
- ♟️ Standard Chess Movement and Validation

---

## 📁 Project Structure

- `Board.h` / `Board.cpp`: Contains the core `Board` class and all chess logic.
- `Space.h` / `Space.cpp`: Represents a single square on the board and holds information about the piece on it.
- `main.cpp`: Entry point for running the game and interacting with the engine.
- (Optional) `Player.h`, `Game.h`, etc. if extended.

---

## ✅ Features

- **Move Validation**: Ensures all player moves are legal.
- **Special Moves Support**: Includes castling, en passant, and pawn promotion.
- **Game End Detection**: Detects checkmate, stalemate, and draw.
- **Undo Support** (if implemented): Revert moves safely (e.g., during AI search).
- **Console-based UI**: Basic board printing and text-based interaction.

---

## 🧠 How It Works

The core game loop uses the `Board` class to:

1. Display the board
2. Accept user input
3. Validate the move
4. Apply the move (and check for special rules)
5. Check for check/checkmate/stalemate

---
![Screenshot 2025-04-16 133528](https://github.com/user-attachments/assets/1903e52b-59d7-4433-b17e-639462da5ae0)
![Screenshot 2025-04-16 133541](https://github.com/user-attachments/assets/f72680b0-8124-474f-802e-6b2a1f056197)
![Screenshot 2025-04-16 133643](https://github.com/user-attachments/assets/24961e9e-6049-4d16-b902-82ef079f80a8)
![Screenshot 2025-04-16 133554](https://github.com/user-attachments/assets/0572f283-6d71-4147-9b43-4f488d4e359c)

## 🛠️ How to Compile

Make sure you have a C++17-compatible compiler.

```bash
g++ -std=c++17 main.cpp Board.cpp Space.cpp -o chess
./chess
 

