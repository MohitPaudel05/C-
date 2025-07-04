/* Shared by all the object of same class 
  static datatype variableName 
   static void functionName(argus)*/

   #include<iostream>
   using namespace std;

   class Student{
    private:
    string name;
    int rollNo;
    public:
    static string CollegeName;
    Student(string name, int rollNo){
        this->name = name;
        this->rollNo = rollNo;
    }
    Student(const Student &s){
        name = s.name;
        rollNo = s.rollNo;
    }
    void display(){
        cout<<"Name => "<<name<<endl;
        cout<<"RollNo => "<<rollNo<<endl;
        cout<<"CollegeName => "<<CollegeName<<endl;
    }
    static void AontherCollege(string Name){
         CollegeName= Name;
    }
   };
        string Student :: CollegeName ="Radiant";

   int main(){
    Student s1("Mohit",21);
    s1.display();

    cout<<"after using static member Function And copy constructor"<<endl;

    Student :: AontherCollege("BMC");
    Student s2 = s1;
    s2.display();





    return 0;
   }