# SpaceDungeon

**SpaceDungeon** is a three-level escape-room game built in **Unreal Engine**. The project utilizes a modular, Blueprint-based architecture to manage game logic, environmental puzzles, and frame-rate independent mechanics.

<img width="1920" height="1080" alt="Lvl1_2" src="https://github.com/user-attachments/assets/691bfdb8-1faa-4f33-93a4-7cab383ac832" />
<img width="1920" height="1080" alt="Lvl1_3" src="https://github.com/user-attachments/assets/8902d1f7-1667-4c2c-b59a-c09fcc9b89f0" />
<img width="1920" height="1080" alt="Lvl2_2" src="https://github.com/user-attachments/assets/f8a5b8e2-9937-4538-ab3f-8ec4e43eb664" />


---

## 🚀 Key Features

* **Modular Blueprint Architecture:** Utilizes a unified GameMode, PlayerController, and GameInstance system to govern global game flow and state.
* **Delta-Time Elixir System:** A survival timer mechanic that ensures consistent depletion behavior across varying hardware.
* **Physics-Driven Puzzles:** Level 3 features complex interactions including weight-based mechanics, lasers, and portal physics.
* **Procedural Elements:** Includes procedural dungeon design to enhance environmental depth and variety.
* **Integrated Hint System:** A narrative-driven mechanic allowing players to trade resources for riddle clues.

---

## 👥 Meet the Team

### [Nkem Mogbo](https://github.com/orgs/DungeonMasterzz/people/Mogboella) – Technical Lead
Implemented core systems governing game flow, elixir timing, and progression. Established Scrum-lite processes and GitHub workflows.

### [Yash Jain](https://github.com/orgs/DungeonMasterzz/people/yash-jain221) – Physics Programmer
Developed Level 3 and implemented physics-driven systems including pressure plates, lasers, and portal behaviors using ray tracing.

### [Shreyansh Soni](https://github.com/orgs/DungeonMasterzz/people/batunii) – Gameplay Programmer
Implemented Level 1 and designed the reusable riddle architecture and hint system. Authored the technical design document to align mechanics with goals.

### [Diksha Chottani](https://github.com/orgs/DungeonMasterzz/people/dik17sha) – Environment Artist
Responsible for sourcing, preparing, and organizing 3D environmental assets to ensure a consistent space-themed aesthetic across all levels.

### [Sirat Baweja](https://github.com/orgs/DungeonMasterzz/people/0xs1r4t) – Technical Artist
Developed procedural dungeon elements and UI-related visuals. Optimized materials and lighting to support performance and atmosphere.

---

## 📖 Lessons Learned

* **Binary File Constraints:** Unreal’s reliance on binary Blueprint files requires strict file ownership; unlike code, these cannot be easily merged line-by-line.
* **Hardware Parity:** Performance varies greatly in Unreal Engine based on developer hardware, impacting iteration speeds and testing frequency
* **Cross-Disciplinary Roles:** Game development roles have naturally asymmetric "visibility"; programming features are easily tracked via commits, while art polish is essential but harder to quantify.

---

## ⚙️ Installation
1. Clone the repository to your local machine.
2. Ensure you have **Unreal Engine** installed.
3. Open `SpaceDungeon.uproject`.
4. Play from the Main Menu level to experience the full progression loop.
