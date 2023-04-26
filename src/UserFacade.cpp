#include "Database.cpp"
#include <string>
using namespace std;
class UserFacade {
private:
    Database* database;

public:
    UserFacade() {
        database = Database::getInstance();
    }

    bool login(string username, string password) {
        if (database->hasUser(username, password)) {
            return true;
        }
        else {
            return false;
        }
    }

    bool registr(string username, string password) {
        if (database->saveUser(username, password)) {
            return true;
        }
        else {
            return false;
        }
    }
};