# USACO Guide Solutions in C++  

This repository, **[`Mhmd-Alami/usaco_guide_problems`](https://github.com/Mhmd-Alami/usaco_guide_problems)**, contains my personal C++ solutions to problems from [USACO Guide](https://usaco.guide/).  
The goal of this project is to systematically work through the guide, improve my competitive programming skills, and prepare for contests such as **ICPC**.

> ⚠️ **Disclaimer**  
> All solutions here are **my own implementations**.  
> If you are solving these problems for a course, contest, or assignment, **do not copy** these solutions. Use them only for learning and reference **after** you have tried the problems yourself.

---

## Goals

- Practice **algorithmic thinking** and **problem-solving** in modern C++.
- Build a strong foundation for **ICPC** and other competitive programming contests.
- Gain experience with:
  - Time and memory optimization
  - Clean and readable contest code
  - Standard patterns (greedy, DP, graphs, etc.)
  - Careful implementation and debugging

---

## Repository Structure

The repository is organized in a **hierarchical, numbered** structure to reflect difficulty and topic.

### Top-Level Layout

```text
.
├── 0_General/    # General notes, templates, or basic problems
├── 1_Bronze/     # USACO Bronze-level problems
├── 2_Silver/     # (future) USACO Silver-level problems
├── 3_Gold/       # (future) USACO Gold-level problems
├── 4_Platinum/   # (future) USACO Platinum-level problems
└── README.md
```

> Note: Some higher levels (Silver/Gold/Platinum) may be empty or partially filled depending on current progress.

### Inside a Difficulty Folder (Example: `1_Bronze/`)

Each difficulty folder is divided by **topic / section**:

```text
1_Bronze/
├── 1_Simulation/
├── 2_Basic_Complete_Search/
├── 3_...
└── ...
```

- `1_Simulation/` – simulation-style problems  
- `2_Basic_Complete_Search/` – simple brute-force / search problems  
- etc.

### Inside a Topic Folder (Example: `1_Bronze/1_Simulation/`)

Each problem is in its own numbered folder:

```text
1_Bronze/1_Simulation/
├── 1_Shell_Game/
├── 2_Mixing_Milk/
└── ...
```

### Inside a Problem Folder (Example: `1_Bronze/1_Simulation/1_Shell_Game/`)

A typical problem folder contains:

```text
1_Shell_Game/
├── 1_Shell_Game.cpp   # C++ source code (my solution)
├── shell.in           # Sample / test input (if applicable)
├── shell.out          # Expected / sample output (if applicable)
└── 1_Shell_Game       # Compiled executable (locally generated)
```

- `*.cpp` – main solution file.  
- `*.in` / `*.out` – input/output files used for local testing.  
- Executables are platform-dependent and may not run on all systems; you are expected to compile the `.cpp` files yourself.

---

## How to Compile and Run

You can compile any problem manually using a standard C++ compiler.

From inside a problem directory, for example:

```bash
g++ -std=c++17 -O2 -Wall -Wextra -o 1_Shell_Game 1_Shell_Game.cpp
```

Then run:

```bash
./1_Shell_Game < shell.in > my_output.out
diff my_output.out shell.out  # optional: compare with expected output
```

Use your preferred compiler:

- `g++` / `clang++` on Linux / macOS  
- `g++` (MinGW) or MSVC on Windows

---

## How to Navigate This Repository

1. Go to the GitHub repo:  
   **[`Mhmd-Alami/usaco_guide_problems`](https://github.com/Mhmd-Alami/usaco_guide_problems)**

2. Choose the **difficulty**:
   - `0_General` for general material / setup  
   - `1_Bronze` for beginner/introductory USACO problems  
   - `2_Silver`, `3_Gold`, `4_Platinum` for higher levels (as they are added)

3. Pick a **topic** inside that difficulty:
   - e.g. `1_Simulation`, `2_Basic_Complete_Search`, …

4. Pick a **problem folder**:
   - e.g. `1_Shell_Game`, `2_Mixing_Milk`, …

5. Open the `.cpp` file:
   - Read comments (if present)
   - Study the approach and implementation
   - Compare with your own solution

I strongly recommend:

- First trying to solve the problem on your own.
- Then using these solutions to:
  - Debug your code
  - Learn alternative approaches
  - Improve code style and optimization

---

## Conventions

- **Language:** C++ (usually C++17 or later)
- **Style:**
  - Focus on competitive programming style (fast I/O, concise code)
  - Occasionally abbreviated variable names (typical for contests)
  - Comments added when a trick or non-obvious idea is used
- **File naming:**
  - Folders and files are prefixed with numbers to preserve ordering (e.g. `1_Shell_Game`, `2_Mixing_Milk`).

---

## Progress & Future Work

This repository is updated as I solve more problems.

Planned improvements:

- Cover more sections of the USACO Guide at each difficulty level.
- Add more topics (graphs, DP, prefix sums, binary search, etc.).
- Add explanations / short write-ups for selected problems.
- Possibly add a **progress overview** (e.g., a markdown table listing solved problems by topic).

---

## License & Usage

Unless otherwise specified:

- You are free to **read and learn** from the code.
- You may adapt ideas for your own understanding and practice.

You **must not**:

- Use this code directly in live contests (USACO, ICPC, etc.).
- Submit these solutions as your own for homework, assignments, or graded tasks.
- Copy-paste blindly without understanding.

If you find this repository useful and want to reference it, a mention is appreciated but not required.

---

## Contributions & Feedback

This is mainly a **personal practice** repository, but:

- If you spot a bug or a wrong solution, feel free to open an **issue** on  
  **[`Mhmd-Alami/usaco_guide_problems`](https://github.com/Mhmd-Alami/usaco_guide_problems)**.
- If you have a cleaner / more efficient solution, you can open a **pull request** with an explanation.

---

Happy coding and good luck with USACO & ICPC!
