/*****************************************************************
 * Reuben Nyenhuis, Ben Burger
 * CIS263 Project 4 (Option 1)
 * Dynamic Programming
 * Date: 6/19/2019
 *
 * This program is a shipping container optimization algorithm. The
 * program reads in a text file that has the length of the container
 * on the first line and the list of bid prices on the second line.
 * The program dynamically determines the max value possible for
 * each length from 1' to the size of the shipping container. The
 * program will then output the optimal combination of bids and the
 * maximum profit yielded by said combination.
 ******************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main() {
    string input_line = "", bid_str = "";
    int bid_index = 0;                    // the index of the current bid
    int container_size = 0;
    double *bids_array;                   // array to hold bid prices

    int current_line = 0;

    ifstream myfile("input.txt");
    if(myfile.is_open()){
        while(getline(myfile, input_line)) {
            current_line++;
            if (current_line == 1) {
                container_size = stoi(input_line);
                bids_array = new double[container_size + 1];
                for (int i = 0; i < container_size; i++) bids_array[i] = 0;
            }
            if (current_line == 2) {
                for (int i = 0; i < input_line.length(); i++) {
                    if (input_line.at(i) == ' ') {
                        bid_index++;
                        bids_array[bid_index] = stod(bid_str);
                        bid_str = "";
                    } else {
                        bid_str += input_line.at(i);
                    }
                }
                bid_index++;
                bids_array[bid_index] = stod(bid_str);
            }
        }
        myfile.close();
    }
    else {
        cout << "Unable to open input file.\n";
    }


    double max_values[container_size];          // array that holds the maximum values for each length
    map<int,string> max_combos;                 // map that holds the combination of bids for each maximum value

    for(int i = 0; i <= container_size; i++) {
        max_values[i] = bids_array[i];
        max_combos[i] = to_string(i) + "'";
    }

    /* This code finds the maximum value for each length of the container.
     * The current bid price for each length is compared to all of the
     * possible combinations of bids for that length.                       */
    for(int i = 1; i <= container_size; i++){
        for(int j = 1; j < i; j++){
            if(max_values[i] < max_values[i - j] + max_values[i - (i - j)]){
                max_values[i] = max_values[i - j] + max_values[i - (i - j)];
                max_combos[i] = max_combos[i - (i - j)] + " , ";
                max_combos[i] += max_combos[i - j];
            }
        }
    }

    cout << "Container length: " << container_size << "' \n";
    cout << "Bids: ";
    for(int i = 1; i < container_size; i++) cout << fixed << setprecision(2) << "$" << bids_array[i] << ", ";
    cout << "$" << bids_array[container_size] << "\n";
    cout <<"The optimal set of bids is worth: $" << max_values[container_size] << "\n";
    cout << "Bids used: " << max_combos[container_size];
    return 0;
}