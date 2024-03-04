#include <iostream>
using namespace std;
class pet {
  private: int happy;
  public:
      pet() { happy = 50; }
      void play() { cout << "Woof!\n"; happy += 5; }
};
int main()
{
    pet pet1;
    pet1.play();
    return 0;
}
