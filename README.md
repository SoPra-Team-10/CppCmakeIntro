# C++, CMake, Sfml und GTest Intro fürs SoPra
## Einleitung SFML
 * Simple and Fast Multimedia Library (System, Window, Graphics, Audio, Network)
 * Wir nutzen: Window, Graphics, Audio
 * Kein System (das kann C++ ab 11 größtenteils selber), und kein Network (kann kein WebSockets)
 
## Hello World mit SFML
 * Einfaches Fenster mit SFML, mit HelloWorld Text
 * Doku zeigen
 * Buttons o.ä. nicht so geil
 
## Theorie
### Container
 * Nutzt Templates für Generics
 * vector: vermutlich häufigster Container (O(1) zugriff, push_back i.A. teuer)
 * list: kein Random access, einfügen an jeder Stelle schnell
 * deque: oftmals guter kompromiss
 * Iterator: wie pointer nur allgemein (überladenen Operatoren)
 
## Einleitung "Flummi"
 * Demo Projekt
 * OOP, SFML
 * Einleitung CLion
 
## Implementierung (zusammen)
 * **Demo 2** (Clion)

## Erweiterung um Konfig aus JSON
 * Einleitung nlohmann::json
 * Wieso keine reflections (schlecht anpassbar)
 * Einleitung streams
 * **Demo 3** (Clion)
 
## Multithreading
## GTest
 * Ergänzen von Demo 3 durch Unit Tests (triviale Tests)
 * Einbauen in CMake, Demo von CLion support
 
## Tools (Asan, Valgrind, clang-tidy)
## Doxygen
## Weiterführend (CGL, godbolt.org, CppRef, SFML Doku...)
## Fragen
