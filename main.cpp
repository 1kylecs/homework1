//Kyle Kaiser
//Homework 1
/*this is the main file, and is where all the files will work together to make the code run effectively.i am also making a loadItems() method to load the train and
bus with their respective vectors*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
// #include "Bus.h"
#include "Cargo.h"
// #include "People.h"
#include "Train.h"
#include "Transporters.h"
using namespace std;

int main() {
    Transporters hadfa = Transporters<int>("New York");
    hadfa.load(3);
    printf("%d\n", hadfa.getItemCount());
    cout << hadfa.getNextDestination() << endl;
    hadfa.unload();
    printf("%d\n", hadfa.getItemCount());

    Train testTrain = Train<Cargo>();
    cout << testTrain.getTotalWeight() << endl;
    testTrain.load(Cargo("hay", 56));
    cout << testTrain.getTotalWeight() << endl;
    // Transporters<People> bus;
    //Bus<People> bus;


    return 0;
}
