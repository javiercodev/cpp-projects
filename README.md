# cpp-projects

C++ exercises organized by topic, designed so anyone can learn C++ by practicing. Clone the repo, pick a topic and run each exercise to see how it works.

## Contents

| Folder | Topic |
| --- | --- |
| [`cpp_fundamentals`](./cpp_fundamentals) | C++ fundamentals and core syntax |
| [`functions_and_files`](./functions_and_files) | Functions and working with files |

## How to run an exercise

You'll need a C++20 compiler (such as `g++` or `clang++`) and [CMake](https://cmake.org/download/) 3.20 or newer installed.

```bash
git clone https://github.com/javiercodev/cpp-projects.git
cd cpp-projects
cmake -S . -B build
cmake --build build
./build/<folder>_<exercise>
```

Each `.cpp` file is built as its own executable, named after its folder and file. For example, `cpp_fundamentals/hello_world.cpp` runs with:

```bash
./build/cpp_fundamentals_hello_world
```

## Note

Work in progress: new exercises are added regularly. Feel free to open an issue if you have suggestions.