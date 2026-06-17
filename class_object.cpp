// Create a class named "CPU" with data members price ad processor. 
// "Processor" is itself a class with data members cores and manufacturer. 
// Include getter and setter functions in each class.
// Create an object of CPU and input the required info using the setter.
// Then, display the entered into using the getter.
// #include<iostream>
// using namespace std;

// class CPU
// {
//     private:
//         int price;
//     public:
//         void getter();
//         void setter();
//     class processor
//     {
//         private:
//             string cores, manufacturer;
//         public:
//             void get();
//             void set();
//     }p1;
// };
// int main()
// {
//     CPU obj;
//     obj.getter();
//     obj.setter();
//     return 0;
// }
// void CPU::getter()
// {
//     cout<<"Enter price of CPU : ";
//     cin>>price;
//     p1.get();
// }
// void CPU::processor::get()
// {
//     cout<<"Enter core : ";
//     cin>>cores;
//     cout<<"Enter manufacturer : ";
//     cin>>manufacturer;
// }
// void CPU::setter()
// {
//     cout<<"Price is "<<price<<endl;
//     p1.set();
// }
// void CPU::processor::set()
// {
//     cout<<"Core is "<<cores<<endl;
//     cout<<"Manufacturer is "<<manufacturer<<endl;
// }

// Create a structure for a pharmaceutical company having three departments. 
// Each department can have a maximum of 5 employees, out of which one is a department head.
// Input as well as display the information of the department’s employees. [Use nested structure]
// #include <iostream>
// #include <string>
// using namespace std;

// struct Employee 
// {
//     int empId;
//     string empName;
// };
// struct Department 
// {
//     string dName;
//     int headId;
//     string headName;
//     int empCount;
//     struct Employee emp[4];
// };
// struct Company 
// {
//     string name;
//     struct Department dprt[3];
// };
// int main() {
//     struct Company c;
//     cout << "Enter Company Name: ";
//     cin >> c.name;
//     for (int i = 0; i < 3; i++) 
//     {
//         cout << "\nEnter Department " << i + 1 << " Name: ";
//         cin >> c.dprt[i].dName;
//         cout << "Enter Department Head ID: ";
//         cin >> c.dprt[i].headId;
//         cout << "Enter Department Head Name: ";
//         cin >> c.dprt[i].headName;
//         cout << "Enter number of employees (max 4, excluding head): ";
//         cin >> c.dprt[i].empCount;
//         for (int j = 0; j < c.dprt[i].empCount; j++) 
//         {
//             cout << "\n  [Employee " << j + 1 << "]\n";
//             cout << "  ID: ";
//             cin >> c.dprt[i].emp[j].empId;
//             cout << "  Name: ";
//             cin >> c.dprt[i].emp[j].empName;
//         }
//     }
//     // Display
//     cout << "\n\n===== " << c.name << " =====\n";
//     for (int i = 0; i < 3; i++) 
//     {
//         cout << "\nDepartment: " << c.dprt[i].dName << "\n";
//         cout << "  [Head] ID: " << c.dprt[i].headId << " | Name: " << c.dprt[i].headName << "\n";
//         for (int j = 0; j < c.dprt[i].empCount; j++) 
//         {
//             cout << "  [Emp " << j + 1 << "] ID: " << c.dprt[i].emp[j].empId
//                  << " | Name: " << c.dprt[i].emp[j].empName << "\n";
//         }
//     }
//     return 0;
// }

// Modify the above program to display only the names of the department heads.
// #include <iostream>
// #include <string>
// using namespace std;

// struct Employee 
// {
//     int empId;
//     string empName;
// };
// struct Department 
// {
//     string dName;
//     int headId;
//     string headName;
//     int empCount;
//     struct Employee emp[4];
// };
// struct Company 
// {
//     string name;
//     struct Department dprt[3];
// };
// int main() 
// {
//     struct Company c;
//     cout << "Enter Company Name: ";
//     cin >> c.name;
//     for (int i = 0; i < 3; i++) 
//     {
//         cout << "\nEnter Department " << i + 1 << " Name: ";
//         cin >> c.dprt[i].dName;
//         cout << "Enter Department Head ID: ";
//         cin >> c.dprt[i].headId;
//         cout << "Enter Department Head Name: ";
//         cin >> c.dprt[i].headName;
//         cout << "Enter number of employees (max 4, excluding head): ";
//         cin >> c.dprt[i].empCount;
//         for (int j = 0; j < c.dprt[i].empCount; j++) 
//         {
//             cout << "\n  [Employee " << j + 1 << "]\n";
//             cout << "  ID: ";
//             cin >> c.dprt[i].emp[j].empId;
//             cout << "  Name: ";
//             cin >> c.dprt[i].emp[j].empName;
//         }
//     }
//     // Display only department heads' names
//     cout << "\n\n===== " << c.name << " --- Department Heads =====\n";
//     for (int i = 0; i < 3; i++) 
//     {
//         cout << "Department: " << c.dprt[i].dName
//              << " | Head: " << c.dprt[i].headName << "\n";
//     }
//     return 0;
// }

//  Create a class for an account holder with data members as accountNo, accountHolderName and balance. 
//  Create two methods to store and retrieve these values for 3 customers.
// #include<iostream>
// using namespace std;

// class AccHolder
// {
//     int accountNo;
//     string accountHolderName;
//     float balance;
// public:
//     void storeData()
//     {
//         cout <<endl<< "Enter Account Number: ";
//         cin >> accountNo;
//         cout << "Enter Account Holder Name: ";
//         cin >> accountHolderName;
//         cout << "Enter Balance: ";
//         cin >> balance;
//     }
//     void displayData()
//     {
//         cout <<accountNo<<"\t\t2400\t"<<accountHolderName<<"\t\t\t"<<balance << endl;
//     }
// };
// int main()
// {
//     int i;
//     AccHolder c[3];
//     cout << "Enter details of 3 customers : "<<endl;
//     for(i = 0; i < 3; i++)
//     {
//         cout << "Customer " << i + 1;
//         c[i].storeData();
//     }
//     cout <<endl<< "Customer Details : "<<endl;
//     for(i = 0; i < 3; i++)
//     {
//         cout <<"\t\tAccountno.\t\tHolder name\t\tbalance"<<endl;
//         cout<<"Customer "<<i+1<<"\t";
//         c[i].displayData();
//     }
//     return 0;
// }