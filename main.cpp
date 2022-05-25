#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;


class Strategy {
    private:
        enum res {
            won, lose
        };
    public:
        Strategy() = default;
        virtual void execute();
};

class EvenNumbers {
    vector<int> nums = vector<int>(5);
    public:
        void execute() {
            int count = 0;
            for (auto i: nums) {
                if (i % 2 == 0) count++;
            }
            if (count == 5) cout << "Cinco numeros pares";
        }
};

class OddNumbers {
    vector<int> nums = vector<int>(5);
    public:
        void execute() {
            int count = 0;
            for (auto i: nums) {
                if (i % 2 != 0) count++;
            }
            if (count == 5) cout << "Cinco numeros pares";
        }
};

class PrimeNumbers {
    vector<int> nums = vector<int>(5);
    public:
        void execute() {
            int count = 0;
            for (auto i: nums) {
                if (i % 2 != 0) count++;
            }
            if (count == 5) cout << "Cinco numeros pares";
            cout << "Un numero primo" << endl;
        }
};

class MultipleByTen {
    vector<int> nums = vector<int>(5);
    public:
        void execute() {
            int count = 0;
            for (auto i: nums) {
                if (i % 10 == 0) count++;
            }
            if (count == 3) cout << "Tres numeros multiplos de 10";
        }
};

class MultipleByTwentyFive {
    vector<int> nums = vector<int>(5);
    public:
        void execute() {
            int count = 0;
            for (auto i: nums) {
                if (i % 25 == 0) count++;
            }
            if (count == 2) cout << "Dos numeros multiplos de 25";
        }
};

int main () {
    cout << "Listo" << endl;
}

/*
class ASubject {
    private:
        vector<Student*> vec;
    public:
        void Attach(Student *student) {
            vec.push_back(student);
        }
        void Detach(Student *student) {
            vec.erase(std::remove(vec.begin(), vec.end(), student), vec.end());
        }
        void Notify(int res) {
            for(vector<Student*>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter) {
                if(*iter != 0) {
                    (*iter)->Update(res);
                }
            }
        }
};

class IObserver {
    public:
        virtual void Update(int res) =  0;
};

class XYZ : IObserver {
    private:
        int n1, n2, n3, n4, n5;
        int res;
    public:
        XYZ(int n1, int n2, int n3, int n4, int n5) {
            this->n1 = n1;
            this->n2 = n2;
            this->n3 = n3;
            this->n4 = n4;
            this->n5 = n5;
        } 

};

class Strategy {

}

*/

/*
class Strategy;

class Context {
    private:
        Strategy *strategy;
    public:
        enum StrategyType {

        };
        Context() {strategy = nullptr;}

};

class Strategy {
    public:

};

int main() {

}
*/