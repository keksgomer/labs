unsigned long long factorial(int n) {
  if (n < 0) return 0;          // некорректный ввод
  if (n <= 1) return 1;
  return static_cast<unsigned long long>(n) * factorial(n - 1);
}