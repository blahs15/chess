# Chess

This program will be written in C++. It is a simple chess program, using a command line interface, and simple ascii graphics. The main purpose of this program is to practice the design and creation of a project.

## Design Goals

- Learn and use new features from C++14 & C++17

## Assumptions

N/A

## Limitations

1. GUI is command line only
2. Graphics are ascii only
3. There will be no computer AI

## Components

- Controller
  - The Controller will contain the main game loop, and manage user input.
- Board
  - The board will keep track of all piece locations, and will provide an ascii output of the board.
- Piece(s)
  - The Piece(s) will verify valid moves, and contain internal data for each piece.

## Class Diagrams

<!--
```puml
@startuml mainClassDiagram
class Controller {
  + Controller()
  + Controller(Board, bool whiteTurn)
  + void run()
  - std::pair<Position,Position> getMove()
  - Board m_board
  - bool m_whiteTurn
}

class Board {
  + Board()
  + void movePiece(Position start, Position end)
  + std::string print()
  + {static} final const int ROW_SIZE
  + {static} final const int COL_SIZE
  - std::vector<std::shared_ptr<Piece>> m_board
}

class Position {
  + Position()
  + Position(int x, int y)
  + operator=( const Piece& rhs )
  + int getX()
  + int getY()
  - int m_x
  - int m_y
}
@enduml
```

```puml
@startuml pieceClassDiagram
abstract class Piece {
  + Piece(Position)
  + {abstract} std::vector<Position> getMoves()
  + {abstract} bool checkMove(Position pos)
  + void setMoved()
  + Piece promote()
  # bool hasMoved()
  # Color m_color
  # Position m_pos
  # bool m_hasMoved
}

enum Color {
  BLACK
  WHITE
}

class King {
  + King(Position)
  + std::vector<Position> getMoves()
  + bool checkMove(Position pos)
}

class NullPiece {
  + NullPiece(Position)
  + std::vector<Position> getMoves()
  + bool checkMove(Position pos)
}

Piece ^- King
Piece ^- NullPiece
Piece *- Color
@enduml
```
-->

![](resources/mainClassDiagram.svg)

Only the King piece is shown below as an example. Otherwise only pieces that have added information from the base class are included.

![](resources/pieceClassDiagram.svg)

## Program Flow

<!--
```puml
@startuml mainSequence
actor player as "Player"
participant controller as "Controller"
participant board as "Board"
participant piece as "Piece"

-> controller : run()
activate controller

loop each turn
  controller -> player : getMove()
  controller <-- player
  controller -> board : checkMove(move)

  board -> piece : checkMove()
  board <-- piece : true
  board -> board : makeMove
  board -> piece : update piece

  controller <-- board

  controller -> controller : switch turns
end

deactivate controller
@enduml
```
-->

![](resources/mainSequence.svg)
