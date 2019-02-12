#include <bits/stdc++.h>

using namespace std;

static bool books_compare(pair<string, int> a, pair<string, int> b)
{
    return (a.second < b.second);
}


int main()
{
    int n, rating;
    string querie, book_name;
    // a stack to store the books
    // using vector instead of stack
    // in order to be able to iterate the stack
    vector<pair<string, int>> book_stack;

    // first line contains N
    cin >> n;
    // for each N lines
    for (int i = 0; i < n; i++)
    {
        // read the querie type and apply each
        cin >> querie;
        // Add <book_name> <rating> querie
        if (querie == "Add")
        {
            cin >> book_name >> rating;
            // push the book in the book_stack
            book_stack.push_back(make_pair(book_name, rating));
        }
        // Give querie
        else if (querie == "Give")
        {
            book_stack.pop_back();
        }
        // Best querie
        else if (querie == "Best")
        {
            // Naive O(n) Solution: find the the book with the highest rating for each querie
            pair<string, int> best_book;
            best_book = *max_element(book_stack.begin(), book_stack.end(), books_compare);
            // print: <book_name> <rating> of the best book in the stack
            cout << best_book.first << " " << best_book.second << endl;
        }
    }
    return 0;
}
