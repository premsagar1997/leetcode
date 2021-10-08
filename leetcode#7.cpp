class Solution {
  public:
  int reverse(int x) {
    long r = 0;
    while (x != 0) {
      r = (r*10) + (x%10);
      x = x / 10;
    }
    return (r > INT32_MAX || r < INT32_MIN) ? 0 : r;
  }
};