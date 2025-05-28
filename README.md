# Raylib RPG Engine - A C++ Learning Project


A foundational 2D game engine/framework built with C++ and powered by **Raylib**, designed as a hands-on learning project to explore game development concepts, with a particular focus on creating elements for a simple RPG system.


---


## About The Project


This project began as a console-based text adventure engine, but has evolved to leverage the power and simplicity of **Raylib**, a fantastic library for 2D game programming. The primary goal is to provide a practical sandbox for learning various aspects of C++ and game development, specifically within the context of a graphical RPG.


While the core will be a flexible engine, I aim to implement features that lay the groundwork for an RPG experience, including:


* **NPC Management:** Defining and interacting with non-player characters.

* **Quest System:** Crafting and managing game objectives and storylines.

* **Level/Scene Management:** Designing and transitioning between different game areas.

* **Basic RPG Mechanics:** Exploring core RPG elements like character stats, inventory, or simple combat.


This shift allows for a much richer learning experience, transitioning from abstract text-based interactions to tangible visual and interactive game elements.


---


## Learning Goals


This project is a personal journey to deepen my understanding of C++ and game development. Key areas I aim to learn and implement include:


* **Raylib Fundamentals:** Mastering 2D rendering, input handling, audio integration, and basic animation.

* **Object-Oriented Programming (OOP) in C++:** Applying principles like encapsulation, inheritance, and polymorphism for game entities (e.g., `Player`, `NPC`, `Item`).

* **Game Loop Architecture:** Understanding and implementing a robust game loop.

* **Resource Management:** Efficiently loading and managing assets like textures, sounds, and fonts.

* **Event Handling:** Creating a system for processing user input and in-game events.

* **Basic Data Structures & Algorithms:** Utilizing appropriate structures for game data (e.g., managing inventory, spatial partitioning).

* **Modular Design:** Structuring the codebase for scalability and maintainability.

* **Simple RPG System Design:** Conceptualizing and implementing character attributes (HP, MP, Attack), inventory, basic equipment, and possibly turn-based or real-time combat mechanics.

* **Collision Detection:** Implementing basic collision logic for player, NPCs, and objects.


---


## Features & Planned Functionality


### Core Engine Features


These features form the fundamental building blocks of the engine:


* **Raylib Integration:** Core graphics, audio, and input handling powered by Raylib.

* **[Planned] Scene Management:** Ability to switch between different game screens/levels (e.g., main menu, game world, battle screen).

* **[Planned] Customizable Level Loading:** Implement a system to define and load **your own game levels** (e.g., from a file format like JSON or a custom map editor).

* **[Planned] Basic Player Controller:** Movement and interaction within the 2D world.

* **[Planned] Collision Detection:** Implementing basic collision logic for player, NPCs, and static environment objects.


### Planned RPG Elements


These elements are designed to specifically support the development of RPG games:


* **[Planned] NPC System:** Base classes for creating various NPC types (friendly, hostile) with simple behaviors and interaction capabilities.

    * *Goals:* Defining NPC attributes, dialogue options, and basic AI.

* **[Planned] Enemy System:** Specialized handling for hostile NPCs, including basic combat mechanics.

    * *Goals:* Defining enemy stats (HP, Attack, Defense), simple attack patterns, and loot drops.

* **[Planned] Item Management:** A robust system for defining, loading, and managing **your own items**.

    * *Goals:* Categories (consumables, equipment, quest items), inventory management, and item usage logic.

* **[Planned] Quest System:** A framework for defining and managing **your own quests** with stages, objectives, and rewards.

    * *Goals:* Tracking quest progress, quest acceptance/completion, and linking quests to NPCs.

* **[Planned] Character Statistics:** Implementation of core RPG attributes like Health Points (HP), Attack, Defense, and potentially Mana Points (MP).

* **[Planned] Simple Combat System:** Initial steps towards a turn-based or real-time combat system between the player and enemies.


---


## Getting Started


### Prerequisites


* **C++ Compiler:** A C++11 compatible compiler (e.g., GCC, Clang, MSVC).

* **Raylib Library:** You'll need to have Raylib installed and configured for your development environment. Refer to the official Raylib documentation for installation instructions: [https://www.raylib.com/](https://www.raylib.com/)



### Installation & Build


  **Clone the repository:**

    ```bash

    git clone https://github.com/HubertSuchorowski/2D-Raylib-Game-Engine.git

    cd 2D-Raylib-Game-Engine

    ```


---


## Usage


Once built, you can run the executable to see the current state of the engine. As development progresses, examples will be added to demonstrate how to:


* Create a game window.

* Load and display sprites.

* Move a player character.

* Interact with simple NPCs.

* [More specific usage examples as features are implemented]


---


## Project Status


This project is currently under active development. Features mentioned as "[Planned]" are future goals. I am continuously learning and iterating, so expect frequent updates and potential refactors.


---


## Contributing


As this is primarily a personal learning project, active external contributions are not explicitly sought at this moment. However, constructive feedback, bug reports, or suggestions are always welcome via issues!


---


## License


This project is licensed under the MIT License


---


## Contact


Hubert Suchorowski - https://github.com/HubertSuchorowski


Project Link: https://github.com/HubertSuchorowski/2D-Raylib-Game-Engine 
