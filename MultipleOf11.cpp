bool eleven(const std::string input) {
  int s(0);
  for(size_t p = 0; p < input.size(); p++){s += (input[p] - '0') * (p % 2 ? 1 : -1);}
  return (s % 11 == 0);
}
