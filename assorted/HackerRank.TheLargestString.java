/*
1. The Largest String

Given a string, construct a new string by rearranging the original string and deleting characters as needed. Return the alphabetically largest string that can be constructed respecting a limit as to how many consecutive characters can be the same.
Example
s = 'baccc'
k = 2 

The largest string, alphabetically, is 'cccba' but it is not allowed because it uses the character 'c' more than 2 times consecutively. Therefore, the answer is 'ccbca'.
* 
Function Description
Complete the function getLargestString in the editor below. 

getLargestString has the following parameters:

    string s[n]:  the original string

    int k: the maximum number of identical consecutive characters the new string can have

Returns:
    string: the alphabetically largest string that can be constructed that has no more than k identical consecutive characters

Constraints
    1 ≤ n ≤ 105
    1 ≤ k ≤ 103 
    The string s contains only lowercase English letters. 
 
Input Format For Custom Testing
    The first line contains a string, s.
    The second line contains an integer, k.

Sample Case 0
Sample Input
STDIN     Function
-----     -----
zzzazz →  string s = 'zzzazz'
2      →  k = 2
Sample Output
zzazz
Explanation
One 'z' must be removed so that no more than 2 consecutive characters are the same.
Sample Case 1

Sample Input
STDIN     Function
-----     -----
axxzzx →  s = 'axxzzx'
2      →  k = 2
Sample Output
zzxxax
Explanation
The character 'a' must separate the 3 'x' characters so that no more than 2 consecutive characters are the same.

 */

class Main {

    /*
     * Complete the 'getLargestString' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts following parameters:
     *  1. STRING s
     *  2. INTEGER k
     */
    public static String getLargestString(String s, int k) {

        char[] base = s.toCharArray();
        int[] charCount = new int['z' - 'a' + 1];
        char[] toReturn = new char[s.length()];
        int counter = 0;
        int index = 0;

        // Populate charCount with the count of each chars, starting
        // with 'a' on position 0, 'b' on 1, etc.
        for (int i = 0; i < s.length(); ++i) {
            ++charCount[base[i] - 'a'];
        }

        // Exercise wants the biggest alphabetically string possible. As if the letter 'a'
        // is worth 0 points, 'b' 1 point, 'e', 4 points, etc. So the string with most
        // poits possible. Greedy algorithm, start with z, and always get the letter that
        // is worth most points.
        for (int i = 'z' - 'a'; i >= 0; --i) {

            // If there are characters left with that letter.
            while (charCount[i] > 0) {
                toReturn[index] = (char) (i + 'a');
                --charCount[i];
                ++index;
                ++counter;

                // Quit this letter if there is no more of it left, to 
                // simplify next if loop.
                if (charCount[i] == 0) {
                    counter = 0;
                    break;
                }

                // If you hit couter(k) limit, print next available character.
                // If there are no characters available, print string as is.
                if (counter == k) {
                    int j = i - 1;
                    while (j >= 0) {
                        if (charCount[j] > 0) {
                            toReturn[index] = (char) (j + 'a');
                            --charCount[j];
                            ++index;
                            counter = 0;
                            break;
                        }
                        --j;
                    }

                    // No options left, print as is.
                    if (j == -1) {
                        // The return below causes equality problem with the
                        // checker, because of the leftover spaces in the array,
                        // despite looking the same. So make a new String instead.
                        //return String.valueOf(toReturn);
                        StringBuilder altToReturn = new StringBuilder();
                        for (int l = 0; ((toReturn[l] >= 'a') && (toReturn[l] <= 'z')); ++l) {
                            altToReturn.append(toReturn[l]);
                        }
                        return altToReturn.toString();
                    }
                }
            }
        }
        return String.valueOf(toReturn);

    }

    // Test results
    public static void main(String[] args) {
        int counter = 2;
        String string = "azzxxx";
        //String string = "azzzzz";
        //String string = "zxzuvozyzvzywvxyqxzxzyywyxwyzxxwzwzyzzzzyxzvzxxywx";
        System.out.println(Main.getLargestString(string, counter));
    }
}
