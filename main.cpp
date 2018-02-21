#include <iostream>

using namespace std;

//define template class
template <class CAT>
class Compare{

 //CAT -> like int, double..
 CAT first, second;

public:
    //constructor
    Compare(CAT a, CAT b){

        first = a;
        second = b;
    }

    CAT bigger(){
        return (first > second ? first : second);
    };
};

//define function
//template <class CAT>
//CAT Compare::bigger() {

//}


int main() {

    //making object
    Compare <double> ob(58.77, 333.90);
    cout << ob.bigger() << endl;

}