#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype> // for toupper

using namespace std;

int main() {
    vector<string> cards;
    
    int num_cards;
    cin >> num_cards;
    
    for (int i = 0; i < num_cards; i++) {
        string card;
        cin >> card;
        
        // Convert the card to uppercase
        for (char &c : card) {
            if (islower(c)) {
                cout << "no small alphabet allowed!!!" << endl;
                return 0;
            }
            c = toupper(c);
        }
        
        cards.push_back(card);
    }

    sort(cards.begin(), cards.end());

    cout << "REQUIRED DATA IS" << endl;
    for (const string& card : cards) {
        cout << card << endl;
    }

    string search_card;
    cin >> search_card;
    
    // Convert the search card to uppercase
    for (char &c : search_card) {
        if (islower(c)) {
            cout << "no small alphabet allowed!!!" << endl;
            return 0;
        }
        c = toupper(c);
    }

    auto it = find(cards.begin(), cards.end(), search_card);
    if (it != cards.end()) {
        cout << search_card << " CARD IS FOUND" << endl;
    } else {
        cout << search_card << " CARD IS NOT FOUND" << endl;
    }

    return 0;
}
