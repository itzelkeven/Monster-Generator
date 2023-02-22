#include <iostream>
using namespace std;
int MonsterGen(char biome);
int main() {
    int life = 100;
    string input;
    char place;
    while (life >= 0) {
        cout << "What biome do want to be in?" << endl;
        cin >> place;
        if (place == 'd') {
            life -= MonsterGen('d');
            cout << "You currently have" << life << "HP Left." << endl;
            cout << "Press any key for the next turn." << endl;
            cin >> input;
        }
        if (place == 'j') {
            life -= MonsterGen('j');
            cout << "You currently have" << life << "HP Left." << endl;
            cout << "Press any key for the next turn." << endl;
            cin >> input;
        }
        if (place == 'n') {
            life -= MonsterGen('n');
            cout << "You currently have" << life << "HP Left." << endl;
            cout << "Press any key for the next turn." << endl;
            cin >> input;
        }
        if (place == 's') {
            life -= MonsterGen('s');
            cout << "You currently have" << life << "HP Left." << endl;
            cout << "Press any key for the next turn." << endl;
            cin >> input;
        }
        if (place == 'b') {
            life -= MonsterGen('b');
            cout << "You currently have" << life << "HP Left." << endl;
            cout << "Press any key for the next turn." << endl;
            cin >> input;
        }
    }
    cout << "YOu Died. Game Over." << endl;
}
int MonsterGen(char biome) {
    int monster;
    monster = rand() % 100 + 1;
    if (biome == 'd') {
        if (monster <= 20) {//20%
            cout << "A Spider spawned!!" << endl;
            return 10;
        }

        else if (monster > 20 && monster <= 50) {//30%
            cout << "A Zombie spawned!!" << endl;
            return 20;
        }
        else if (monster > 50 && monster <= 75) {//25%
            cout << "A Skeleton spawned!!" << endl;
            return 15;
        }
        else if (monster > 75 && monster <= 80) {//5%
            cout << "A  Wicth spawned!!" << endl;
            return 40;
        }
        else if (monster > 80 && monster <= 100) {//20%
            cout << "No Enemies Encountered" << endl;
            return 0;
        }
    }
    if (biome == 'j') {
        if (monster <= 20) {//20%
            cout << "A Spider spawned!!" << endl;
            return 10;
        }

        else if (monster > 20 && monster <= 50) {//30%
            cout << "A Zombie spawned!!" << endl;
            return 20;
        }
        else if (monster > 50 && monster <= 75) {//25%
            cout << "A Skeleton spawned!!" << endl;
            return 15;
        }
        else if (monster > 75 && monster <= 80) {//5%
            cout << "A  Wicth spawned!!" << endl;
            return 40;
        }
        else if (monster > 80 && monster <= 100) {//20%
            cout << "No Enemies Encountered" << endl;
            return 0;
        }
    }
    if (biome == 'n') {
        if (monster <= 20) {//20%
            cout << "A Spider spawned!!" << endl;
            return 10;
        }

        else if (monster > 20 && monster <= 50) {//30%
            cout << "A Zombie spawned!!" << endl;
            return 20;
        }
        else if (monster > 50 && monster <= 75) {//25%
            cout << "A Skeleton spawned!!" << endl;
            return 15;
        }
        else if (monster > 75 && monster <= 80) {//5%
            cout << "A  Wicth spawned!!" << endl;
            return 40;
        }
        else if (monster > 80 && monster <= 100) {//20%
            cout << "No Enemies Encountered" << endl;
            return 0;
        }
    }
    if (biome == 's') {
        if (monster <= 20) {//20%
            cout << "A Spider spawned!!" << endl;
            return 10;
        }

        else if (monster > 20 && monster <= 50) {//30%
            cout << "A Zombie spawned!!" << endl;
            return 20;
        }
        else if (monster > 50 && monster <= 75) {//25%
            cout << "A Skeleton spawned!!" << endl;
            return 15;
        }
        else if (monster > 75 && monster <= 80) {//5%
            cout << "A  Wicth spawned!!" << endl;
            return 40;
        }
        else if (monster > 80 && monster <= 100) {//20%
            cout << "No Enemies Encountered" << endl;
            return 0;
        }
    }
    if (biome == 'b'){
        if (monster <= 20) {//20%
            cout << "A Spider spawned!!" << endl;
            return 10;
        }

        else if (monster > 20 && monster <= 50) {//30%
            cout << "A Zombie spawned!!" << endl;
            return 20;
        }
        else if (monster > 50 && monster <= 75) {//25%
            cout << "A Skeleton spawned!!" << endl;
            return 15;
        }
        else if (monster > 75 && monster <= 80) {//5%
            cout << "A  Wicth spawned!!" << endl;
            return 40;
        }
        else if (monster > 80 && monster <= 100) {//20%
            cout << "No Enemies Encountered" << endl;
            return 0;
        }
    }
    }
