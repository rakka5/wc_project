#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Team {
private:
    string name;
    int grp;
    int ptns;

public:
    Team(string name, int grp, int ptns) {
        this->name = name;
        this->grp = grp;
        this->ptns = ptns;
    }

    string getName() {
        return this->name;
    }

    int getGrp() {
        return this->grp;
    }

    void addPtns(int p) {
        this->ptns = this->ptns + p;
    }

    void resetPtns() {
        this->ptns = 0;
    }

    int getPtns() {
        return this->ptns;
    }

};

int main() {
    vector<Team> teams;

    int choice;
    do {
        cout << "Soccer World Cup Results" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Show Winners of groups" << endl;
        cout << "2. Show 3rd and 4th place" << endl;
        cout << "3. Show 2nd place" << endl;
        cout << "4. Show 1st place" << endl;
        cout << "5. Exit" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << endl;

            teams.push_back(Team("Netherlands" , 1, 7));
            teams.push_back(Team("Senegal" , 1, 6));
            teams.push_back(Team("England" , 2, 7));
            teams.push_back(Team("USA" , 2, 5));
            teams.push_back(Team("Argentina" , 3, 6));
            teams.push_back(Team("Poland" , 3, 4));
            teams.push_back(Team("France" , 4, 6));
            teams.push_back(Team("Australia" , 4, 6));
            teams.push_back(Team("Japan" , 5, 6));
            teams.push_back(Team("Spain" , 5, 4));
            teams.push_back(Team("Morocco" , 6, 7));
            teams.push_back(Team("Croatia" , 6, 5));
            teams.push_back(Team("Brazil" , 7, 6));
            teams.push_back(Team("Switzerland" , 7, 6));
            teams.push_back(Team("Portugal" , 8, 6));
            teams.push_back(Team("South-Korea" , 8, 4));


            cout << "Groups winners are:" << endl;
            cout << "---------------------------" << endl;
            for (int i = 1; i < 9; i++) {
                for (int y = 0; y < 17 ; y++){
                    if (teams[y].getGrp() == i){
                        cout << "group " << i << " : " << teams[y].getName() << " with (" << teams[y].getPtns() << ") points " <<endl;

                    }
                }
            }
            cout <<"//////////////" << endl;

        } else if (choice == 2) {

            cout <<"//////////////" << endl;
            for (int i = 0; i < 17; i++){
                teams[i].resetPtns();
            }
            for (int i = 0; i < 17; i++) {
                if (teams[i].getName() == "Morocco") {
                    cout << "4th : " << teams[i].getName() << endl;
                    break;
               }
                
            }
            
            for (int i = 0; i < 17; i++) {
                if (teams[i].getName() == "Croatia") {
                    cout << "3rd : " << teams[i].getName() << endl;
                    break;
               }
                
            }
            cout <<"//////////////" << endl;
            
        }else if (choice == 3) {

            cout <<"//////////////" << endl;
            for (int i = 0; i < 17; i++) {
                if (teams[i].getName() == "France") {
                    cout << "2nd : " << teams[i].getName() << endl;
                    break;
               }
                
            }
            cout <<"//////////////" << endl;


        }else if (choice == 4) {
            
            cout <<"//////////////" << endl;
            for (int i = 0; i < 17; i++) {
                if (teams[i].getName() == "Argentina") {
                    cout << "1nd : " << teams[i].getName() << endl;
                    break;
               }
                
            }
            cout <<"//////////////" << endl;

        }

    } while (choice != 5);
    return 0;
}
