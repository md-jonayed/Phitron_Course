#include <iostream>
#include <list>
using namespace std;

void processQueries(list<string> webList, int Q)
{
    string currentAddress;
    cin.ignore(); // Ignore the newline character after Q

    while (Q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            bool found = false;
            for (string webAddress : webList)
            {
                if (webAddress == address)
                {
                    currentAddress = address;
                    cout << currentAddress << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            bool found = false;
            for (string webAddress : webList)
            {
                if (found)
                {
                    currentAddress = webAddress;
                    cout << currentAddress << endl;
                    break;
                }
                if (webAddress == currentAddress)
                {
                    found = true;
                }
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            string prevAddress;
            bool found = false;
            for (string webAddress : webList)
            {
                if (webAddress == currentAddress)
                {
                    if (!prevAddress.empty())
                    {
                        currentAddress = prevAddress;
                        cout << currentAddress << endl;
                        found = true;
                        break;
                    }
                }
                prevAddress = webAddress;
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
    }
}

int main()
{
    list<string> webList;
    string value;

    while (cin >> value && value != "end")
    {
        webList.push_back(value);
    }
    cin.ignore(); // Ignore the newline character after "end"

    int Q;
    cin >> Q;
    cin.ignore(); // Ignore the newline character after Q

    processQueries(webList, Q);

    return 0;
}
