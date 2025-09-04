/* File: OnlyConnect.cpp
 *
 * TODO: Edit these comments to describe anything interesting or noteworthy in your implementation.
 *
 * TODO: Edit these comments to leave a puzzle for your section leader to solve!
 */
#include "OnlyConnect.h"
#include "GUI/SimpleTest.h"
using namespace std;

string onlyConnectize(string phrase) {
    /* TODO: The next few lines just exist to make sure you don't get compiler warning messages
     * when this function isn't implemented. Delete these lines, then implement this function.
     */
    if (phrase.length() == 0) return "";
    int n = phrase.length() - 1;
    char tmp = phrase[n];
    tmp = toUpperCase(tmp);
    string tt;
    tt.push_back(tmp);
    phrase.pop_back();
    if (!isalpha(tmp)) return onlyConnectize(phrase);
    if (tmp == 'A') return onlyConnectize(phrase);
    if (tmp == 'E') return onlyConnectize(phrase);
    if (tmp == 'O') return onlyConnectize(phrase);
    if (tmp == 'U') return onlyConnectize(phrase);
    if (tmp == 'I') return onlyConnectize(phrase);
    return onlyConnectize(phrase) + tt;
}





/* * * * * * Provided Test Cases * * * * * */

PROVIDED_TEST("Converts lower-case to upper-case.") {
    EXPECT_EQUAL(onlyConnectize("lowercase"), "LWRCS");
    EXPECT_EQUAL(onlyConnectize("uppercase"), "PPRCS");
}

PROVIDED_TEST("Handles non-letter characters properly.") {
    EXPECT_EQUAL(onlyConnectize("2.718281828459045"), "");
    EXPECT_EQUAL(onlyConnectize("'Hi, Mom!'"), "HMM");
}

PROVIDED_TEST("Handles single-character inputs.") {
    EXPECT_EQUAL(onlyConnectize("A"), "");
    EXPECT_EQUAL(onlyConnectize("+"), "");
    EXPECT_EQUAL(onlyConnectize("Q"), "Q");
}

/* TODO: You will need to add your own tests into this suite of test cases. Think about the sorts
 * of inputs we tested here, and, importantly, what sorts of inputs we *didn't* test here. Some
 * general rules of testing:
 *
 *    1. Try extreme cases. What are some very large cases to check? What are some very small cases?
 *
 *    2. Be diverse. There are a lot of possible inputs out there. Make sure you have tests that account
 *       for cases that aren't just variations of one another.
 *
 *    3. Be sneaky. Don't just try standard inputs. Try weird ones that you wouldn't expect anyone to
 *       actually enter, but which are still perfectly legal.
 *
 * Happy testing!
 */
PROVIDED_TEST("Handles none-vowel inputs.") {
    EXPECT_EQUAL(onlyConnectize("YYY"), "YYY");
    EXPECT_EQUAL(onlyConnectize("GGGG"), "GGGG");
    EXPECT_EQUAL(onlyConnectize("QWRTYPSDFGHJKLMNBVCXZ"), "QWRTYPSDFGHJKLMNBVCXZ");
}






