void f(int& x) noexcept
  effects {
    std::static_lifetime l{};
    x = l;
  }
{
  x = 42;
}

int main() {
  int x{};
  f(x);
}
