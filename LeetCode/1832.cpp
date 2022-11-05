// 1832 - Check if the Sentence Is Pangram
// Time complexity: O(n+a), a being the size of the alphabet
// Space complexity: O(a), a being the size of the alphabet

bool checkIfPangram(string sentence) {

    vector<int> alphabet(26, 0);

    for(auto letter : sentence){
        alphabet[letter-'a']++;
    }

    for(auto count : alphabet){
        if(count == 0)
            return false;
    }

    return true;
}