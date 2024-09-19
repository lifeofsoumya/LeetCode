/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    if(s.length !== t.length) return false;
    let mapST = new Map();
    let mapTS = new Map(); // two map from s to t, and t to s mapping
    for(let i = 0; i < s.length; i++){
        let charS = s[i];
        let charT = t[i];
        if (mapST.has(charS)) {
            if (mapST.get(charS) !== charT) return false;
        } else {
            mapST.set(charS, charT);
        }

        if (mapTS.has(charT)) {
            if (mapTS.get(charT) !== charS) return false;
        } else {
            mapTS.set(charT, charS); 
        }
    }
    return true;
};