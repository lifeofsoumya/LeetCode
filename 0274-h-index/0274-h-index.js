/**
 * @param {number[]} citations
 * @return {number}
 */
var hIndex = function(citations) {
    citations.sort((a,b)=> a-b);
    let n = citations.length;
    let res = 0;
    
    for(let i=0; i < n; i++){
        if(citations[i] >= n - i){
            res = n - i;
            break;
        }
    }
    return res;
};

