# MyProject

Une application C++ qui calcule les nombres de fibonacci en parallèle.

## Prérequis
- g++ ≥ 9.0

## Verification de la version
```bash
g++ –version
```

## Compilation
```bash
g++ -Iinclude src/main.cpp src/fibonacci.cpp -pthread -o myproject
```

## Exécution
```bash
./myproject
```

## Structure du projet
```text
MyProject/
├─ README.md
├─ include/
│  └─ fibonnacci.h
├─ src/
│  ├─ main.cpp
│  └─ fibonacci.cpp
└─ bin/
```

## Utilisation
```bash
./myproject 10    # Affiche le résultat de Fibonacci(10) = 55
```

## Licence
MIT License 

## Contact
mailto:contact@example.com
