// 1832 - Check if the Sentence Is Pangram
// Complexity: O(n)

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