#include <string>
using namespace std;
class Database {
private:
    static Database* instance;

    Database() {}

public:
    static Database* getInstance() {
        if (instance == nullptr) {
            instance = new Database();
        }
        return instance;
    }

    bool hasUser(string username, string password) {
        // �������� ������� � ��
        return true;
    }

    bool saveUser(string username, string password) {
        // ���������� � ��
        return true;
    }

};

Database* Database::instance = nullptr;