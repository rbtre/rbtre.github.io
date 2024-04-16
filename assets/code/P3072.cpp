#include <iostream>
#include <map>
#include <tuple>
#include <unordered_map>
#include <utility>
#define ck(dv, px, py) (d != dv || !mp[x - px][y - py])
#define pd(pv) (d + pv + 4) & 3

using namespace std;
using tp = long long int;
constexpr tp p[][2] = {1, 0, 0, 1, -1, 0, 0, -1};

unordered_map<tp, map<tp, bool>> mp;

signed main() {
  tp n, x, y, d = 0, cnt = 0;
  pair<tp, tp> l = make_pair(-1ull >> 2, -1ull >> 2);
  for (scanf("%lld", &n); n--; tie(x, y) = l) {
    scanf("%lld%lld", &x, &y);
    tie(mp[x][y], l) = make_pair(1, min(l, make_pair(x, y)));
  }
  do {
    tie(x, y, cnt, d) = make_tuple(x + p[d][1], y + p[d][0], cnt + 1, pd(-1));
    while (ck(0, 0, 0) && ck(1, 0, 1) && ck(2, 1, 1) && ck(3, 1, 0)) {
      d = pd(1);
    }
  } while (make_pair(x, y) != l);
  printf("%lld
", cnt);
  return EXIT_SUCCESS;
}

/*#################################################################
#.................................................................#
#............................This.Code.Was.Created.By.RBTree......#
#.............#......#...............Limiting-Factor..............#
#............#.#....#.#.................Soul-Code.................#
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