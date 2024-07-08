/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    let maxAlt = 0;
    let currAlt = 0
    for(let i = 0; i < gain.length; i++){
        currAlt += gain[i]
        maxAlt = Math.max(currAlt, maxAlt);
    }
    return maxAlt;
};