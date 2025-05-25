#include "leaderboard.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void saveScore(const string& name, int score) {
    ofstream out("leaderboard.txt", ios::app);
    if (out.is_open()) {
        out << name << " " << score << endl;
        out.close();
    } else {
        cerr << "Error: Unable to save score.\n";
    }
}

void displayLeaderboard() {
    ifstream in("leaderboard.txt");
    if (!in) {
        cout << "No leaderboard data available yet.\n";
        return;
    }

    vector<pair<string, int>> entries;
    string name;
    int score;
    while (in >> name >> score) {
        entries.push_back({name, score});
    }

    sort(entries.begin(), entries.end(), [](auto& a, auto& b) {
        return b.second < a.second; // descending
    });

    cout << "\n=== Leaderboard ===\n";
    for (size_t i = 0; i < entries.size() && i < 5; ++i) {
        cout << i + 1 << ". " << entries[i].first << " - " << entries[i].second << endl;
    }
    cout << "===================\n\n";
}
