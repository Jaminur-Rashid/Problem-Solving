#include <string>
#include <iostream>
#include <iomanip>
#include <boost/format.hpp>
#include <sstream>

int main() {
  std::string s("12");
  s.insert(0, 3, '0');
  std::cout << s << "\n";

  std::ostringstream ss;
  ss << std::setw(5) << std::setfill('0') << 12 << "\n";
  std::string s2(ss.str());
  std::cout << s2;

  boost::format fmt("%05d\n");
  fmt % 12;
  std::string s3 = fmt.str();
  std::cout << s3;
}
