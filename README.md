# Defense System Simulation (HİSAR Concept) 

This project is a C++ console application that simulates a **Defense Industry Ammunition Management System**. It demonstrates advanced **Object-Oriented Programming (OOP)** principles required for scalable military software architectures.

##  Key Features & Technical Competencies

### 1. Advanced OOP Mechanics
* **Operator Overloading (`operator+`):** Implemented a custom addition operator to simulate the **fusion of two ammunition units**. Combining two `Roket` objects dynamically creates a new "Mega" munition with cumulative damage power.
* **Polymorphism (Çok Biçimlilik):** Utilized `virtual` functions to enable dynamic behavior for different ammunition types (`Roket`, `AkilliFuze`) using a single abstract interface.
* **Inheritance (Miras Alma):** Designed a scalable hierarchy with a base `Muhimmat` class.

### 2. Memory & Resource Management
* **Dynamic Memory Allocation:** Used `new` and `delete` operators to manage object lifecycles manually, simulating resource-constrained embedded environments.
* **Virtual Destructors:** Ensured zero memory leaks by properly cleaning up derived objects through base class pointers.

##  Code Structure

* `Muhimmat` (Abstract Base Class): Interface defining the contract for all munitions.
* `Roket`: Standard ballistic missile class with **Operator Overloading** capability.
* `AkilliFuze`: Smart missile simulation with specific log outputs.
* `main.cpp`: Driver code demonstrating inventory management, object fusion, and firing sequences.

##  Developer
**Vatan Gündoğan**
*Software Engineering Student & Aspiring Defense Industry Engineer*
