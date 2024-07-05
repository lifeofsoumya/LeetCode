/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isSubsequence = function(s, t) {
    if(s == t) return true;
    let sP = 0;
    let tP = 0;
    while(sP < s.length && tP < t.length){
        if(s[sP] == t[tP]) sP++;
        tP++;
    }
    return sP == s.length;
};