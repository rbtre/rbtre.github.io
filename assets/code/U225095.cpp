#include <fcntl.h>
#include <sys/mman.h>
#include <iostream>
#include <ranges>
#include <vector>
#define sv std::ranges::views::

using namespace std;
using tp = long long int;

signed main() {
  char* s = (char*)mmap(nullptr, 1, 3, 2, open("/dev/stdin", 2050), 0);
  cout << "sss
";
  return EXIT_SUCCESS;
}

/*
 */

/*#################################################################
#.................................................................#
#.............#......#.......This.Code.Was.Created.By.RBTree......#
#............#.#....#.#..............Limiting-Factor..............#
#.............########............................................#
#............#........#..##############################...........#
#...........#..V....V......#..#........................#..#...#...#
#............#........#....#..........###..###..........#..#.#.#..#
#............#..X##X..#..#............#....#.#...........#..#...#.#
#...........#...N##N...#..#...........###..###..........#.........#
#.......MOE..#..@.....#....#.#.#.#...................#.#..........#
#.............########.....#.#.#.##############.#.#..#.#..........#
#..........................#.#.#.#.............#.#.#.#.#..........#
#......#########...........#.#.#.#.................#.#.#..........#
#.....#.........#..........#.#.#.#.................#.#.#..........#
#.#.#.#G#R#A#S#S#.#.#......#.#.#.#.................#.#.#..........#
#.###################......#.#.#.#.................#.#.#..........#
#...........................#.#.#...................#.#...........#
#.................................................................#
#################################################################*/