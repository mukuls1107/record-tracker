#include <iostream>
using namespace std;

class Student{
    private:
        string name, course;
        int id;

    public:
        void get_info(){
            cout << "Student's Name is: "<< name <<"." <<endl;
            cout << "Student's ID is: "<< id <<"." <<endl;
            cout << name<<" is registered in: "<< course <<"." <<endl;
        }

        void set_info(){
            cout << "Enter your Name: " << endl;
            cin >> name;
            cout << "Enter your Course: " << endl;
            cin >> course;
        }

        void get_academics(){
            ;
        }

        void delete_info(int studentId){
            if (studentId != id){
                cout << "Invalid ID\n";
            }else if(studentId == id){
                 id = 0;
                 
            }
        }
};