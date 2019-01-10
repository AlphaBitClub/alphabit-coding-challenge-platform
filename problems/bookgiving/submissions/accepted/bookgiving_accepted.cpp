#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, rating;
    string querie, book_name;
    // two stacks: one for the books
    // and the 2nd for tracking the best book in the 1st stack
    stack<pair<string, int>> book_stack, max_stack;

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
            book_stack.push(make_pair(book_name, rating));
            // if the stack is empy push the book directly in the max_stack
            // or if rating is higher than the current high rating
            // ">="" in order to print most recent one in the stack
            if (max_stack.empty() || rating >= max_stack.top().second)
                max_stack.push(make_pair(book_name, rating));
            // else push the current high rating book
            // so always the max on the top of the stack
            else
                max_stack.push(max_stack.top());
        }
        // Give querie
        else if (querie == "Give")
        {
            book_stack.pop();
            max_stack.pop();
        }
        // Best querie
        else if (querie == "Best")
        {
            // print: <book_name> <rating> of the best book in the stack
            cout << max_stack.top().first << " " << max_stack.top().second << endl;
        }
    }
    return 0;
}
