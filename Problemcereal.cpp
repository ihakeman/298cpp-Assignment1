#include <iostream>

using namespace std; //used for cout and cin

int main(int argc, char **argv) {
  const float OUNCES_PER_METRIC_TON = 35273.92;//constant since it never changes, float since float has enough space for it
  float ouncesWeight; //breakfast cereal packages weight in ounces should fit within a float
  float metricTonsWeight; //metric tons weight should definitely fit within a float
  float boxesInMetricTon; //boxes in a metric ton should also fit in a float

  cout << "Package weight in ounces: ";
  cin >> ouncesWeight;

  metricTonsWeight = ouncesWeight/OUNCES_PER_METRIC_TON; //converting ounces to metric tons
  cout << "Package weight in metric tons: " << metricTonsWeight << endl;

  boxesInMetricTon = 1 / metricTonsWeight; //inverse of weight gives number of boxes in 1 metric ton.
  cout << "Boxes of cereal needed to yield 1 metric ton of cereal: " << boxesInMetricTon << endl;

  return 0;
}
