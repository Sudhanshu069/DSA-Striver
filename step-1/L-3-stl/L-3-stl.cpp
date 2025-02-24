#include <bits/stdc++.h> //all libraries included
using namespace std;     // namespace

// void type functions
void print()
{
    cout << "raj";
}

// return type function
int sum(int a, int b)
{
    return a + b;
}

// pairs
void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> q = {1, {2, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}

void printVec(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";
}

void printPV(vector<pair<int, int>> vec)
{
    for (auto it : vec)
    {
        cout << "first element: " << it.first << " second element: " << it.second << "\n";
    }
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);    // to insert from the end to the vector by dynamically its size
    v.emplace_back(2); // generally faster as it does in place

    // can also declare a pair
    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2); // does not need curly braces to insert into vec

    vector<int> w(5, 100); // declaring 5 indexes each with 100

    vector<int> x(5); // depending upon compiler, may be zero or not

    // printPV(vec);

    // copy and paste vectors example
    vector<int> v1(5, 30);
    vector<int> v2(v1);

    // printVec(v1);
    // cout << "copy vector: ";
    // printVec(v2);

    // access elements in a vector
    // vector<int> example = {1, 45, 34, 67, 76, 23};
    // vector<int>::iterator its = example.begin(); // iterator points at the memory location of the values (starting)
    // so if you print it as it is, you will see that it prints the memory location at which the iterator is pointing or 1 is stored but let us print values

    // cout << "example vector: " << *its << "\n";
    // its++; // shifted to one next position in memory
    // cout << "example vector: " << *its;
    // cout << '\n';

    // vector<int>::iterator endIt = example.end(); // points to one memory location after the last element of the vector

    // reverse end
    // vector<int>::iterator reverseIt = example.rend();

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << "\n";
    // }
    // cout << '\n';

    // for (auto it = example.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << "\n";
    // }
    // cout << '\n';
    // // standard for each loop
    // for (auto it : example)
    // {
    //     cout << it << " ";
    // }
    // cout << '\n';

    // delete
    // vector<int> toDeleteArr = {23, 56, 76, 89, 345};

    // cout << "Before deletion: ";
    // printVec(toDeleteArr);
    // toDeleteArr.erase(toDeleteArr.begin() + 2);
    // to delete in the range:
    // toDeleteArr.erase(toDeleteArr.begin() + 1, toDeleteArr.begin() + 3); // an important point: to specify range, you need to make sure that you enter starting point and POINT AFTER THE ELEMENT YOU WANT TO DELETE that is, if you want to delete element 2 and 3 in this example, you would use arr.begin() + 1 (starting element) and arr.begin() + 3 (the element AFTER element 3); remember it
    // cout << "After deletion: ";
    // printVec(toDeleteArr);
    cout << '\n';
    vector<int> toInsertArr(2, 300);
    cout << "Before insertion: ";
    printVec(toInsertArr);

    // to insert in the start
    toInsertArr.insert(toInsertArr.begin(), 345);

    // to insert just after first position, aka before second position:
    toInsertArr.insert(toInsertArr.begin() + 1, 450);

    // to insert multiple elements of same denomination
    toInsertArr.insert(toInsertArr.begin() + 1, 2, 55); // syntax: where to insert, number of insertions, insertion value

    // to insert another vector into a vector
    vector<int> copy(2, 67);
    toInsertArr.insert(toInsertArr.end(), copy.begin(), copy.end());

    cout << "After insertion: ";
    printVec(toInsertArr);

    cout << toInsertArr.size();
    cout << "\n";

    toInsertArr.pop_back(); // removes last element

    toInsertArr.clear(); // erases everything
}

void explainList()
{
    // almost same to same as vector but also provides front operations as well

    list<int> l;
    l.push_back(2);
    l.emplace_back(4);

    l.push_front(45);
    l.emplace_front(56);

    // same as vector
}

/*
 * Note: for vector, internally a singly linked list is maintained
 * for list, a doubly linked list is maintained
 *
 */

void explainDeque()
{
    deque<int> dq;
    dq.push_back(34);
    dq.emplace_back(90);
    dq.push_front(4);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();

    dq.front();

    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << "\n";

    /*
     * Note: in stack, indexing access is not allowed
     * only top(), pop() and push() (or faster alternative, emplace()) are mostly available
     * all operations here are O(1)
     *
     */

    st.pop(); // 5, the top most element is taken off, now the top will be 4

    cout << st.top() << '\n';

    // size of stack
    cout << st.size() << '\n';

    cout << st.empty(); // prints whether stack is empty or not

    stack<int> st2;
    st.swap(st2);
}

void explainQueue()
{
    /*
     * queue follows first-in-first-out (FIFO)
     * all operations are O(1)
     */

    queue<int> q;

    q.push(1);
    q.push(34);
    q.push(45);

    q.back() += 5; // accesses last elemet that is 45 -> {1,34,49}

    cout << q.back(); // 49

    cout << q.front(); // 1

    q.pop(); // removes 1, {34, 49}

    cout << q.front(); // 34
}

void explainPQ()
{
    /*
     * Priority queue always shows largest (or smallest depending upon configuration) element at the top. internally it's a tree data structure which is self balancing in nature
     * main functions are : push(O(log n)), top(O(1)), pop(O(log n))
     *
     */

    // min heap
    priority_queue<int> pq;
    pq.push(5);  // {5}
    pq.push(2);  // {5,2}
    pq.push(8);  // {8,5,2}
    pq.push(10); // {10,8,5,2}

    cout << pq.top(); // 10 because it is the largest

    pq.pop(); // removes 10, {8,5,2};

    cout << pq.top(); // prints 8

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(6);
    pq.push(8);
    pq.emplace(10);
    pq.push(2);

    cout << pq.top();
}

void explainSet()
{
    /*
     * stores everything in sorted order and only unique elements
     * everything happens in log(n) t.c.
     */

    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2); // will not be stored
    st.insert(4);
    st.insert(3);

    /*
     * all stored in sorted manner
     * a tree is maintained internally in set as well
     * functionality of insert in vector is can be used as well,
     * that only increases efficiency
     *
     * begin(), end(), rend(), rbegin(), size(), empty() and swap() are
     * same as those of above
     */

    auto it = st.find(3); // returns an iterator which points to the 3;
    auto it = st.find(6); //

    /*
    ! if an element is not in the set, the set returns st.end() !
    */

    int cnt = st.count(4); // counts number of occurences of the said
    // element. since it is an ordered set, it will only return 1 if it is present and if not, it will return 0;

    st.erase(5); // removes 5 and maintains order, takes logarithmic time
    /*
     * if you want to erase elements between two elements, just get their
     * iterators, as erase here also works on iterators and goes to the
     * address of the said element and deletes them
     */

    auto it1 = st.find(2);
    auto it2 = st.find(5);

    st.erase(it1, it2); // after erase(1,4,5) [first, last]

    // lower_bound() and upper_bound() function works the same way
    //  as in vector it does

    // this is the syntax

    auto sit = st.lower_bound(2);
    auto situ = st.upper_bound(3);
}

void explainMultiSet()
{
    /*
     * Will store in sorted manner but will not be sorted
     *
     *
     */

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);

    /*
    ! will erase all occurences of the given elements are erased
    */
    ms.erase(1);

    int cnt = ms.count(1);

    /*
     * to delete only one occurence of and element: aka its address, use
     * find
     */

    ms.erase(ms.find(2));

    /*
     * to delete in the range of the elements
     */

    // ms.erase(ms.find(1), ms.find(1) + 2)
    // rest all functions are same
}

void explainUnorderedSet()
{
    /*
     * It stores unique but in unsorted order. everything is randomised
     * lower_bound and upper_bound does not work, rest all functions are
     * same as above, since it stores in randomised order, it has better
     * time complexity than set in most cases (O(1)), except when
     * collision happens then it is O(n) which is very unlikely
     */
}

void explainMap()
{
    /*
     * map stores unique keys in sorted order
     */
    map<int, int> mpp;

    map<int, pair<int, int>> mppq;

    map<pair<int, int>, int> mppqa;

    mpp[1] = 5;
    mpp.insert({3, 1});

    mppqa[{2, 3}] = 10;

    // traversal
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second;
    }
    cout << '\n';

    cout << mpp[2]; // prints value at 2 ; if not present, prints null or 0

    auto it = mpp.find(3); // gives iterator to memory location of the 3,1
    cout << (*it).second;  // prints the value at 3(1)

    auto it2 = mpp.find(5); // again points to after the map, end

    // rest all functions are same
}

void explainMultiMap()
{
    /*
     * everything is same as map, only it can store multiple keys
     * only map(key) cannot be used
     */
}

void explainUnorderedMap()
{
    // same as set and unordered_set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }

    if (p1.second > p2.second)
    {
        return false;
    }
    // they are same
    if (p1.first > p2.first)
    {
        return true;
    }
    return false;
}

void explainSTLAlgorithms()
{
    int n = 5;
    int a[n] = {3, 4, 52, 4, 1};

    sort(a, a + n); // will sort
    sort(a, a + n);
    /*
     * sort in stl is a mix of radix sort,
     */

    vector<int> toSort = {45, 43, 346};

    sort(toSort.begin(), toSort.end());

    sort(a + 2, a + 4);

    // my way sorting:
    pair<int, int> b[] = {{1, 3}, {3, 4}, {1, 1}};
    sort(b, b + n, comp);

    int num = 7;
    int cnt = __popcount(7);

    string nstring = "123";
    sort(nstring.begin(), nstring.end());

    do
    {
        cout << nstring << endl;
    } while (next_permutation(nstring.begin(), nstring.end()));

    int maxi = *max_element(a, a + n);
    // similarly in min_element
}

int main()
{
    // explainVector();

    return 0;
}
