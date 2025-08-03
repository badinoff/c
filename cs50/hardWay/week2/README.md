# Scrabble (Week 2)
A CS50 Week 2 problem set where two players enter words, scored using standard Scrabble point values (array in `main.c`). The program computes calculated scores and compares them to determine a winner. Built with modular C code, deliberately avoiding `cs50.h` to rely on classic C functions. The over-engineered design enhances complexity for learning and future scalability.

**Link to cs50 problem set:** [https://cs50.harvard.edu/x/2025/psets/2/scrabble/](https://cs50.harvard.edu/x/2025/psets/2/scrabble/)

## Features
- Validates input (allows letters only) from 2 players.
- Determines and compares word scores.
- Prints the result.

## Files
- `main.c`: Game logic
- `inputval.c/h`: Input validation
- `scoring.c/h`: Scoring logic
- `version.h`: Version tracking

## Build
```bash
gcc -o scrabble main.c inputval.c scoring.c -Wall
./scrabble