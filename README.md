
# 2D Game with ECS Architecture

## Overview
This project is a **2D game** developed using C++ with an **Entity-Component-System (ECS)** architecture. The game leverages the **SFML** library for rendering graphics and handling user input.

## Features
- **Entity-Component-System (ECS) Architecture**: Efficiently handles game entities and their components.
- **Collision Detection**: Implements broad-phase collision detection using Axis-Aligned Bounding Boxes (AABB) and narrow-phase detection using custom algorithms.
- **User Input Handling**: Supports keyboard and mouse inputs for controlling the player and shooting bullets.
- **Enemy Spawning System**: Dynamically spawns enemies based on configuration settings.
- **Configurable Parameters**: Game parameters like player speed, enemy spawn rate, and bullet behaviors can be adjusted using a configuration file.

## Project Structure
```
src/
├── Components.h        # Defines components like position, velocity, and input
├── Entity.h            # Entity class with component management
├── Entity.cpp
├── EntityManager.h     # Manages entities and their components
├── EntityManager.cpp
├── Game.h              # Core game logic and systems
├── Game.cpp
├── main.cpp            # Entry point of the game
├── utils.h             # Utility functions (random number generation, etc.)
├── utils.cpp
bin/
└── config.txt          # Configuration file for game settings
```

## Dependencies
- **C++17**
- **SFML 2.6.1** (Simple and Fast Multimedia Library)

## Installation
1. Make sure you have **C++17** and **SFML** installed on your system.
   - On macOS, you can install SFML using Homebrew:
     ```bash
     brew install sfml
     ```
2. Clone this repository:
   ```bash
   git clone https://github.com/Dd1235/Geometry-Game.git
   cd ECS-Game
   ```

## Building the Project
To compile the project, run the following command:
```bash
g++ src/*.cpp -Isrc -I${SFML_INCLUDE_DIR} -L${SFML_LIB_DIR} -std=c++17 -lsfml-graphics -lsfml-window -lsfml-system -o game

```

## Running the Game
After building, you can run the game with:
```bash
./game
```

## Controls
- **I/J/K/L**: Move the player (Up/Left/Down/Right)
- **Mouse Left Click**: Shoot bullets
- **P**: Exit the game
- **Escape**: Pause/Resume the game

## Configuration
The game uses a configuration file `config.txt` to set parameters like:
- Player speed
- Enemy spawn rate
- Bullet speed

Edit the `config.txt` file to adjust the game settings.

## License
This project is licensed under the MIT License.

## Acknowledgments
This project was inspired by game development tutorials and serves as a learning exercise in implementing the ECS architecture and game systems.
