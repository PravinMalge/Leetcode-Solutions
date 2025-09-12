class Solution {
public:
    void removeOcc(string& s, string& part) {
        int found = s.find(part);
        if (found != string::npos) {
            string leftPart = s.substr(0, found);
            string rightPart = s.substr(found + part.size(), s.size());
            s = leftPart + rightPart;

            removeOcc(s, part);
        } else {
            return;
        }
    }

    string removeOccurrences(string s, string part) {
        removeOcc(s, part);
        return s;
    }
};