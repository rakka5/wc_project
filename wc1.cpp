#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Team {
private:
    string name;
    int wins;
    int losses;
    int ties;

public:
    Team(string name) {
        this->name = name;
        this->wins = 0;
        this->losses = 0;
        this->ties = 0;
    }

    string getName() {
        return this->name;
    }

    void addWin() {
        this->wins++;
    }

    void addLoss() {
        this->losses++;
    }

    void addTie() {
        this->ties++;
    }

    int getWins() {
        return this->wins;
    }

    int getLosses() {
        return this->losses;
    }

    int getTies() {
        return this->ties;
    }
};

int main() {
    vector<Team> teams;
    teams.push_back(Team("Croatia"));
    teams.push_back(Team("Morocco"));
    teams.push_back(Team("Argentina"));
    teams.push_back(Team("France"));

    int choice;
    do {
        cout << "Soccer World Cup Results" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Show results" << endl;
        cout << "2. Add result" << endl;
        cout << "3. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;
            cout << "Results:" << endl;
            cout << "---------------------------" << endl;
            for (int i = 0; i < teams.size(); i++) {
                cout << teams[i].getName() << ": " << teams[i].getWins() << " wins, " << teams[i].getLosses() << " losses, " << teams[i].getTies() << " ties" << endl;
            }
            cout << endl;
        } else if (choice == 2) {
            string team1, team2;
            int score1, score2;
            cout << "Enter the name of team 1: ";
            cin >> team1;
            cout << "Enter the name of team 2: ";
            cin >> team2;
            cout << "Enter the score for team 1: ";
            cin >> score1;
            cout << "Enter the score for team 2: ";
            cin >> score2;

            Team *t1 = nullptr, *t2 = nullptr;
            for (int i = 0; i < teams.size(); i++) {
                if (teams[i].getName() == team1) {
                    t1 = &teams[i];
                } else if (teams[i].getName() == team2) {
                    t2 = &teams[i];
                }
                //error
                if (score1 < score2) {
                    t1->addLoss();
                    t2->addWin();
                } else if (score1 > score2) {
                    t1->addWin();
                    t2->addLoss();
                } else if (score1 == score2) {
                    t1->addTie();
                    t2->addTie();
                }
                
            }
        }
    } while (choice != 3);
    return 0;
}
