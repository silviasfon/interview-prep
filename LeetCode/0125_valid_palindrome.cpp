// 125 - Valid Palindrome
// Complexity: O(n)

bool isPalindrome(string s) {

    int end = s.length()-1;

    for(int i = 0; i < s.length(); i++, end--){
        while(i < s.length() && !isalnum(s[i]))
            i++;

        while(end >=0 && !isalnum(s[end]))
            end--;

        if(end < i)
            break;

        if(tolower(s[i]) != tolower(s[end]))
            return false;
    }
    
    return true;
}