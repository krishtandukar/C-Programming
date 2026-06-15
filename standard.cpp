// WAP to print "Hello, World!".
// #include <iostream>
// using namespace std;

// int main() 
// {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// WAP to input two floating point numbers and print their difference and product.
// #include <iostream>
// using namespace std;

// int main() 
// {
//     float num1, num2;
//     cout << "Enter two floating point numbers: ";
//     cin >> num1 >> num2;
//     cout << "Difference: " << num1 - num2 << endl;
//     cout << "Product: " << num1 * num2 << endl;
//     return 0;
// }

// WAP to input 2 interger values and then ask the user to enter a choice:
// -'a' or 'A' or '+' for addition
// -'s' or 'S' or '-' for subtraction

// #include <iostream>
// using namespace std;    

// int main() 
// {
//     int num1, num2;
//     char choice;
//     cout << "Enter two integer values: ";
//     cin >> num1 >> num2;  
//     cout << "Enter your choice (a/A/+ for addition, s/S/- for subtraction): ";
//     cin >> choice;   
//     switch(choice) 
//     {
//         case 'a':
//         case 'A':
//         case '+': cout << "Result: " << num1 + num2 << endl;
//                   break;
//         case 's':
//         case 'S':
//         case '-': cout << "Result: " << num1 - num2 << endl;
//                   break;
//         default:  cout << "Invalid choice!" << endl;
//     }
//     return 0;
// }

// WAp to calculate the roots of a quadratic equation ax^2 + bx + c = 0 using if...else and iteration.
// (Recall that there may be two real roots, two imaginary roots or one repeated root)
// #include <iostream>
// #include <math.h>
// using namespace std;    

// int main() 
// {
//     float a, b, c, discriminant, root1, root2;   
//     cout << "Enter coefficients a, b and c: ";
//     cin >> a >> b >> c; 
//     discriminant = b * b - 4 * a * c;
//     if (discriminant > 0) 
//     {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "Roots are real and different." << endl;
//         cout << "Root 1: " << root1 << endl;
//         cout << "Root 2: " << root2 << endl;
//     } 
//     else if (discriminant == 0) 
//     {
//         root1 = -b / (2 * a);
//         cout << "Roots are real and same." << endl;
//         cout << "Root: " << root1 << endl;
//     } 
//     else 
//     {
//         float realPart = -b / (2 * a);
//         float imaginaryPart = sqrt(-discriminant) / (2 * a);
//         cout << "Roots are complex and different." << endl;
//         cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
//         cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
//     }  
//     return 0;
// }

// In another way
// #include <iostream>
// #include <math.h>
// #include <conio.h>
// using namespace std;

// int main()
// {
//     int i=0;
//     do
//     {
//         if(i>0)
//         {
//             clrscr();
//                 cout<<"Invalid input! Please enter valid coefficients."<<endl;
//         }
//         float a, b, c, discriminant, root1, root2;
//         cout << "Enter coefficients a, b and c: ";
//         cin >> a >> b >> c;
//         i++;
//     }while(a==0);
//     discriminant = b * b - 4 * a * c;
//     if(discriminant > 0)
//     {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "Roots are real and different." << endl;
//         cout << "Root 1: " << root1 << endl;
//         cout << "Root 2: " << root2 << endl;
//     }
//     else if (discriminant == 0)
//     {
//         root1 = -b / (2 * a);
//         cout << "Roots are real and same." << endl;
//         cout << "Root: " << root1 << endl;
//     }
//     else
//     {
//         float realPart = -b / (2 * a);
//         float imaginaryPart = sqrt(-discriminant) / (2 * a);
//         cout << "Roots are complex and different." << endl;
//         cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
//         cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
//     }
// }

// Wap that inputs the content of a 2X3 size array 'A' then display the contents of A as well as 5*A.
// #include <iostream>
// using namespace std;    

// int main() 
// {
//     int A[2][3];
//     cout << "Enter the elements of a 2x3 matrix A:" << endl;
//     for (int i = 0; i < 2; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             cin >> A[i][j];
//         }
//     }
//     cout << "Matrix A:" << endl;
//     for (int i = 0; i < 2; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             cout << A[i][j] << " ";
//         }
//         cout << endl;
//     }  
//     cout << "5 * Matrix A:" << endl;
//     for (int i = 0; i < 2; i++) 
//     {
//         for (int j = 0; j < 3; j++) 
//         {
//             cout << 5 * A[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// There is a vacancy for a seasonal job. 
// Applicants are qualified to apply for the job only if they can lift at least 50 kg weight and are between 18 to 24 yrs of age. 
// However, if the applicantshave more than 4 yrs of experience in the field, they can qualify even if they can lift just 35kg and are over 24 yrs of age. 
// Write a program in C++ to input the information of applicants andcheck if they meet the required credentials for the job.

// #include <iostream>
// using namespace std;    

// int main()
// {
//     int weight, age, experience; 
//     cout << "Enter the weight you can lift (in kg): ";
//     cin >> weight;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "Enter your years of experience in the field: ";
//     cin >> experience;
//     if ((weight >= 50 && age >= 18 && age <= 24) || (experience > 4 && weight >= 35 && age > 24)) 
//     {
//         cout << "You are qualified to apply for the job." << endl;
//     } 
//     else 
//     {
//         cout << "You do not meet the required credentials for the job." << endl;
//     }
//     return 0;
// }

// Write a program to output the nth Fibonacci number using iteration.
// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n, a = 0, b = 1, fib, i;
//     cout << "Enter the position of the Fibonacci number you want to find: ";
//     cin >> n;
//     if (n <= 0) 
//     {
//         cout << "Please enter a positive integer." << endl;
//         return 1;
//     }
//     if (n == 1) 
//     {
//         fib = a;
//     } 
//     else if (n == 2) 
//     {
//         fib = b;
//     } 
//     else 
//     {
//         for (i = 3; i <= n; i++)
//         {
//             fib = a + b;
//             a = b;
//             b = fib;
//         }
//     }
//     cout << "The " << n << "th Fibonacci number is: " << fib << endl;
//     return 0;
// }

// Write a program that prompts a student to enter the marks they obtained in Object Oriented Programming. 
// Output the corresponding grade they obtained. 
// (0-59 = F, 60-69=D, 70-79 = C, 80-89 = B, 90-100 = A).
// #include <iostream>
// using namespace std;

// int main() 
// {
//     float marks;
//     cout << "Enter the marks obtained : ";
//     cin >> marks;
//     char grade;
//     if (marks >= 90 && marks <= 100) 
//     {
//         grade = 'A';
//     } 
//     else if (marks >= 80 && marks < 90) 
//     {
//         grade = 'B';
//     } 
//     else if (marks >= 70 && marks < 80) 
//     {
//         grade = 'C';
//     } 
//     else if (marks >= 60 && marks < 70) 
//     {
//         grade = 'D';
//     } 
//     else if (marks >= 0 && marks < 60) 
//     {
//         grade = 'F';
//     } 
//     else 
//     {
//         cout << "Invalid marks entered. Please enter a value between 0 and 100." << endl;
//         return 1;
//     }
//     cout << "The grade obtained is: " << grade << endl;
//     return 0;
// }

//Perform set operations (union, intersection, difference, inverse)
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
//     int c=0, i, j, check, a=0, b=0;
//     //taking input
//     int U[10]={1,2,3,4,5,6,7,8,9,10}, A[5]={1,2,3,4,5}, B[5]={1,3,5,7,9};
//     int uni[10], inter[10], diff[10], inv[10];
//     //for intersection
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             if(A[i]==B[j])
//             {
//                 inter[c]=A[i];
//                 c++;
//             }
//         }
//     }
//     printf("Intersection are : {");
//     for(i=0;i<c;i++)
//     {   if(i<c-1)
//         {
//             printf("%d, ",inter[i]);
//         }
//         else
//         {
//             printf("%d}\n",inter[i]);
//         }
//     }
//     //for union
//     for(i=0;i<5;i++)
//     {
//         uni[i]=A[i];
//     }
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<c;j++)
//         {
//             check=0;
//             if(B[i]==inter[j])
//             {
//                 check++;
//             }
//         }
//         if(check==0)
//         {
//             uni[5+i]=B[i];
//         }
//     }
//     printf("Union are : {");
//     for(i=0;i<10-c;i++)
//     {   if(i<10-c-1)
//         {
//             printf("%d, ",uni[i]);
//         }
//         else
//         {
//             printf("%d}\n",uni[i]);
//         }
//     }
//     //for difference
//     for(i=0;i<5;i++)
//     {
//         check=0;
//         for(j=0;j<c;j++)
//         {
//             if(A[i]==inter[j])
//             {
//                 check++;
//             }
//         }
//         if(check==0)
//         {
//             diff[a]=A[i];
//             a++;
//         }
//     }
//     printf("Difference A-B is : {");
//     for(i=0;i<a;i++)
//     {   if(i<a-1)
//         {
//             printf("%d, ",diff[i]);
//         }
//         else
//         {
//             printf("%d}\n",diff[i]);
//         }
//     }
//     //for inverse
//     for(i=0;i<10;i++)
//     {
//         check=0;
//         for(j=0;j<5;j++)
//         {
//             if(U[i]==A[j])
//             {
//                 check++;
//             }
//         }
//         if(check==0)
//         {
//             inv[b]=U[i];
//             b++;
//         }   
//     }
//     printf("Inverse is : {");
//     for(i=0;i<b;i++)
//     {   if(i<b-1)
//         {
//             printf("%d, ",inv[i]);
//         }
//         else
//         {
//             printf("%d}\n",inv[i]);
//         }
//     }
//     return 0;
// }

//Cross product of two different set. Find floor function and ceiling function.
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int main()
// {
//     int i, j;
//     int A[3]={1,2,3}, B[3]={4,5,6};
//     printf("Cross product of A and B is : \n{");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             if(i!=2 || j!=2)
//             {
//                 printf("(%d,%d), ",A[i],B[j]);
//             }
//             else
//             {
//             printf("(%d,%d)}\n",A[i],B[j]);
//             }
//         }
//     }
//     float num;
//     printf("Enter a floating point number : ");
//     scanf("%f",&num);
//     printf("Floor value of %.2f is : %.2f\n",num,floor(num));
//     printf("Ceiling value of %.2f is : %.2f\n",num,ceil(num));
//     return 0;
// }

//Wap too print the miltiplication table of an intefer entered by the user using function pointer.
// #include<iostream>
// using namespace std;

// void mul_table(int n);
// void (*ptr)(int n);

// int main()
// {
//     int n;
//     ptr=&mul_table;
//     cout<<"Enter no. for multiplication table : ";
//     cin>>n;
//     (*ptr)(n);
//     return 0;
// }
// void mul_table(int n)
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         cout<<n<<" X "<<i<<" = "<<i*n<<endl;
//     }
// }

//Wap that reads 'n' intergers in an array. Then, creaate a function that searches for an interger 'x' in the array. The function should:
//-display "Search Unsuccessful" if 'x' is not found in the array.
//-display "Search Successful" if 'x' is found in the array and also display the index at which 'x' is found.
// #include<iostream>
// using namespace std;

// void find(int [100], int n, int x);

// int main()
// {
//     int a[100], n, x, j;
//     cout<<"Enter the number of elements in the array : ";
//     cin>>n;
//     cout<<"Enter the elements of the array : "<<endl;
//     for(j=0;j<n;j++)
//     {
//         cin>>a[j];
//     }
//     cout<<"Enter the element to be searched : ";
//     cin>>x;
//     find(a, n, x);
//     return 0;
// }
// void find(int a[100], int n, int x)
// {
//     int i, check=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==x)
//         {
//             check++;
//             cout<<"Search Successful"<<endl;
//             check++;
//             break;
//         }
//     }
//     if(check==0)
//     {
//         cout<<"Search Unsuccessful. Element not found in the array."<<endl;
//     }
//     check=0;
//     for(i=0;i<n;i++)
//     {
//         if(a[i]==x)
//         {
//             cout<<"Element is found at index : "<<i<<endl;
//             check++;
//         }
//     }
//     cout<<x<<" is found "<<check<<" times in the array."<<endl;
// }

//Wap to print the multiplicationtable of an integer entered by the user using function pointer.
// #include<iostream>
// using namespace std;

// void mul_table(int n);
// void (*ptr)(int n);

// int main()
// {
//     int n;
//     cout<<"Enter no. for multiplication table : ";
//     cin>>n;
//     ptr=&mul_table;
//     (*ptr)(n);
//     return 0;
// }
// void mul_table(int n)
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         cout<<n<<" X "<<i<<" = "<<i*n<<endl;
//     }
// }

//Wap to find the greatest and smallest element among N numbers using pointer.
// #include<iostream>  
// using namespace std;

// int main()
// {
//     int arr[100], n, *ptr, greatest, smallest;
//     cout << "Enter the number of elements in the array : ";
//     cin >> n;
//     cout << "Enter the elements of the array : " << endl;
//     for (int i = 0; i<n; i++) 
//     {
//         cin >> arr[i];
//     }
//     ptr = arr; // Pointing to the first element of the array
//     greatest = smallest = *ptr; // Initialize greatest and smallest to the first element
//     for (int i = 0; i<n; i++) 
//     {
//         if (*ptr>greatest) 
//         {
//             greatest=*ptr;
//         }
//         if (*ptr<smallest) 
//         {
//             smallest=*ptr;
//         }
//         ptr++; // Move the pointer to the next element
//     }
//     cout << "Greatest element in the array is : " << greatest << endl;
//     cout << "Smallest element in the array is : " << smallest << endl;
//     return 0;
// }

// Create a function that calculates the product of 3 numbers entered by the user,
// regardless of the number entered being integer or floating point.
// Print the result as output.
// #include <iostream>
// using namespace std;

// void cal(int n1, int n2, int n3);
// void cal(float n4, float n5, float n6);

// int main()
// {
//     int choice;
//     cout <<"You want to enter interger or floating point no."<<endl;
//     cout<<"Enter 1 for interger and 2 for floating point : ";
//     cin>>choice;
//     switch(choice)
//     {
//         case 1: int n1, n2, n3;
//                 cout<<"Enter 3 integers :"<<endl;
//                 cin>>n1>>n2>>n3;
//                 cal(n1,n2,n3);
//                 break;
//         case 2: float n4, n5, n6;
//                 cout<<"Enter 3 floating point no. :"<<endl;
//                 cin>>n4>>n5>>n6;
//                 cal(n4,n5,n6);
//                 break;
//         default: cout<<"Invalid input"<<endl;
//     }
//     return 0;
// }
// void cal(int n1, int n2, int n3)
// {
//     int product = n1 * n2 * n3;
//     cout<<"Product of "<<n1<<", "<<n2<<" and "<<n3<<" is : "<<product<<endl;
// }
// void cal(float n4, float n5, float n6)
// {
//     float product = n4 * n5 * n6;
//     cout<<"Product of "<<n4<<", "<<n5<<" and "<<n6<<" is : "<<product<<endl;
// }

// Write a program that inputs ‘n’ integers from the user.
// Then, create a function pointer to find the maximum value among these integers.
// The function definition itself should also use pointer for comparison.
// #include<iostream>
// using namespace std;

// int findMax(int arr[], int n);
// int (*ptr)(int arr[], int n);

// int main()
// {
//     int n, arr[100], maxValue;
//     ptr=&findMax;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     cout<<"Enter elements in array : "<<endl;
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
//     maxValue=(*ptr)(arr, n);
//     cout<<"Maximum value is "<<maxValue<<endl;
//     return 0;
// }
// int findMax(int arr[], int n)
// {
//     int *p, max;
//     p=arr;
//     max=*p;
//     for(int i=0; i<n; i++)
//     {
//         if(*p>max)
//         {
//             max=*p;
//         }
//         p++;
//     }
//     return max;
// }

// Wap to find the sum of 1 - (22/2!) + (32/3!) - (42/4!) + (52/5!) - ..... (n2/n!).
// [Userecursion for the factorial part].
// #include<iostream>
// #include<math.h>
// using namespace std;

// int fact(int n);
// float seriesSum(int n);

// int main()
// {
//     int n;
//     float result;
//     cout<<"Enter value of n : ";
//     cin>>n;
//     result=seriesSum(n);
//     cout<<"Sum of series is "<<result<<endl;
//     return 0;
// }
// int fact(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n*fact(n - 1);
//     }
// }
// float seriesSum(int n)
// {
//     float sum=0;
//     for(int i = 1; i <= n; i++)
//     {
//         sum=sum+(pow(-1,i+1)*(pow(i,2)/(float)fact(i)));
//     }
//     return sum;
// }

// Create a structure called "Student" with 5 members. 
// Input the information of 10 students and then display the entered information.
// #include<iostream>
// using namespace std;

// struct Student {
//     int rollno, age;
//     string name, address, sec;
// };      

// int main()
// {
//     struct Student s[10];
//     int i;
//     for(i=0;i<10;i++)
//     {
//         cout<<"Enter details of students : "<<i+1<<endl;
//         cout<<"Enter rollno. : ";
//         cin>>s[i].rollno;
//         cout<<"Enter age : ";
//         cin>>s[i].age;
//         cout<<"Enter name : ";
//         cin>>s[i].name;
//         cout<<"Enter address : ";
//         cin>>s[i].address;
//         cout<<"Enter section : ";
//         cin>>s[i].sec;
//     }
//     cout<<"Details of students are : "<<endl;
//     for(i=0;i<10;i++)
//     {
//         cout<<"for student "<<i+1<<endl;
//         cout<<"Roll no. : "<<s[i].rollno<<endl;
//         cout<<"Age : "<<s[i].age<<endl;
//         cout<<"Name : "<<s[i].name<<endl;
//         cout<<"Address : "<<s[i].address<<endl;
//         cout<<"Section : "<<s[i].sec<<endl<<endl;
//     }
//     return 0;
// }