#include <iostream>

using namespace std;

int main(){
    // f(x) = x^2 + 3x
    // f'(x) = x^3/3 + 3x^2/2    from -10 to +10 = 483
    // From -10 to +10
    
    // Samples
    int num_samples = 400;
    float interval = (10.0 - -10.0)/ (float)(num_samples - 1);
    
    float sum = 0.0;
    float x = -10.0;
    float fx_last = x * x + 3 * x;
    
    for(x = -10 + interval; x <= 10; x = x + interval){
      float fx = x * x + 3 * x;
      cout << "fx: " << fx << " fx_last: " << fx_last << endl;
      sum = sum + (fx + fx_last) * interval / 2.0;
      fx_last = fx;
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}
