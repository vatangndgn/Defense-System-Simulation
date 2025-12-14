# Defense System Simulation (HİSAR Concept)

This project is a C++ console application that simulates a **Defense Industry Ammunition Management System**. It demonstrates core **Object-Oriented Programming (OOP)** principles required for scalable and maintainable military software architectures.

## 🚀 Key Features & Technical Competencies

* **Inheritance :** A base `Muhimmat` (Ammunition) class is used to derive specific types like `Roket` and `AkilliFuze`.
* **Polymorphism :** Utilized `virtual` functions to enable dynamic behavior for different ammunition types using a single interface.
* **Abstract Classes :** Enforced a strict contract for all derived classes using Pure Virtual Functions (`virtual void patla() = 0;`).
* **Memory Management :** Implemented manual memory management with `new` and `delete` operators to ensure **zero memory leaks**, mimicking resource-constrained embedded environments.
* **Virtual Destructors :** ensured proper cleanup of derived objects through base class pointers.

## 🛠️ Code Structure

* `Muhimmat` (Base Class): Abstract interface for all munitions.
* `Roket`: Standard ballistic missile simulation.
* `AkilliFuze`: Smart missile simulation with "Lock-on" capability log.
* `main.cpp`: Driver code that simulates an inventory load, firing sequence, and memory cleanup.

## 👨‍💻 Developer
**VATAN GÜNDOĞAN** - Software Engineering Student & C++ Enthusiast
