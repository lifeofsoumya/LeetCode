var hIndex = function(citations) {
    const n = citations.length;
    const count = new Array(n + 1).fill(0);
    
    for (let c of citations) {
        if (c >= n) {
            count[n]++;
        } else {
            count[c]++;
        }
    }
    
    let total = 0;
    for (let i = n; i >= 0; i--) {
        total += count[i];
        if (total >= i) {
            return i;
        }
    }
    
    return 0;
};