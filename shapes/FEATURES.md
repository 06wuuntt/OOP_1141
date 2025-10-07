# Problem Statement

**Problem: sorting shapes**
A simple geometry application called _geo_ is needed to sort shapes such as triangles, circles, rectangles and others. As a command line application, _geo_ reads shapes from an input file, sorts the shapes by area or perimeter in increasing order or decreasing order, and write the result to an output file. For example,
```bash
geo input.txt output.txt area inc
```
sorts the shapes in file _input.txt_ in increasing order by area, and writes the result to the file _output.txt_. And
```bash
geo input.txt output.txt perimeter dec
```
sorts the shapes in file _input.txt_ in decreasing order by perimeter, and writes the result to the file _output.txt_.

# Features and Tasks

- [ ] F1: Read input file
- [ ] F2: Write output file
- [ ] F3: Shapes representation and computation
    - [x] T3.1: point
    - [x] T3.2: triangles
    - [x] T3.3: circle
    - [ ] T3.4: rectangles
    - [ ] T3.5: convex polygon
- [ ] F4: Sorting by area or perimeter
    - [x] T4.1: Learn how to sort integers with standard library
    - [ ] T4.2: Sort shapes by area by increasing order
    - [ ] T4.3: Sort shapes by area by decreasing order
    - [ ] T4.4: Sort shapes by perimeter by increasing order
    - [ ] T4.5: Sort shapes by perimeter by decreasing order
- [ ] F5: Command line argument processing