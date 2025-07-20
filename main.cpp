#include <iostream>
#include <vector>
#include <string>
using namespace std;
 struct employee {
  string name;
     int ID;
     string job;
 };
// to add employees data
vector<employee> data() {
    cout << "Enter employee number\n";
    int n;
    cin >> n;
    cin.ignore();
    employee emp;
    vector<employee> emps;
    for (int i=0; i<n; i++) {
        cout<<"Enter employee name: \n";
        getline(cin,emp.name);
        cout<<"Enter employee ID: \n";
        cin>>emp.ID;
        cin.ignore();
        cout<<"Enter employee job: \n";
        getline(cin,emp.job);
        emps.push_back(emp);
    }
return emps;
}
//  to add a new employee
void add(vector<employee>&st){
   employee sy;
       cout<<"Enter employee name: \n";
    cin.ignore();
       getline(cin,sy.name);
       cout<<"Enter employee ID: \n";
       cin>>sy.ID;
       cin.ignore();
       cout<<"Enter employee job: \n";
       getline(cin,sy.job);
       st.push_back(sy);
    cout<<"Employee added successfully.";
}
// to search for an employee
void search(const vector<employee>&dm) {
    cout << "Enter employee ID: \n";
    int n;
    cin>>n;

    for (employee s:dm) {
        if (s.ID==n) {
            cout<<"Employee name is: "<<s.name<<endl;
            cout<<"Employee ID is: "<<s.ID<<endl;
            cout<<"Employee job is: "<<s.job<<endl;

         return;
        }
    }
    cout<<"ID is not found.\n";
}
// to delete an employee
void delet(vector<employee>&ls) {
    cout << "Enter employee ID\n";
    int n;
    cin>>n;

    for (int i=0; i<ls.size(); i++) {
        if (ls.at(i).ID==n) {
            ls.erase(ls.begin()+i);
            cout<<"ID deleted successfully.";
            return;
        }
    }
    cout<<"ID is not found.\n";
}

int main() {
    vector<employee>sr=data();
       while (true){
            cout << "\n==== Menu ====\n";
            cout << "1. Add employee\n";
            cout << "2. Search by ID\n";
            cout << "3. Delete by ID\n";
            cout << "4. Print all data\n";
            cout<<"5. number of employees\n";
           cout << "6. Exit\n";
            cout << "Enter your choice: \n";
        int s;
        cin>>s;
        switch (s) {
            case 1:
                add(sr);
                break;
            case 2:
                search(sr);
                break;
            case 3:
                delet(sr);
               break;
            case 4:
                if (sr.empty()) {
                cout << "No employees found.\n";
            } else {
                for (employee s: sr) {
                    cout<<"Employee name is: "<<s.name<<endl;
                    cout<<"Employee ID is: "<<s.ID<<endl;
                    cout<<"Employee job is: "<<s.job<<endl;
                    cout<<"============\n";
                }
            }
                break;
            case 5:
                cout<<"number of employees is: "<<sr.size()<<endl;
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice. Please select a number between 1 and 6.\n";
            }
        }
    return 0;
}