/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function(ransomNote, magazine) {
    
    const tempMap = new Map();
    for(const c of magazine) {
        if(!tempMap.has(c)) {
            tempMap.set(c, 0);
        }
        tempMap.set(c, tempMap.get(c) + 1);
    }
    
    for(const c of ransomNote) {
        if(!tempMap.has(c)) return false;
        else {
            tempMap.set(c, tempMap.get(c) - 1);
            if(tempMap.get(c) == 0) tempMap.delete(c);
        }
    }
    return true;
};
