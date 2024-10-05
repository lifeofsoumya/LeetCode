/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if(s.length !== t.length) return false;
    
    const m = new Map();
    for(let i of s){
        m.set(i, (m.get(i) || 0) + 1);
    }
    for(let i of t){
        if(!m.has(i)) return false;
        m.set(i, m.get(i) - 1);
        
        if (m.get(i) === 0) {
            m.delete(i);
        }
    }
    return m.size == 0;
};