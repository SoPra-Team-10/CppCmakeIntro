# C++, CMake, Sfml und GTest Intro fürs SoPra
## Einleitung C++ (wieso oftmals schwierig angesehen)
 * Keine automatische Speicherverwaltung (aber Standardlibrary hilft + Referenzen)
 * Es existiert undefiniertes Verhalten (Null-Pointer, fehlendes return, division durch 0)
 * C with classes
 * Nicht mehr: C++11, jetzt C++17
 * Standardisiert und offen! => Viele compiler
 * Vergleichsweise kleiner Sprachkern (z.B. 60 Schlüsselwörter, C# 86), viel in der Standardlibrary
 * Tendentiell weniger tiefe OOP Strukturen
 * Templates (nicht nur Typen sondern auch Werte), constexpr, Operatorenüberladung
 
## Buildprozess (Präprozessor, Compiler, Linker)
 * Quasi der C Buildprozess
 * Präprozessor, simples search and replace
 * include direktive um typenkonsitzen zu wahren (deswegen Buildsystem langsam)
 * compiler
 * templates im header
 * Linker baut übersetzungseinheiten zusammen
 
## CMake (Einfaches Projekt, ab hier Hands on)
 * Viele Übersetzungseinheiten mit Abhängigkeiten zueinander
 * => Make gut aber schlecht wenn viele Plattformen und Libraries
 * CMake => automatisierte Makefiles (oder anderes)
 * Demo einfaches Hello World (**Demo 0**, vim)
 
## Einfaches Hello World
 * Entsprechendes C++ File erstellen (**Demo 1**, vim)
 * include nochmal erklären (unterschied zwischen < und " und C und C++ Headern)
 * Keine main Klasse!
 * namespaces
 * Operatoren überladung

## Einleitung SFML
 * Simple and Fast Multimedia Library (System, Window, Graphics, Audio, Network)
 * Wir nutzen: Window, Graphics, Audio
 * Kein System (das kann C++ ab 11 größtenteils selber), und kein Network (kann kein WebSockets)
 
## Hello World mit SFML
 * Einfaches Fenster mit SFML, mit HelloWorld Text
 * Doku zeigen
 * Buttons o.ä. nicht so geil
 
## Theorie
### Copy
 * Alles wird immer kopiert
 * Nicht so gut für Performance
### Pointer, Smart Pointer, Referenzen
 * C => Pointer (kurz einführung)
 * Angst, gefährlich, böse
 * Eigentlich nicht schlimm aber viel potential um sachen kaputt zu machen (Leaks, Owner)
 * Niemand will sich im Anwendungscode um Speicherverwaltung kümmern
 * => Smart Pointer (shared_ptr, unique_ptr)
 * unique_ptr: keine Kopien, kümmern sich selber um entsorgung am Ende vom scope (genau ein Owner)
 * oftmals pointer zwischen mehreren owner geteilt (shared_ptr), teurer aber quasi immer nutzbar
 * da teuer oftmals overkill z.B. für Funktionsargumente => Referenzen, nie null können aber theoretisch ungültig sein, vor allem für Funktionsargumente
### Pattern und anderes: Const correctness, RAII
 * alles per referenz => riesen Fehlerquelle => const correctness
 * referenzen, member, methoden
 * Resource aquisition is initialization
 * Erklärung destruktor und bekannte lifetime
 * Bsp. datei (vgl. Java, try, catch, finally)
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
