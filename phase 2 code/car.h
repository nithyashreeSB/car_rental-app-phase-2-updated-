#pragma once
#include <string>
#include <iostream>
#include <pqxx/pqxx>
#include <exception>
#include"VariadicTable.h"


using std::string;
using std::cout;
using std::cin;
using std::endl;
using namespace std;

class log
{
public:
    string user_name, pass_word, name_user, mail, address;
    string connectionString = "host=localhost port=5432 dbname=car_rent user=postgres password =1312";
    void insert();
    int login_check();
    void edit_details();
    void delete_user();
}lo;
class car
{
public:
    string reg_num, brand, seat, status, r = "resevered";
    string connectionString = "host=localhost port=5432 dbname=car_rent user=postgres password =1312";
    int rent;
    void car_boking();
    void car_display();
    void remove_car();
    void car_reserve();
    void car_edit();
    void car_insert();
}ca;

