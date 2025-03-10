#include <bits/stdc++.h>
using namespace std;

#define ll long long


void insert_card(vector<multiset<int>> box, vector<set<int>> numbers,int box_id, int card_number) {
    box[box_id].insert(card_number);
    numbers[card_number].insert(box_id);
}

void print_box(vector<multiset<int>> box, int box_id) {
    for(auto itr = box[box_id].begin(); itr != box[box_id].end(); ++itr) {
        cout << *itr << "\n";      // イテレータの指す先のデータを表示
    }
}

void print_number(vector<set<int>> numbers, int number) {
    for(auto itr = numbers[number].begin(); itr != numbers[number].end(); ++itr) {
        cout << *itr << "\n";
    }
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<multiset<int>> box(200010);
    vector<set<int>> numbers(200010);

    int a, b, c;
    for(int i=0; i<q; i++) {
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> b >> c;
            // cout << "action 1\n";
            box[c].insert(b);
            numbers[b].insert(c);
            break;
        
        case 2:
            cin >> b;
            // cout << "action 2\n";
            for(auto itr = box[b].begin(); itr != box[b].end(); ++itr) {
                    cout << *itr << " ";      // イテレータの指す先のデータを表示
            }
            cout << "\n ";
            break;
        
        case 3:
            cin >> c;
            // cout << "action 3\n";
            for(auto itr = numbers[c].begin(); itr != numbers[c].end(); ++itr) {
                cout << *itr << " ";
            }
            cout << "\n";
            break;

        default:
            cout << "default\n";
            break;
        }
    }
    return 0;
}