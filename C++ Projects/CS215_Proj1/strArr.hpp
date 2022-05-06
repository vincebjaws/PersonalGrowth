/**********************************************************/
/* Name: Vince Bjazevic                                   */
/**********************************************************/

#include <string>
const int MAXSIZE = 1000;
using namespace std;

class StringArr {
    public:
        StringArr(); // Default constructor
        StringArr(string filename); // Alernate constructor
        ~StringArr() {}

        bool readFromFile(string filename);
        void print();
        string shortest();
        string longest();

        void printSorted();
        int longestAscending(string seq[]);
        int longestDescending(string seq[]);

    private:
        void populate(string w[], int n, int counter);
        string WordArray[MAXSIZE];
        int count;

};