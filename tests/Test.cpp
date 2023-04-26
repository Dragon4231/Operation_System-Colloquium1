#include "Database.cpp"
#include "pch.h"

void test_saveUser_with_valid_credentials() {
    Database* database = Database::getInstance();
    string username = "test_user";
    string password = "test_password";
    bool result = database->saveUser(username, password);
    ASSERT_TRUE(result);
}

void test_hasUser_with_non_existing_user() {
    Database* database = Database::getInstance();
    string username = "non_existing_user";
    string password = "test_password";
    bool result = database->hasUser(username, password);
    ASSERT_FALSE(result);
}